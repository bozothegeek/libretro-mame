// license:BSD-3-Clause
// copyright-holders:David Haywood, hap
/*

Chess King, LCD handheld presumably from Taiwan
Hold down u+d+l+r buttons at boot to enter a test/data clear mode of sorts.

TODO:
- lots of unknown writes
- sound emulation is guessed
- LCD chip(s) is not emulated, maybe the I/O chip does a DMA from main RAM to the LCD?
- cartridge, probably at 0x20000

Hardware notes:

Main:
- PCB label: TD-24
- NEC D70108HG-10 V20, 9.600MHz XTAL
- 64KB ROM (2*SRM20256), 256KB ROM (custom label)
- unknown 80 pin QFP, label CCH01 ET-MATE F3X0 713, assume custom I/O chip
- cartridge slot

LCD module:
- PCB label: P102-2, DATA VISION
- 2*Hitachi HD66204F, Hitachi HD66205F
- unknown 80 pin QFP, label 16160 S2RB 94.10
- 160*160 LCD screen

*/

#include "emu.h"

#include "cpu/nec/nec.h"
#include "machine/nvram.h"
#include "sound/beep.h"

#include "screen.h"
#include "speaker.h"

namespace {

class chessking_state : public driver_device
{
public:
	chessking_state(const machine_config &mconfig, device_type type, const char *tag) :
		driver_device(mconfig, type, tag),
		m_maincpu(*this, "maincpu"),
		m_screen(*this, "screen"),
		m_mainram(*this, "mainram"),
		m_beeper(*this, "beeper")
	{ }

	void chesskng(machine_config &config);

protected:
	virtual void machine_start() override;

private:
	required_device<cpu_device> m_maincpu;
	required_device<screen_device> m_screen;
	required_shared_ptr<uint8_t> m_mainram;
	required_device<beep_device> m_beeper;

	void chesskng_map(address_map &map);
	void chesskng_io(address_map &map);

	void update_beeper();

	void unk_1f_w(uint8_t data);
	void unk_2f_w(uint8_t data);
	uint8_t unk_3f_r();
	void unk_3f_w(uint8_t data);
	void irq_clear_w(uint8_t data);
	void unk_5f_w(uint8_t data);
	void unk_6f_w(uint8_t data);
	void unk_7f_w(uint8_t data);
	void beeper_freq_low_w(uint8_t data);
	void beeper_freq_high_w(uint8_t data);
	void beeper_enable_w(uint8_t data);

	INTERRUPT_GEN_MEMBER(interrupt);

