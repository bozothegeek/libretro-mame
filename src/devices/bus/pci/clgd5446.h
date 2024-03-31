// license:BSD-3-Clause
// copyright-holders:Angelo Salese
#ifndef MAME_BUS_PCI_CLGD5446_H
#define MAME_BUS_PCI_CLGD5446_H

#pragma once

#include "pci_slot.h"
#include "video/pc_vga_cirrus.h"

class cirrus_gd5446_pci_device :  public pci_card_device
{
public:
	cirrus_gd5446_pci_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock);

	void legacy_memory_map(address_map &map);
	void legacy_io_map(address_map &map);

protected:
	virtual void device_start() override;
	virtual void device_reset() override;
	virtual void device_add_mconfig(machine_config &config) override;

	virtual const tiny_rom_entry *device_rom_region() const override;

	virtual void map_extra(uint64_t memory_window_start, uint64_t memory_window_end, uint64_t memory_offset, address_space *memory_space,
						   uint64_t io_window_start, uint64_t io_window_end, uint64_t io_offset, address_space *io_space) override;

	virtual void config_map(address_map &map) override;

	virtual void mmio_map(address_map &map);
	virtual void vram_aperture_map(address_map &map);
	virtual void gpio_map(address_map &map);
private:
	required_device<cirrus_gd5446_vga_device> m_vga;
	required_memory_region m_vga_rom;

	u8 vram_r(offs_t offset);
	void vram_w(offs_t offset, uint8_t data);

//  u32 unmap_log_r(offs_t offset, u32 mem_mask = ~0);
//  void unmap_log_w(offs_t offset, u32 data, u32 mem_mask = ~0);
};

DECLARE_DEVICE_TYPE(GD5446_PCI, cirrus_gd5446_pci_device)

#endif // MAME_BUS_PCI_CLGD546X_LAGUNA_H