	uint32_t screen_update(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	uint8_t m_3f_data = 0;
	uint16_t m_beeper_freq = 0;
};

void chessking_state::machine_start()
{
	save_item(NAME(m_3f_data));
	save_item(NAME(m_beeper_freq));
}

void chessking_state::unk_1f_w(uint8_t data)
{
	logerror("%s: 1f write %02x\n", machine().describe_context(), data);
}

void chessking_state::unk_2f_w(uint8_t data)
{
	logerror("%s: 2f write %02x\n", machine().describe_context(), data);
}

uint8_t chessking_state::unk_3f_r()
{
	// could this be the volume dial? gets used for writes to 0xaf
	// - unlikely as there's little reason for it to work this way
	return m_3f_data;
}

void chessking_state::unk_3f_w(uint8_t data)
{
	//logerror("%s: 3f write %02x\n", machine().describe_context(), data);
	m_3f_data = data;
}

void chessking_state::irq_clear_w(uint8_t data)
{
	// writes here at the start of irq routine
	m_maincpu->set_input_line(0, CLEAR_LINE);
}

void chessking_state::unk_5f_w(uint8_t data)
{
	logerror("%s: 5f write %02x\n", machine().describe_context(), data);
}

void chessking_state::unk_6f_w(uint8_t data)
{
	logerror("%s: 6f write %02x\n", machine().describe_context(), data);
}

void chessking_state::unk_7f_w(uint8_t data)
{
	// writes values from 0x07 to 0x00 before menu appears, also writes 0x00 / 0x01 when audio is playing
	logerror("%s: 7f write %02x\n", machine().describe_context(), data);
}

void chessking_state::beeper_freq_low_w(uint8_t data)
{
	//logerror("%s: 8f write %02x\n", machine().describe_context(), data);
	m_beeper_freq = (m_beeper_freq & 0xff00) | data;
	update_beeper();
}

void chessking_state::beeper_freq_high_w(uint8_t data)
{
	//logerror("%s: 9f write %02x\n", machine().describe_context(), data);
	m_beeper_freq = (m_beeper_freq & 0x00ff) | data << 8;
	update_beeper();
}

void chessking_state::beeper_enable_w(uint8_t data)
{
	// writes same value here after writing to 0x3f, assume sound related since
	// the register is in proximity of sound freq registers
	m_beeper->set_state(BIT(data, 3));
}

void chessking_state::update_beeper()
{
	double step = (9.6_MHz_XTAL).dvalue() / 0x100000;
	m_beeper->set_clock(((0xffff ^ m_beeper_freq) + 1) * step);
}

void chessking_state::chesskng_map(address_map &map)
{
	map(0x00000, 0x0ffff).ram().share(m_mainram);
	map(0x80000, 0x9ffff).rom().region("maincpu", 0x00000);
	// gap in ROM space?
	map(0xe0000, 0xfffff).rom().region("maincpu", 0x20000);
}

void chessking_state::chesskng_io(address_map &map)
{
	map(0x0f, 0x0f).portr("BUTTONS");
	map(0x3f, 0x3f).r(FUNC(chessking_state::unk_3f_r));

	map(0x1f, 0x1f).w(FUNC(chessking_state::unk_1f_w)); // start-up only
	map(0x2f, 0x2f).w(FUNC(chessking_state::unk_2f_w)); // start-up only
	map(0x3f, 0x3f).w(FUNC(chessking_state::unk_3f_w)); // frequently, at the same times as 7f/8f/9f/af writes, note address is also read
	map(0x4f, 0x4f).w(FUNC(chessking_state::irq_clear_w)); // irq clear?
	map(0x5f, 0x5f).w(FUNC(chessking_state::unk_5f_w)); // start-up only
	map(0x6f, 0x6f).w(FUNC(chessking_state::unk_6f_w)); // less frequently than below

	// are these all sound related? they all occur when sounds might be expected
	map(0x7f, 0x7f).w(FUNC(chessking_state::unk_7f_w)); // frequently written at a similar time to the audio
	map(0x8f, 0x8f).w(FUNC(chessking_state::beeper_freq_low_w)); // beeper freq low?
	map(0x9f, 0x9f).w(FUNC(chessking_state::beeper_freq_high_w)); // beeper freq high?
	map(0xaf, 0xaf).w(FUNC(chessking_state::beeper_enable_w)); // beeper enable?
}

uint32_t chessking_state::screen_update(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	// quickly draw from memory (should be handled by LCDC?)
	for (int y = cliprect.min_y; y <= cliprect.max_y; y++)
	{
		int offset = y * 256 / 8;

		uint32_t *dst = &bitmap.pix(y);
		for (int x = cliprect.min_x; x <= cliprect.max_x; x++)
		{
			// 2 256x256 images (160x160 area used) one at c000, one at e000 to form 2bpp graphics
			uint8_t data = m_mainram[0xc000 + offset + x/8];
			uint8_t data2 = m_mainram[0xe000 + offset + x/8];

			int xx = x % 8;

			uint8_t pix = (data >> (7 - xx)) & 1;
			pix |= ((data2 >> (7 - xx)) & 1) << 1;

			rgb_t pens[4] = { rgb_t::white(), rgb_t(0x40,0x40,0x40), rgb_t(0xc0,0xc0,0xc0), rgb_t::black() };
			dst[x] = pens[pix];
		}
	}

	return 0;
}

static INPUT_PORTS_START( chesskng )
	PORT_START("BUTTONS")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_SELECT )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_START )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON2 ) // A
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON1 ) // B
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_JOYSTICK_UP ) PORT_16WAY
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_JOYSTICK_RIGHT ) PORT_16WAY
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_JOYSTICK_DOWN ) PORT_16WAY
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_JOYSTICK_LEFT ) PORT_16WAY
INPUT_PORTS_END

INTERRUPT_GEN_MEMBER(chessking_state::interrupt)
{
	device.execute().set_input_line_and_vector(0, ASSERT_LINE, 0x20/4);
}

void chessking_state::chesskng(machine_config &config)
{
	// Basic machine hardware
	V20(config, m_maincpu, 9.6_MHz_XTAL); // D70108HG-10 V20
	m_maincpu->set_addrmap(AS_PROGRAM, &chessking_state::chesskng_map);
	m_maincpu->set_addrmap(AS_IO, &chessking_state::chesskng_io);

	attotime irq_freq = attotime::from_hz(9.6_MHz_XTAL / 0x10000); // gives approximate seconds on timer
	m_maincpu->set_periodic_int(FUNC(chessking_state::interrupt), irq_freq);

	NVRAM(config, "mainram", nvram_device::DEFAULT_ALL_0);

	// Video hardware
	SCREEN(config, m_screen, SCREEN_TYPE_LCD);
	m_screen->set_refresh_hz(60);
	m_screen->set_size(160, 160);
	m_screen->set_visarea_full();
	m_screen->set_screen_update(FUNC(chessking_state::screen_update));

	// Sound hardware
	SPEAKER(config, "mono").front_center();

	BEEP(config, m_beeper, 0);
	m_beeper->add_route(ALL_OUTPUTS, "mono", 0.5);

	// Has a cartridge slot
}

ROM_START( chesskng )
	ROM_REGION( 0x040000, "maincpu", 0 )
	ROM_LOAD( "etmate-cch.u6", 0x000000, 0x040000, CRC(a4d1764b) SHA1(ccfae1e985f6ad316ff192206fbc0f8bcd4e44d5) )
ROM_END

} // anonymous namespace


CONS( 1994, chesskng, 0, 0, chesskng, chesskng, chessking_state, empty_init, "I-Star Co., Ltd.", "Chess King (Model ET-6)", MACHINE_IMPERFECT_SOUND ) // sound not 100% verified against device output
