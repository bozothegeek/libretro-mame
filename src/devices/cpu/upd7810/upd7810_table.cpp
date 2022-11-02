// license:BSD-3-Clause
// copyright-holders:Juergen Buchmueller
/*****************************************************************************
 *
 *   Portable uPD7810/11, 7810H/11H, 78C10/C11/C14 emulator V0.2
 *
 *   7810tbl.inc  - function pointer tables
 *
 *   Some uPD7807-specific timing information comes from http://www.st.rim.or.jp/~nkomatsu/nec/uPD7807.html
 *
 *****************************************************************************/

#include "emu.h"
#include "upd7810.h"

/* prefix 48 */
const struct upd7810_device::opcode_s upd7810_device::s_op48[256] =
{
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 00: 0100 1000 0000 0000                      */
	{&upd7810_device::SLRC_A,        2, 8, 8,L0|L1}, /* 01: 0100 1000 0000 0001                      */
	{&upd7810_device::SLRC_B,        2, 8, 8,L0|L1}, /* 02: 0100 1000 0000 0010                      */
	{&upd7810_device::SLRC_C,        2, 8, 8,L0|L1}, /* 03: 0100 1000 0000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 04: 0100 1000 0000 0100                      */
	{&upd7810_device::SLLC_A,        2, 8, 8,L0|L1}, /* 05: 0100 1000 0000 0101                      */
	{&upd7810_device::SLLC_B,        2, 8, 8,L0|L1}, /* 06: 0100 1000 0000 0110                      */
	{&upd7810_device::SLLC_C,        2, 8, 8,L0|L1}, /* 07: 0100 1000 0000 0111                      */
	{&upd7810_device::SK_NV,         2, 8, 8,L0|L1}, /* 08: 0100 1000 0000 1000                      */ /* not directly documented, but has flag set to '-' which I assume is always 0, so this opcode is 'Skip Never' */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 09: 0100 1000 0000 1001                      */
	{&upd7810_device::SK_CY,         2, 8, 8,L0|L1}, /* 0a: 0100 1000 0000 1010                      */
	{&upd7810_device::SK_HC,         2, 8, 8,L0|L1}, /* 0b: 0100 1000 0000 1011                      */
	{&upd7810_device::SK_Z,          2, 8, 8,L0|L1}, /* 0c: 0100 1000 0000 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0d: 0100 1000 0000 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0e: 0100 1000 0000 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0f: 0100 1000 0000 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 10: 0100 1000 0001 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 11: 0100 1000 0001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 12: 0100 1000 0001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 13: 0100 1000 0001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 14: 0100 1000 0001 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 15: 0100 1000 0001 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 16: 0100 1000 0001 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 17: 0100 1000 0001 0111                      */
	{&upd7810_device::SKN_NV,        2, 8, 8,L0|L1}, /* 18: 0100 1000 0001 1000                      */ /* not directly documented, but has flag set to '-' which I assume is always 0, so this opcode is 'Skip Always' */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 19: 0100 1000 0001 1001                      */
	{&upd7810_device::SKN_CY,        2, 8, 8,L0|L1}, /* 1a: 0100 1000 0001 1010                      */
	{&upd7810_device::SKN_HC,        2, 8, 8,L0|L1}, /* 1b: 0100 1000 0001 1011                      */
	{&upd7810_device::SKN_Z,         2, 8, 8,L0|L1}, /* 1c: 0100 1000 0001 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1d: 0100 1000 0001 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1e: 0100 1000 0001 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1f: 0100 1000 0001 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 20: 0100 1000 0010 0000                      */
	{&upd7810_device::SLR_A,         2, 8, 8,L0|L1}, /* 21: 0100 1000 0010 0001                      */
	{&upd7810_device::SLR_B,         2, 8, 8,L0|L1}, /* 22: 0100 1000 0010 0010                      */
	{&upd7810_device::SLR_C,         2, 8, 8,L0|L1}, /* 23: 0100 1000 0010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 24: 0100 1000 0010 0100                      */
	{&upd7810_device::SLL_A,         2, 8, 8,L0|L1}, /* 25: 0100 1000 0010 0101                      */
	{&upd7810_device::SLL_B,         2, 8, 8,L0|L1}, /* 26: 0100 1000 0010 0110                      */
	{&upd7810_device::SLL_C,         2, 8, 8,L0|L1}, /* 27: 0100 1000 0010 0111                      */
	{&upd7810_device::JEA,           2, 8, 8,L0|L1}, /* 28: 0100 1000 0010 1000                      */
	{&upd7810_device::CALB,          2,17, 8,L0|L1}, /* 29: 0100 1000 0010 1001                      */
	{&upd7810_device::CLC,           2, 8, 8,L0|L1}, /* 2a: 0100 1000 0010 1010                      */
	{&upd7810_device::STC,           2, 8, 8,L0|L1}, /* 2b: 0100 1000 0010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2c: 0100 1000 0010 1100                      */
	{&upd7810_device::MUL_A,         2,32, 8,L0|L1}, /* 2d: 0100 1000 0010 1101                      */
	{&upd7810_device::MUL_B,         2,32, 8,L0|L1}, /* 2e: 0100 1000 0010 1110                      */
	{&upd7810_device::MUL_C,         2,32, 8,L0|L1}, /* 2f: 0100 1000 0010 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 30: 0100 1000 0011 0000                      */
	{&upd7810_device::RLR_A,         2, 8, 8,L0|L1}, /* 31: 0100 1000 0011 0001                      */
	{&upd7810_device::RLR_B,         2, 8, 8,L0|L1}, /* 32: 0100 1000 0011 0010                      */
	{&upd7810_device::RLR_C,         2, 8, 8,L0|L1}, /* 33: 0100 1000 0011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 34: 0100 1000 0011 0100                      */
	{&upd7810_device::RLL_A,         2, 8, 8,L0|L1}, /* 35: 0100 1000 0011 0101                      */
	{&upd7810_device::RLL_B,         2, 8, 8,L0|L1}, /* 36: 0100 1000 0011 0110                      */
	{&upd7810_device::RLL_C,         2, 8, 8,L0|L1}, /* 37: 0100 1000 0011 0111                      */
	{&upd7810_device::RLD,           2,17, 8,L0|L1}, /* 38: 0100 1000 0011 1000                      */
	{&upd7810_device::RRD,           2,17, 8,L0|L1}, /* 39: 0100 1000 0011 1001                      */
	{&upd7810_device::NEGA,          2, 8, 8,L0|L1}, /* 3a: 0100 1000 0011 1010                      */
	{&upd7810_device::HALT,          2,12, 8,L0|L1}, /* 3b: 0100 1000 0011 1011                      */ /* Mnemonic should be HLT? Note the timing differs between the upd7810 and upd78c10: 7810 takes 11 cycles, 78c10 takes 12; both take 8 when skipped */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3c: 0100 1000 0011 1100                      */
	{&upd7810_device::DIV_A,         2,59, 8,L0|L1}, /* 3d: 0100 1000 0011 1101                      */
	{&upd7810_device::DIV_B,         2,59, 8,L0|L1}, /* 3e: 0100 1000 0011 1110                      */
	{&upd7810_device::DIV_C,         2,59, 8,L0|L1}, /* 3f: 0100 1000 0011 1111                      */

	{&upd7810_device::SKIT_NMI,      2, 8, 8,L0|L1}, /* 40: 0100 1000 0100 0000                      */
	{&upd7810_device::SKIT_FT0,      2, 8, 8,L0|L1}, /* 41: 0100 1000 0100 0001                      */
	{&upd7810_device::SKIT_FT1,      2, 8, 8,L0|L1}, /* 42: 0100 1000 0100 0010                      */
	{&upd7810_device::SKIT_F1,       2, 8, 8,L0|L1}, /* 43: 0100 1000 0100 0011                      */
	{&upd7810_device::SKIT_F2,       2, 8, 8,L0|L1}, /* 44: 0100 1000 0100 0100                      */
	{&upd7810_device::SKIT_FE0,      2, 8, 8,L0|L1}, /* 45: 0100 1000 0100 0101                      */
	{&upd7810_device::SKIT_FE1,      2, 8, 8,L0|L1}, /* 46: 0100 1000 0100 0110                      */
	{&upd7810_device::SKIT_FEIN,     2, 8, 8,L0|L1}, /* 47: 0100 1000 0100 0111                      */
	{&upd7810_device::SKIT_FAD,      2, 8, 8,L0|L1}, /* 48: 0100 1000 0100 1000                      */
	{&upd7810_device::SKIT_FSR,      2, 8, 8,L0|L1}, /* 49: 0100 1000 0100 1001                      */
	{&upd7810_device::SKIT_FST,      2, 8, 8,L0|L1}, /* 4a: 0100 1000 0100 1010                      */
	{&upd7810_device::SKIT_ER,       2, 8, 8,L0|L1}, /* 4b: 0100 1000 0100 1011                      */
	{&upd7810_device::SKIT_OV,       2, 8, 8,L0|L1}, /* 4c: 0100 1000 0100 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4d: 0100 1000 0100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4e: 0100 1000 0100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4f: 0100 1000 0100 1111                      */

	{&upd7810_device::SKIT_AN4,      2, 8, 8,L0|L1}, /* 50: 0100 1000 0101 0000                      */
	{&upd7810_device::SKIT_AN5,      2, 8, 8,L0|L1}, /* 51: 0100 1000 0101 0001                      */
	{&upd7810_device::SKIT_AN6,      2, 8, 8,L0|L1}, /* 52: 0100 1000 0101 0010                      */
	{&upd7810_device::SKIT_AN7,      2, 8, 8,L0|L1}, /* 53: 0100 1000 0101 0011                      */
	{&upd7810_device::SKIT_SB,       2, 8, 8,L0|L1}, /* 54: 0100 1000 0101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 55: 0100 1000 0101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 56: 0100 1000 0101 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 57: 0100 1000 0101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 58: 0100 1000 0101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 59: 0100 1000 0101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5a: 0100 1000 0101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5b: 0100 1000 0101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5c: 0100 1000 0101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5d: 0100 1000 0101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5e: 0100 1000 0101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5f: 0100 1000 0101 1111                      */

	{&upd7810_device::SKNIT_NMI,     2, 8, 8,L0|L1}, /* 60: 0100 1000 0110 0000                      */
	{&upd7810_device::SKNIT_FT0,     2, 8, 8,L0|L1}, /* 61: 0100 1000 0110 0001                      */
	{&upd7810_device::SKNIT_FT1,     2, 8, 8,L0|L1}, /* 62: 0100 1000 0110 0010                      */
	{&upd7810_device::SKNIT_F1,      2, 8, 8,L0|L1}, /* 63: 0100 1000 0110 0011                      */
	{&upd7810_device::SKNIT_F2,      2, 8, 8,L0|L1}, /* 64: 0100 1000 0110 0100                      */
	{&upd7810_device::SKNIT_FE0,     2, 8, 8,L0|L1}, /* 65: 0100 1000 0110 0101                      */
	{&upd7810_device::SKNIT_FE1,     2, 8, 8,L0|L1}, /* 66: 0100 1000 0110 0110                      */
	{&upd7810_device::SKNIT_FEIN,    2, 8, 8,L0|L1}, /* 67: 0100 1000 0110 0111                      */
	{&upd7810_device::SKNIT_FAD,     2, 8, 8,L0|L1}, /* 68: 0100 1000 0110 1000                      */
	{&upd7810_device::SKNIT_FSR,     2, 8, 8,L0|L1}, /* 69: 0100 1000 0110 1001                      */
	{&upd7810_device::SKNIT_FST,     2, 8, 8,L0|L1}, /* 6a: 0100 1000 0110 1010                      */
	{&upd7810_device::SKNIT_ER,      2, 8, 8,L0|L1}, /* 6b: 0100 1000 0110 1011                      */
	{&upd7810_device::SKNIT_OV,      2, 8, 8,L0|L1}, /* 6c: 0100 1000 0110 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6d: 0100 1000 0110 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6e: 0100 1000 0110 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6f: 0100 1000 0110 1111                      */

	{&upd7810_device::SKNIT_AN4,     2, 8, 8,L0|L1}, /* 70: 0100 1000 0111 0000                      */
	{&upd7810_device::SKNIT_AN5,     2, 8, 8,L0|L1}, /* 71: 0100 1000 0111 0001                      */
	{&upd7810_device::SKNIT_AN6,     2, 8, 8,L0|L1}, /* 72: 0100 1000 0111 0010                      */
	{&upd7810_device::SKNIT_AN7,     2, 8, 8,L0|L1}, /* 73: 0100 1000 0111 0011                      */
	{&upd7810_device::SKNIT_SB,      2, 8, 8,L0|L1}, /* 74: 0100 1000 0111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 75: 0100 1000 0111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 76: 0100 1000 0111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 77: 0100 1000 0111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 78: 0100 1000 0111 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 79: 0100 1000 0111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7a: 0100 1000 0111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7b: 0100 1000 0111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7c: 0100 1000 0111 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7d: 0100 1000 0111 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7e: 0100 1000 0111 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7f: 0100 1000 0111 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 80: 0100 1000 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 81: 0100 1000 1000 0001                      */
	{&upd7810_device::LDEAX_D,       2,14, 8,L0|L1}, /* 82: 0100 1000 1000 0010                      */
	{&upd7810_device::LDEAX_H,       2,14, 8,L0|L1}, /* 83: 0100 1000 1000 0011                      */
	{&upd7810_device::LDEAX_Dp,      2,14, 8,L0|L1}, /* 84: 0100 1000 1000 0100                      */
	{&upd7810_device::LDEAX_Hp,      2,14, 8,L0|L1}, /* 85: 0100 1000 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 86: 0100 1000 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 87: 0100 1000 1000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 88: 0100 1000 1000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 89: 0100 1000 1000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8a: 0100 1000 1000 1010                      */
	{&upd7810_device::LDEAX_D_xx,    3,20,11,L0|L1}, /* 8b: 0100 1000 1000 1011 xxxx xxxx            */
	{&upd7810_device::LDEAX_H_A,     2,20,11,L0|L1}, /* 8c: 0100 1000 1000 1100                      */
	{&upd7810_device::LDEAX_H_B,     2,20,11,L0|L1}, /* 8d: 0100 1000 1000 1101                      */
	{&upd7810_device::LDEAX_H_EA,    2,20,11,L0|L1}, /* 8e: 0100 1000 1000 1110                      */
	{&upd7810_device::LDEAX_H_xx,    3,20,11,L0|L1}, /* 8f: 0100 1000 1000 1111 xxxx xxxx            */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 90: 0100 1000 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 91: 0100 1000 1000 0001                      */
	{&upd7810_device::STEAX_D,       2,14, 8,L0|L1}, /* 92: 0100 1000 1000 0010                      */
	{&upd7810_device::STEAX_H,       2,14, 8,L0|L1}, /* 93: 0100 1000 1000 0011                      */
	{&upd7810_device::STEAX_Dp,      2,14, 8,L0|L1}, /* 94: 0100 1000 1000 0100                      */
	{&upd7810_device::STEAX_Hp,      2,14, 8,L0|L1}, /* 95: 0100 1000 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 96: 0100 1000 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 97: 0100 1000 1000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 98: 0100 1000 1000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 99: 0100 1000 1000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9a: 0100 1000 1000 1010                      */
	{&upd7810_device::STEAX_D_xx,    3,20,11,L0|L1}, /* 9b: 0100 1000 1000 1011 xxxx xxxx            */
	{&upd7810_device::STEAX_H_A,     2,20,11,L0|L1}, /* 9c: 0100 1000 1000 1100                      */
	{&upd7810_device::STEAX_H_B,     2,20,11,L0|L1}, /* 9d: 0100 1000 1000 1101                      */
	{&upd7810_device::STEAX_H_EA,    2,20,11,L0|L1}, /* 9e: 0100 1000 1000 1110                      */
	{&upd7810_device::STEAX_H_xx,    3,20,11,L0|L1}, /* 9f: 0100 1000 1000 1111 xxxx xxxx            */

	{&upd7810_device::DSLR_EA,       2, 8, 8,L0|L1}, /* a0: 0100 1000 1010 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a1: 0100 1000 1010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a2: 0100 1000 1010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a3: 0100 1000 1010 0011                      */
	{&upd7810_device::DSLL_EA,       2, 8, 8,L0|L1}, /* a4: 0100 1000 1010 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a5: 0100 1000 1010 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a6: 0100 1000 1010 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a7: 0100 1000 1010 0111                      */
	{&upd7810_device::TABLE,         2,17, 8,L0|L1}, /* a8: 0100 1000 1010 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a9: 0100 1000 1010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* aa: 0100 1000 1010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ab: 0100 1000 1010 1011                      */
//  {&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ac: 0100 1000 1010 1100                      */
//  {&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ad: 0100 1000 1010 1101                      */
//  {&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ae: 0100 1000 1010 1110                      */
//  {&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* af: 0100 1000 1010 1111                      */
	{&upd7810_device::EXA,           2, 8, 8,L0|L1}, /* ac: 0100 1000 1010 1100                      */  /* 7807 only */
	{&upd7810_device::EXR,           2, 8, 8,L0|L1}, /* ad: 0100 1000 1010 1101                      */  /* 7807 only */
	{&upd7810_device::EXH,           2, 8, 8,L0|L1}, /* ae: 0100 1000 1010 1110                      */  /* 7807 only */
	{&upd7810_device::EXX,           2, 8, 8,L0|L1}, /* af: 0100 1000 1010 1111                      */  /* 7807 only */
	{&upd7810_device::DRLR_EA,       2, 8, 8,L0|L1}, /* b0: 0100 1000 1011 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b1: 0100 1000 1011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b2: 0100 1000 1011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b3: 0100 1000 1011 0011                      */
	{&upd7810_device::DRLL_EA,       2, 8, 8,L0|L1}, /* b4: 0100 1000 1011 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b5: 0100 1000 1011 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b6: 0100 1000 1011 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b7: 0100 1000 1011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b8: 0100 1000 1011 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b9: 0100 1000 1011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ba: 0100 1000 1011 1010                      */
	{&upd7810_device::STOP,          2,12, 8,L0|L1}, /* bb: 0100 1000 1011 1011                      */ /* CMOS 78c1x only */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bc: 0100 1000 1011 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bd: 0100 1000 1011 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* be: 0100 1000 1011 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bf: 0100 1000 1011 1111                      */

	{&upd7810_device::DMOV_EA_ECNT,  2,14, 8,L0|L1}, /* c0: 0100 1000 1100 0000                      */
	{&upd7810_device::DMOV_EA_ECPT,  2,14, 8,L0|L1}, /* c1: 0100 1000 1100 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c2: 0100 1000 1100 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c3: 0100 1000 1100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c4: 0100 1000 1100 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c5: 0100 1000 1100 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c6: 0100 1000 1100 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c7: 0100 1000 1100 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c8: 0100 1000 1100 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c9: 0100 1000 1100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ca: 0100 1000 1100 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cb: 0100 1000 1100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cc: 0100 1000 1100 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cd: 0100 1000 1100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ce: 0100 1000 1100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cf: 0100 1000 1100 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d0: 0100 1000 1101 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d1: 0100 1000 1101 0001                      */
	{&upd7810_device::DMOV_ETM0_EA,  2,14, 8,L0|L1}, /* d2: 0100 1000 1101 0010                      */
	{&upd7810_device::DMOV_ETM1_EA,  2,14, 8,L0|L1}, /* d3: 0100 1000 1101 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d4: 0100 1000 1101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d5: 0100 1000 1101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d6: 0100 1000 1101 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d7: 0100 1000 1101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d8: 0100 1000 1101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d9: 0100 1000 1101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* da: 0100 1000 1101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* db: 0100 1000 1101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dc: 0100 1000 1101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dd: 0100 1000 1101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* de: 0100 1000 1101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* df: 0100 1000 1101 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e0: 0100 1000 1110 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e1: 0100 1000 1110 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e2: 0100 1000 1110 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e3: 0100 1000 1110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e4: 0100 1000 1110 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e5: 0100 1000 1110 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e6: 0100 1000 1110 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e7: 0100 1000 1110 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e8: 0100 1000 1110 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e9: 0100 1000 1110 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ea: 0100 1000 1110 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* eb: 0100 1000 1110 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ec: 0100 1000 1110 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ed: 0100 1000 1110 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ee: 0100 1000 1110 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ef: 0100 1000 1110 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f0: 0100 1000 1111 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f1: 0100 1000 1111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f2: 0100 1000 1111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f3: 0100 1000 1111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f4: 0100 1000 1111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f5: 0100 1000 1111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f6: 0100 1000 1111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f7: 0100 1000 1111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f8: 0100 1000 1111 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f9: 0100 1000 1111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fa: 0100 1000 1111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fb: 0100 1000 1111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fc: 0100 1000 1111 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fd: 0100 1000 1111 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fe: 0100 1000 1111 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}  /* ff: 0100 1000 1111 1111                      */
};

/* prefix 4C */
const struct upd7810_device::opcode_s upd7810_device::s_op4C[256] =
{
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 00: 0100 1100 0000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 01: 0100 1100 0000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 02: 0100 1100 0000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 03: 0100 1100 0000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 04: 0100 1100 0000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 05: 0100 1100 0000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 06: 0100 1100 0000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 07: 0100 1100 0000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 08: 0100 1100 0000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 09: 0100 1100 0000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0a: 0100 1100 0000 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0b: 0100 1100 0000 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0c: 0100 1100 0000 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0d: 0100 1100 0000 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0e: 0100 1100 0000 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0f: 0100 1100 0000 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 10: 0100 1100 0001 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 11: 0100 1100 0001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 12: 0100 1100 0001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 13: 0100 1100 0001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 14: 0100 1100 0001 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 15: 0100 1100 0001 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 16: 0100 1100 0001 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 17: 0100 1100 0001 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 18: 0100 1100 0001 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 19: 0100 1100 0001 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1a: 0100 1100 0001 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1b: 0100 1100 0001 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1c: 0100 1100 0001 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1d: 0100 1100 0001 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1e: 0100 1100 0001 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1f: 0100 1100 0001 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 20: 0100 1100 0010 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 21: 0100 1100 0010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 22: 0100 1100 0010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 23: 0100 1100 0010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 24: 0100 1100 0010 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 25: 0100 1100 0010 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 26: 0100 1100 0010 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 27: 0100 1100 0010 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 28: 0100 1100 0010 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 29: 0100 1100 0010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2a: 0100 1100 0010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2b: 0100 1100 0010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2c: 0100 1100 0010 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2d: 0100 1100 0010 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2e: 0100 1100 0010 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2f: 0100 1100 0010 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 30: 0100 1100 0011 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 31: 0100 1100 0011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 32: 0100 1100 0011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 33: 0100 1100 0011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 34: 0100 1100 0011 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 35: 0100 1100 0011 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 36: 0100 1100 0011 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 37: 0100 1100 0011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 38: 0100 1100 0011 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 39: 0100 1100 0011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3a: 0100 1100 0011 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3b: 0100 1100 0011 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3c: 0100 1100 0011 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3d: 0100 1100 0011 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3e: 0100 1100 0011 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3f: 0100 1100 0011 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 40: 0100 1100 0100 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 41: 0100 1100 0100 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 42: 0100 1100 0100 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 43: 0100 1100 0100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 44: 0100 1100 0100 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 45: 0100 1100 0100 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 46: 0100 1100 0100 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 47: 0100 1100 0100 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 48: 0100 1100 0100 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 49: 0100 1100 0100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4a: 0100 1100 0100 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4b: 0100 1100 0100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4c: 0100 1100 0100 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4d: 0100 1100 0100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4e: 0100 1100 0100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4f: 0100 1100 0100 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 50: 0100 1100 0101 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 51: 0100 1100 0101 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 52: 0100 1100 0101 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 53: 0100 1100 0101 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 54: 0100 1100 0101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 55: 0100 1100 0101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 56: 0100 1100 0101 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 57: 0100 1100 0101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 58: 0100 1100 0101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 59: 0100 1100 0101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5a: 0100 1100 0101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5b: 0100 1100 0101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5c: 0100 1100 0101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5d: 0100 1100 0101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5e: 0100 1100 0101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5f: 0100 1100 0101 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 60: 0100 1100 0110 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 61: 0100 1100 0110 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 62: 0100 1100 0110 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 63: 0100 1100 0110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 64: 0100 1100 0110 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 65: 0100 1100 0110 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 66: 0100 1100 0110 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 67: 0100 1100 0110 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 68: 0100 1100 0110 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 69: 0100 1100 0110 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6a: 0100 1100 0110 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6b: 0100 1100 0110 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6c: 0100 1100 0110 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6d: 0100 1100 0110 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6e: 0100 1100 0110 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6f: 0100 1100 0110 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 70: 0100 1100 0111 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 71: 0100 1100 0111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 72: 0100 1100 0111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 73: 0100 1100 0111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 74: 0100 1100 0111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 75: 0100 1100 0111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 76: 0100 1100 0111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 77: 0100 1100 0111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 78: 0100 1100 0111 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 79: 0100 1100 0111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7a: 0100 1100 0111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7b: 0100 1100 0111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7c: 0100 1100 0111 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7d: 0100 1100 0111 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7e: 0100 1100 0111 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7f: 0100 1100 0111 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 80: 0100 1100 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 81: 0100 1100 1000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 82: 0100 1100 1000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 83: 0100 1100 1000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 84: 0100 1100 1000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 85: 0100 1100 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 86: 0100 1100 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 87: 0100 1100 1000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 88: 0100 1100 1000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 89: 0100 1100 1000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8a: 0100 1100 1000 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8b: 0100 1100 1000 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8c: 0100 1100 1000 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8d: 0100 1100 1000 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8e: 0100 1100 1000 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8f: 0100 1100 1000 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 90: 0100 1100 1001 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 91: 0100 1100 1001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 92: 0100 1100 1001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 93: 0100 1100 1001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 94: 0100 1100 1001 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 95: 0100 1100 1001 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 96: 0100 1100 1001 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 97: 0100 1100 1001 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 98: 0100 1100 1001 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 99: 0100 1100 1001 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9a: 0100 1100 1001 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9b: 0100 1100 1001 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9c: 0100 1100 1001 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9d: 0100 1100 1001 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9e: 0100 1100 1001 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9f: 0100 1100 1001 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a0: 0100 1100 1010 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a1: 0100 1100 1010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a2: 0100 1100 1010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a3: 0100 1100 1010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a4: 0100 1100 1010 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a5: 0100 1100 1010 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a6: 0100 1100 1010 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a7: 0100 1100 1010 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a8: 0100 1100 1010 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a9: 0100 1100 1010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* aa: 0100 1100 1010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ab: 0100 1100 1010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ac: 0100 1100 1010 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ad: 0100 1100 1010 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ae: 0100 1100 1010 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* af: 0100 1100 1010 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b0: 0100 1100 1011 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b1: 0100 1100 1011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b2: 0100 1100 1011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b3: 0100 1100 1011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b4: 0100 1100 1011 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b5: 0100 1100 1011 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b6: 0100 1100 1011 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b7: 0100 1100 1011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b8: 0100 1100 1011 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b9: 0100 1100 1011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ba: 0100 1100 1011 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bb: 0100 1100 1011 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bc: 0100 1100 1011 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bd: 0100 1100 1011 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* be: 0100 1100 1011 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bf: 0100 1100 1011 1111                      */

	{&upd7810_device::MOV_A_PA,      2,10, 8,L0|L1}, /* c0: 0100 1100 1100 0000                      */
	{&upd7810_device::MOV_A_PB,      2,10, 8,L0|L1}, /* c1: 0100 1100 1100 0001                      */
	{&upd7810_device::MOV_A_PC,      2,10, 8,L0|L1}, /* c2: 0100 1100 1100 0010                      */
	{&upd7810_device::MOV_A_PD,      2,10, 8,L0|L1}, /* c3: 0100 1100 1100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c4: 0100 1100 1100 0100                      */
	{&upd7810_device::MOV_A_PF,      2,10, 8,L0|L1}, /* c5: 0100 1100 1100 0101                      */
	{&upd7810_device::MOV_A_MKH,     2,10, 8,L0|L1}, /* c6: 0100 1100 1100 0110                      */
	{&upd7810_device::MOV_A_MKL,     2,10, 8,L0|L1}, /* c7: 0100 1100 1100 0111                      */
	{&upd7810_device::MOV_A_ANM,     2,10, 8,L0|L1}, /* c8: 0100 1100 1100 1000                      */
	{&upd7810_device::MOV_A_SMH,     2,10, 8,L0|L1}, /* c9: 0100 1100 1100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ca: 0100 1100 1100 1010                      */
	{&upd7810_device::MOV_A_EOM,     2,10, 8,L0|L1}, /* cb: 0100 1100 1100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cc: 0100 1100 1100 1100                      */
	{&upd7810_device::MOV_A_TMM,     2,10, 8,L0|L1}, /* cd: 0100 1100 1100 1101                      */
//  {&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ce: 0100 1100 1100 1110                      */
	{&upd7810_device::MOV_A_PT,      2,10, 8,L0|L1}, /* ce: 0100 1100 1100 1110                      */  /* 7807 only */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cf: 0100 1100 1100 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d0: 0100 1100 1101 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d1: 0100 1100 1101 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d2: 0100 1100 1101 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d3: 0100 1100 1101 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d4: 0100 1100 1101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d5: 0100 1100 1101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d6: 0100 1100 1101 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d7: 0100 1100 1101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d8: 0100 1100 1101 1000                      */
	{&upd7810_device::MOV_A_RXB,     2,10, 8,L0|L1}, /* d9: 0100 1100 1101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* da: 0100 1100 1101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* db: 0100 1100 1101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dc: 0100 1100 1101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dd: 0100 1100 1101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* de: 0100 1100 1101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* df: 0100 1100 1101 1111                      */

	{&upd7810_device::MOV_A_CR0,     2,10, 8,L0|L1}, /* e0: 0100 1100 1110 0000                      */
	{&upd7810_device::MOV_A_CR1,     2,10, 8,L0|L1}, /* e1: 0100 1100 1110 0001                      */
	{&upd7810_device::MOV_A_CR2,     2,10, 8,L0|L1}, /* e2: 0100 1100 1110 0010                      */
	{&upd7810_device::MOV_A_CR3,     2,10, 8,L0|L1}, /* e3: 0100 1100 1110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e4: 0100 1100 1110 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e5: 0100 1100 1110 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e6: 0100 1100 1110 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e7: 0100 1100 1110 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e8: 0100 1100 1110 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e9: 0100 1100 1110 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ea: 0100 1100 1110 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* eb: 0100 1100 1110 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ec: 0100 1100 1110 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ed: 0100 1100 1110 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ee: 0100 1100 1110 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ef: 0100 1100 1110 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f0: 0100 1100 1111 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f1: 0100 1100 1111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f2: 0100 1100 1111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f3: 0100 1100 1111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f4: 0100 1100 1111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f5: 0100 1100 1111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f6: 0100 1100 1111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f7: 0100 1100 1111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f8: 0100 1100 1111 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f9: 0100 1100 1111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fa: 0100 1100 1111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fb: 0100 1100 1111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fc: 0100 1100 1111 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fd: 0100 1100 1111 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fe: 0100 1100 1111 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ff: 0100 1100 1111 1111                      */
};

/* prefix 4D */
const struct upd7810_device::opcode_s upd7810_device::s_op4D[256] =
{
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 00: 0100 1101 0000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 01: 0100 1101 0000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 02: 0100 1101 0000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 03: 0100 1101 0000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 04: 0100 1101 0000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 05: 0100 1101 0000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 06: 0100 1101 0000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 07: 0100 1101 0000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 08: 0100 1101 0000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 09: 0100 1101 0000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0a: 0100 1101 0000 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0b: 0100 1101 0000 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0c: 0100 1101 0000 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0d: 0100 1101 0000 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0e: 0100 1101 0000 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0f: 0100 1101 0000 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 10: 0100 1101 0001 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 11: 0100 1101 0001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 12: 0100 1101 0001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 13: 0100 1101 0001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 14: 0100 1101 0001 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 15: 0100 1101 0001 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 16: 0100 1101 0001 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 17: 0100 1101 0001 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 18: 0100 1101 0001 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 19: 0100 1101 0001 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1a: 0100 1101 0001 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1b: 0100 1101 0001 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1c: 0100 1101 0001 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1d: 0100 1101 0001 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1e: 0100 1101 0001 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1f: 0100 1101 0001 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 20: 0100 1101 0010 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 21: 0100 1101 0010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 22: 0100 1101 0010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 23: 0100 1101 0010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 24: 0100 1101 0010 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 25: 0100 1101 0010 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 26: 0100 1101 0010 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 27: 0100 1101 0010 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 28: 0100 1101 0010 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 29: 0100 1101 0010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2a: 0100 1101 0010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2b: 0100 1101 0010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2c: 0100 1101 0010 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2d: 0100 1101 0010 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2e: 0100 1101 0010 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2f: 0100 1101 0010 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 30: 0100 1101 0011 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 31: 0100 1101 0011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 32: 0100 1101 0011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 33: 0100 1101 0011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 34: 0100 1101 0011 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 35: 0100 1101 0011 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 36: 0100 1101 0011 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 37: 0100 1101 0011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 38: 0100 1101 0011 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 39: 0100 1101 0011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3a: 0100 1101 0011 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3b: 0100 1101 0011 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3c: 0100 1101 0011 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3d: 0100 1101 0011 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3e: 0100 1101 0011 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3f: 0100 1101 0011 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 40: 0100 1101 0100 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 41: 0100 1101 0100 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 42: 0100 1101 0100 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 43: 0100 1101 0100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 44: 0100 1101 0100 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 45: 0100 1101 0100 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 46: 0100 1101 0100 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 47: 0100 1101 0100 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 48: 0100 1101 0100 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 49: 0100 1101 0100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4a: 0100 1101 0100 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4b: 0100 1101 0100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4c: 0100 1101 0100 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4d: 0100 1101 0100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4e: 0100 1101 0100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4f: 0100 1101 0100 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 50: 0100 1101 0101 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 51: 0100 1101 0101 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 52: 0100 1101 0101 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 53: 0100 1101 0101 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 54: 0100 1101 0101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 55: 0100 1101 0101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 56: 0100 1101 0101 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 57: 0100 1101 0101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 58: 0100 1101 0101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 59: 0100 1101 0101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5a: 0100 1101 0101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5b: 0100 1101 0101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5c: 0100 1101 0101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5d: 0100 1101 0101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5e: 0100 1101 0101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5f: 0100 1101 0101 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 60: 0100 1101 0110 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 61: 0100 1101 0110 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 62: 0100 1101 0110 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 63: 0100 1101 0110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 64: 0100 1101 0110 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 65: 0100 1101 0110 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 66: 0100 1101 0110 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 67: 0100 1101 0110 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 68: 0100 1101 0110 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 69: 0100 1101 0110 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6a: 0100 1101 0110 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6b: 0100 1101 0110 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6c: 0100 1101 0110 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6d: 0100 1101 0110 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6e: 0100 1101 0110 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 6f: 0100 1101 0110 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 70: 0100 1101 0111 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 71: 0100 1101 0111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 72: 0100 1101 0111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 73: 0100 1101 0111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 74: 0100 1101 0111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 75: 0100 1101 0111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 76: 0100 1101 0111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 77: 0100 1101 0111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 78: 0100 1101 0111 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 79: 0100 1101 0111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7a: 0100 1101 0111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7b: 0100 1101 0111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7c: 0100 1101 0111 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7d: 0100 1101 0111 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7e: 0100 1101 0111 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 7f: 0100 1101 0111 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 80: 0100 1101 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 81: 0100 1101 1000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 82: 0100 1101 1000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 83: 0100 1101 1000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 84: 0100 1101 1000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 85: 0100 1101 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 86: 0100 1101 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 87: 0100 1101 1000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 88: 0100 1101 1000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 89: 0100 1101 1000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8a: 0100 1101 1000 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8b: 0100 1101 1000 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8c: 0100 1101 1000 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8d: 0100 1101 1000 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8e: 0100 1101 1000 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8f: 0100 1101 1000 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 90: 0100 1101 1001 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 91: 0100 1101 1001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 92: 0100 1101 1001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 93: 0100 1101 1001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 94: 0100 1101 1001 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 95: 0100 1101 1001 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 96: 0100 1101 1001 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 97: 0100 1101 1001 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 98: 0100 1101 1001 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 99: 0100 1101 1001 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9a: 0100 1101 1001 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9b: 0100 1101 1001 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9c: 0100 1101 1001 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9d: 0100 1101 1001 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9e: 0100 1101 1001 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9f: 0100 1101 1001 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a0: 0100 1101 1010 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a1: 0100 1101 1010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a2: 0100 1101 1010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a3: 0100 1101 1010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a4: 0100 1101 1010 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a5: 0100 1101 1010 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a6: 0100 1101 1010 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a7: 0100 1101 1010 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a8: 0100 1101 1010 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a9: 0100 1101 1010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* aa: 0100 1101 1010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ab: 0100 1101 1010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ac: 0100 1101 1010 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ad: 0100 1101 1010 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ae: 0100 1101 1010 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* af: 0100 1101 1010 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b0: 0100 1101 1011 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b1: 0100 1101 1011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b2: 0100 1101 1011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b3: 0100 1101 1011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b4: 0100 1101 1011 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b5: 0100 1101 1011 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b6: 0100 1101 1011 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b7: 0100 1101 1011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b8: 0100 1101 1011 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b9: 0100 1101 1011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ba: 0100 1101 1011 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bb: 0100 1101 1011 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bc: 0100 1101 1011 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bd: 0100 1101 1011 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* be: 0100 1101 1011 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bf: 0100 1101 1011 1111                      */

	{&upd7810_device::MOV_PA_A,      2,10, 8,L0|L1}, /* c0: 0100 1101 1100 0000                      */
	{&upd7810_device::MOV_PB_A,      2,10, 8,L0|L1}, /* c1: 0100 1101 1100 0001                      */
	{&upd7810_device::MOV_PC_A,      2,10, 8,L0|L1}, /* c2: 0100 1101 1100 0010                      */
	{&upd7810_device::MOV_PD_A,      2,10, 8,L0|L1}, /* c3: 0100 1101 1100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c4: 0100 1101 1100 0100                      */
	{&upd7810_device::MOV_PF_A,      2,10, 8,L0|L1}, /* c5: 0100 1101 1100 0101                      */
	{&upd7810_device::MOV_MKH_A,     2,10, 8,L0|L1}, /* c6: 0100 1101 1100 0110                      */
	{&upd7810_device::MOV_MKL_A,     2,10, 8,L0|L1}, /* c7: 0100 1101 1100 0111                      */
	{&upd7810_device::MOV_ANM_A,     2,10, 8,L0|L1}, /* c8: 0100 1101 1100 1000                      */
	{&upd7810_device::MOV_SMH_A,     2,10, 8,L0|L1}, /* c9: 0100 1101 1100 1001                      */
	{&upd7810_device::MOV_SML_A,     2,10, 8,L0|L1}, /* ca: 0100 1101 1100 1010                      */
	{&upd7810_device::MOV_EOM_A,     2,10, 8,L0|L1}, /* cb: 0100 1101 1100 1011                      */
	{&upd7810_device::MOV_ETMM_A,    2,10, 8,L0|L1}, /* cc: 0100 1101 1100 1100                      */
	{&upd7810_device::MOV_TMM_A,     2,10, 8,L0|L1}, /* cd: 0100 1101 1100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ce: 0100 1101 1100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cf: 0100 1101 1100 1111                      */

	{&upd7810_device::MOV_MM_A,      2,10, 8,L0|L1}, /* d0: 0100 1101 1101 0000                      */
	{&upd7810_device::MOV_MCC_A,     2,10, 8,L0|L1}, /* d1: 0100 1101 1101 0001                      */
	{&upd7810_device::MOV_MA_A,      2,10, 8,L0|L1}, /* d2: 0100 1101 1101 0010                      */
	{&upd7810_device::MOV_MB_A,      2,10, 8,L0|L1}, /* d3: 0100 1101 1101 0011                      */
	{&upd7810_device::MOV_MC_A,      2,10, 8,L0|L1}, /* d4: 0100 1101 1101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d5: 0100 1101 1101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d6: 0100 1101 1101 0110                      */
	{&upd7810_device::MOV_MF_A,      2,10, 8,L0|L1}, /* d7: 0100 1101 1101 0111                      */
	{&upd7810_device::MOV_TXB_A,     2,10, 8,L0|L1}, /* d8: 0100 1101 1101 1000                      */
	// not right, documentation conflict? {&upd7810_device::MOV_ZCM_A,     2,10, 8,L0|L1}, /* d8: 0100 1101 1101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d9: 0100 1101 1101 1001                      */
	{&upd7810_device::MOV_TM0_A,     2,10, 8,L0|L1}, /* da: 0100 1101 1101 1010                      */
	// not right, documentation conflict? {&upd7810_device::MOV_TXB_A,     2,10, 8,L0|L1}, /* da: 0100 1101 1101 1010                      */
	{&upd7810_device::MOV_TM1_A,     2,10, 8,L0|L1}, /* db: 0100 1101 1101 1011                      */
	// not right, documentation conflict? {&upd7810_device::MOV_TM0_A,     2,10, 8,L0|L1}, /* db: 0100 1101 1101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dc: 0100 1101 1101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dd: 0100 1101 1101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* de: 0100 1101 1101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* df: 0100 1101 1101 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e0: 0100 1101 1110 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e1: 0100 1101 1110 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e2: 0100 1101 1110 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e3: 0100 1101 1110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e4: 0100 1101 1110 0100                      */
	{&upd7810_device::MOV_MT_A,      2,10, 8,L0|L1}, /* e5: 0100 1101 1110 0101                      */  /* 7807 only */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e6: 0100 1101 1110 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e7: 0100 1101 1110 0111                      */
	{&upd7810_device::MOV_ZCM_A,     2,10, 8,L0|L1}, /* e8: 0100 1101 1110 1000                      */
	// not right, documentation conflict? {&upd7810_device::MOV_TM1_A,     2,10, 8,L0|L1}, /* e8: 0100 1101 1110 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e9: 0100 1101 1110 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ea: 0100 1101 1110 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* eb: 0100 1101 1110 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ec: 0100 1101 1110 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ed: 0100 1101 1110 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ee: 0100 1101 1110 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ef: 0100 1101 1110 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f0: 0100 1101 1111 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f1: 0100 1101 1111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f2: 0100 1101 1111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f3: 0100 1101 1111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f4: 0100 1101 1111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f5: 0100 1101 1111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f6: 0100 1101 1111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f7: 0100 1101 1111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f8: 0100 1101 1111 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f9: 0100 1101 1111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fa: 0100 1101 1111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fb: 0100 1101 1111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fc: 0100 1101 1111 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fd: 0100 1101 1111 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fe: 0100 1101 1111 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}  /* ff: 0100 1101 1111 1111                      */
};

/* prefix 60 */
const struct upd7810_device::opcode_s upd7810_device::s_op60[256] =
{
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 00: 0110 0000 0000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 01: 0110 0000 0000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 02: 0110 0000 0000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 03: 0110 0000 0000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 04: 0110 0000 0000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 05: 0110 0000 0000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 06: 0110 0000 0000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 07: 0110 0000 0000 0111                      */
	{&upd7810_device::ANA_V_A,       2, 8, 8,L0|L1}, /* 08: 0110 0000 0000 1000                      */
	{&upd7810_device::ANA_A_A,       2, 8, 8,L0|L1}, /* 09: 0110 0000 0000 1001                      */
	{&upd7810_device::ANA_B_A,       2, 8, 8,L0|L1}, /* 0a: 0110 0000 0000 1010                      */
	{&upd7810_device::ANA_C_A,       2, 8, 8,L0|L1}, /* 0b: 0110 0000 0000 1011                      */
	{&upd7810_device::ANA_D_A,       2, 8, 8,L0|L1}, /* 0c: 0110 0000 0000 1100                      */
	{&upd7810_device::ANA_E_A,       2, 8, 8,L0|L1}, /* 0d: 0110 0000 0000 1101                      */
	{&upd7810_device::ANA_H_A,       2, 8, 8,L0|L1}, /* 0e: 0110 0000 0000 1110                      */
	{&upd7810_device::ANA_L_A,       2, 8, 8,L0|L1}, /* 0f: 0110 0000 0000 1111                      */

	{&upd7810_device::XRA_V_A,       2, 8, 8,L0|L1}, /* 10: 0110 0000 0001 0000                      */
	{&upd7810_device::XRA_A_A,       2, 8, 8,L0|L1}, /* 11: 0110 0000 0001 0001                      */
	{&upd7810_device::XRA_B_A,       2, 8, 8,L0|L1}, /* 12: 0110 0000 0001 0010                      */
	{&upd7810_device::XRA_C_A,       2, 8, 8,L0|L1}, /* 13: 0110 0000 0001 0011                      */
	{&upd7810_device::XRA_D_A,       2, 8, 8,L0|L1}, /* 14: 0110 0000 0001 0100                      */
	{&upd7810_device::XRA_E_A,       2, 8, 8,L0|L1}, /* 15: 0110 0000 0001 0101                      */
	{&upd7810_device::XRA_H_A,       2, 8, 8,L0|L1}, /* 16: 0110 0000 0001 0110                      */
	{&upd7810_device::XRA_L_A,       2, 8, 8,L0|L1}, /* 17: 0110 0000 0001 0111                      */
	{&upd7810_device::ORA_V_A,       2, 8, 8,L0|L1}, /* 18: 0110 0000 0001 1000                      */
	{&upd7810_device::ORA_A_A,       2, 8, 8,L0|L1}, /* 19: 0110 0000 0001 1001                      */
	{&upd7810_device::ORA_B_A,       2, 8, 8,L0|L1}, /* 1a: 0110 0000 0001 1010                      */
	{&upd7810_device::ORA_C_A,       2, 8, 8,L0|L1}, /* 1b: 0110 0000 0001 1011                      */
	{&upd7810_device::ORA_D_A,       2, 8, 8,L0|L1}, /* 1c: 0110 0000 0001 1100                      */
	{&upd7810_device::ORA_E_A,       2, 8, 8,L0|L1}, /* 1d: 0110 0000 0001 1101                      */
	{&upd7810_device::ORA_H_A,       2, 8, 8,L0|L1}, /* 1e: 0110 0000 0001 1110                      */
	{&upd7810_device::ORA_L_A,       2, 8, 8,L0|L1}, /* 1f: 0110 0000 0001 1111                      */

	{&upd7810_device::ADDNC_V_A,     2, 8, 8,L0|L1}, /* 20: 0110 0000 0010 0000                      */
	{&upd7810_device::ADDNC_A_A,     2, 8, 8,L0|L1}, /* 21: 0110 0000 0010 0001                      */
	{&upd7810_device::ADDNC_B_A,     2, 8, 8,L0|L1}, /* 22: 0110 0000 0010 0010                      */
	{&upd7810_device::ADDNC_C_A,     2, 8, 8,L0|L1}, /* 23: 0110 0000 0010 0011                      */
	{&upd7810_device::ADDNC_D_A,     2, 8, 8,L0|L1}, /* 24: 0110 0000 0010 0100                      */
	{&upd7810_device::ADDNC_E_A,     2, 8, 8,L0|L1}, /* 25: 0110 0000 0010 0101                      */
	{&upd7810_device::ADDNC_H_A,     2, 8, 8,L0|L1}, /* 26: 0110 0000 0010 0110                      */
	{&upd7810_device::ADDNC_L_A,     2, 8, 8,L0|L1}, /* 27: 0110 0000 0010 0111                      */
	{&upd7810_device::GTA_V_A,       2, 8, 8,L0|L1}, /* 28: 0110 0000 0010 1000                      */
	{&upd7810_device::GTA_A_A,       2, 8, 8,L0|L1}, /* 29: 0110 0000 0010 1001                      */
	{&upd7810_device::GTA_B_A,       2, 8, 8,L0|L1}, /* 2a: 0110 0000 0010 1010                      */
	{&upd7810_device::GTA_C_A,       2, 8, 8,L0|L1}, /* 2b: 0110 0000 0010 1011                      */
	{&upd7810_device::GTA_D_A,       2, 8, 8,L0|L1}, /* 2c: 0110 0000 0010 1100                      */
	{&upd7810_device::GTA_E_A,       2, 8, 8,L0|L1}, /* 2d: 0110 0000 0010 1101                      */
	{&upd7810_device::GTA_H_A,       2, 8, 8,L0|L1}, /* 2e: 0110 0000 0010 1110                      */
	{&upd7810_device::GTA_L_A,       2, 8, 8,L0|L1}, /* 2f: 0110 0000 0010 1111                      */

	{&upd7810_device::SUBNB_V_A,     2, 8, 8,L0|L1}, /* 30: 0110 0000 0011 0000                      */
	{&upd7810_device::SUBNB_A_A,     2, 8, 8,L0|L1}, /* 31: 0110 0000 0011 0001                      */
	{&upd7810_device::SUBNB_B_A,     2, 8, 8,L0|L1}, /* 32: 0110 0000 0011 0010                      */
	{&upd7810_device::SUBNB_C_A,     2, 8, 8,L0|L1}, /* 33: 0110 0000 0011 0011                      */
	{&upd7810_device::SUBNB_D_A,     2, 8, 8,L0|L1}, /* 34: 0110 0000 0011 0100                      */
	{&upd7810_device::SUBNB_E_A,     2, 8, 8,L0|L1}, /* 35: 0110 0000 0011 0101                      */
	{&upd7810_device::SUBNB_H_A,     2, 8, 8,L0|L1}, /* 36: 0110 0000 0011 0110                      */
	{&upd7810_device::SUBNB_L_A,     2, 8, 8,L0|L1}, /* 37: 0110 0000 0011 0111                      */
	{&upd7810_device::LTA_V_A,       2, 8, 8,L0|L1}, /* 38: 0110 0000 0011 1000                      */
	{&upd7810_device::LTA_A_A,       2, 8, 8,L0|L1}, /* 39: 0110 0000 0011 1001                      */
	{&upd7810_device::LTA_B_A,       2, 8, 8,L0|L1}, /* 3a: 0110 0000 0011 1010                      */
	{&upd7810_device::LTA_C_A,       2, 8, 8,L0|L1}, /* 3b: 0110 0000 0011 1011                      */
	{&upd7810_device::LTA_D_A,       2, 8, 8,L0|L1}, /* 3c: 0110 0000 0011 1100                      */
	{&upd7810_device::LTA_E_A,       2, 8, 8,L0|L1}, /* 3d: 0110 0000 0011 1101                      */
	{&upd7810_device::LTA_H_A,       2, 8, 8,L0|L1}, /* 3e: 0110 0000 0011 1110                      */
	{&upd7810_device::LTA_L_A,       2, 8, 8,L0|L1}, /* 3f: 0110 0000 0011 1111                      */

	{&upd7810_device::ADD_V_A,       2, 8, 8,L0|L1}, /* 40: 0110 0000 0100 0000                      */
	{&upd7810_device::ADD_A_A,       2, 8, 8,L0|L1}, /* 41: 0110 0000 0100 0001                      */
	{&upd7810_device::ADD_B_A,       2, 8, 8,L0|L1}, /* 42: 0110 0000 0100 0010                      */
	{&upd7810_device::ADD_C_A,       2, 8, 8,L0|L1}, /* 43: 0110 0000 0100 0011                      */
	{&upd7810_device::ADD_D_A,       2, 8, 8,L0|L1}, /* 44: 0110 0000 0100 0100                      */
	{&upd7810_device::ADD_E_A,       2, 8, 8,L0|L1}, /* 45: 0110 0000 0100 0101                      */
	{&upd7810_device::ADD_H_A,       2, 8, 8,L0|L1}, /* 46: 0110 0000 0100 0110                      */
	{&upd7810_device::ADD_L_A,       2, 8, 8,L0|L1}, /* 47: 0110 0000 0100 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 48: 0110 0000 0100 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 49: 0110 0000 0100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4a: 0110 0000 0100 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4b: 0110 0000 0100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4c: 0110 0000 0100 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4d: 0110 0000 0100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4e: 0110 0000 0100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4f: 0110 0000 0100 1111                      */

	{&upd7810_device::ADC_V_A,       2, 8, 8,L0|L1}, /* 50: 0110 0000 0101 0000                      */
	{&upd7810_device::ADC_A_A,       2, 8, 8,L0|L1}, /* 51: 0110 0000 0101 0001                      */
	{&upd7810_device::ADC_B_A,       2, 8, 8,L0|L1}, /* 52: 0110 0000 0101 0010                      */
	{&upd7810_device::ADC_C_A,       2, 8, 8,L0|L1}, /* 53: 0110 0000 0101 0011                      */
	{&upd7810_device::ADC_D_A,       2, 8, 8,L0|L1}, /* 54: 0110 0000 0101 0100                      */
	{&upd7810_device::ADC_E_A,       2, 8, 8,L0|L1}, /* 55: 0110 0000 0101 0101                      */
	{&upd7810_device::ADC_H_A,       2, 8, 8,L0|L1}, /* 56: 0110 0000 0101 0110                      */
	{&upd7810_device::ADC_L_A,       2, 8, 8,L0|L1}, /* 57: 0110 0000 0101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 58: 0110 0000 0101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 59: 0110 0000 0101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5a: 0110 0000 0101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5b: 0110 0000 0101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5c: 0110 0000 0101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5d: 0110 0000 0101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5e: 0110 0000 0101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5f: 0110 0000 0101 1111                      */

	{&upd7810_device::SUB_V_A,       2, 8, 8,L0|L1}, /* 60: 0110 0000 0110 0000                      */
	{&upd7810_device::SUB_A_A,       2, 8, 8,L0|L1}, /* 61: 0110 0000 0110 0001                      */
	{&upd7810_device::SUB_B_A,       2, 8, 8,L0|L1}, /* 62: 0110 0000 0110 0010                      */
	{&upd7810_device::SUB_C_A,       2, 8, 8,L0|L1}, /* 63: 0110 0000 0110 0011                      */
	{&upd7810_device::SUB_D_A,       2, 8, 8,L0|L1}, /* 64: 0110 0000 0110 0100                      */
	{&upd7810_device::SUB_E_A,       2, 8, 8,L0|L1}, /* 65: 0110 0000 0110 0101                      */
	{&upd7810_device::SUB_H_A,       2, 8, 8,L0|L1}, /* 66: 0110 0000 0110 0110                      */
	{&upd7810_device::SUB_L_A,       2, 8, 8,L0|L1}, /* 67: 0110 0000 0110 0111                      */
	{&upd7810_device::NEA_V_A,       2, 8, 8,L0|L1}, /* 68: 0110 0000 0110 1000                      */
	{&upd7810_device::NEA_A_A,       2, 8, 8,L0|L1}, /* 69: 0110 0000 0110 1001                      */
	{&upd7810_device::NEA_B_A,       2, 8, 8,L0|L1}, /* 6a: 0110 0000 0110 1010                      */
	{&upd7810_device::NEA_C_A,       2, 8, 8,L0|L1}, /* 6b: 0110 0000 0110 1011                      */
	{&upd7810_device::NEA_D_A,       2, 8, 8,L0|L1}, /* 6c: 0110 0000 0110 1100                      */
	{&upd7810_device::NEA_E_A,       2, 8, 8,L0|L1}, /* 6d: 0110 0000 0110 1101                      */
	{&upd7810_device::NEA_H_A,       2, 8, 8,L0|L1}, /* 6e: 0110 0000 0110 1110                      */
	{&upd7810_device::NEA_L_A,       2, 8, 8,L0|L1}, /* 6f: 0110 0000 0110 1111                      */

	{&upd7810_device::SBB_V_A,       2, 8, 8,L0|L1}, /* 70: 0110 0000 0111 0000                      */
	{&upd7810_device::SBB_A_A,       2, 8, 8,L0|L1}, /* 71: 0110 0000 0111 0001                      */
	{&upd7810_device::SBB_B_A,       2, 8, 8,L0|L1}, /* 72: 0110 0000 0111 0010                      */
	{&upd7810_device::SBB_C_A,       2, 8, 8,L0|L1}, /* 73: 0110 0000 0111 0011                      */
	{&upd7810_device::SBB_D_A,       2, 8, 8,L0|L1}, /* 74: 0110 0000 0111 0100                      */
	{&upd7810_device::SBB_E_A,       2, 8, 8,L0|L1}, /* 75: 0110 0000 0111 0101                      */
	{&upd7810_device::SBB_H_A,       2, 8, 8,L0|L1}, /* 76: 0110 0000 0111 0110                      */
	{&upd7810_device::SBB_L_A,       2, 8, 8,L0|L1}, /* 77: 0110 0000 0111 0111                      */
	{&upd7810_device::EQA_V_A,       2, 8, 8,L0|L1}, /* 78: 0110 0000 0111 1000                      */
	{&upd7810_device::EQA_A_A,       2, 8, 8,L0|L1}, /* 79: 0110 0000 0111 1001                      */
	{&upd7810_device::EQA_B_A,       2, 8, 8,L0|L1}, /* 7a: 0110 0000 0111 1010                      */
	{&upd7810_device::EQA_C_A,       2, 8, 8,L0|L1}, /* 7b: 0110 0000 0111 1011                      */
	{&upd7810_device::EQA_D_A,       2, 8, 8,L0|L1}, /* 7c: 0110 0000 0111 1100                      */
	{&upd7810_device::EQA_E_A,       2, 8, 8,L0|L1}, /* 7d: 0110 0000 0111 1101                      */
	{&upd7810_device::EQA_H_A,       2, 8, 8,L0|L1}, /* 7e: 0110 0000 0111 1110                      */
	{&upd7810_device::EQA_L_A,       2, 8, 8,L0|L1}, /* 7f: 0110 0000 0111 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 80: 0110 0000 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 81: 0110 0000 1000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 82: 0110 0000 1000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 83: 0110 0000 1000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 84: 0110 0000 1000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 85: 0110 0000 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 86: 0110 0000 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 87: 0110 0000 1000 0111                      */
	{&upd7810_device::ANA_A_V,       2, 8, 8,L0|L1}, /* 88: 0110 0000 1000 1000                      */
	{&upd7810_device::ANA_A_A,       2, 8, 8,L0|L1}, /* 89: 0110 0000 1000 1001                      */
	{&upd7810_device::ANA_A_B,       2, 8, 8,L0|L1}, /* 8a: 0110 0000 1000 1010                      */
	{&upd7810_device::ANA_A_C,       2, 8, 8,L0|L1}, /* 8b: 0110 0000 1000 1011                      */
	{&upd7810_device::ANA_A_D,       2, 8, 8,L0|L1}, /* 8c: 0110 0000 1000 1100                      */
	{&upd7810_device::ANA_A_E,       2, 8, 8,L0|L1}, /* 8d: 0110 0000 1000 1101                      */
	{&upd7810_device::ANA_A_H,       2, 8, 8,L0|L1}, /* 8e: 0110 0000 1000 1110                      */
	{&upd7810_device::ANA_A_L,       2, 8, 8,L0|L1}, /* 8f: 0110 0000 1000 1111                      */

	{&upd7810_device::XRA_A_V,       2, 8, 8,L0|L1}, /* 90: 0110 0000 1001 0000                      */
	{&upd7810_device::XRA_A_A,       2, 8, 8,L0|L1}, /* 91: 0110 0000 1001 0001                      */
	{&upd7810_device::XRA_A_B,       2, 8, 8,L0|L1}, /* 92: 0110 0000 1001 0010                      */
	{&upd7810_device::XRA_A_C,       2, 8, 8,L0|L1}, /* 93: 0110 0000 1001 0011                      */
	{&upd7810_device::XRA_A_D,       2, 8, 8,L0|L1}, /* 94: 0110 0000 1001 0100                      */
	{&upd7810_device::XRA_A_E,       2, 8, 8,L0|L1}, /* 95: 0110 0000 1001 0101                      */
	{&upd7810_device::XRA_A_H,       2, 8, 8,L0|L1}, /* 96: 0110 0000 1001 0110                      */
	{&upd7810_device::XRA_A_L,       2, 8, 8,L0|L1}, /* 97: 0110 0000 1001 0111                      */
	{&upd7810_device::ORA_A_V,       2, 8, 8,L0|L1}, /* 98: 0110 0000 1001 1000                      */
	{&upd7810_device::ORA_A_A,       2, 8, 8,L0|L1}, /* 99: 0110 0000 1001 1001                      */
	{&upd7810_device::ORA_A_B,       2, 8, 8,L0|L1}, /* 9a: 0110 0000 1001 1010                      */
	{&upd7810_device::ORA_A_C,       2, 8, 8,L0|L1}, /* 9b: 0110 0000 1001 1011                      */
	{&upd7810_device::ORA_A_D,       2, 8, 8,L0|L1}, /* 9c: 0110 0000 1001 1100                      */
	{&upd7810_device::ORA_A_E,       2, 8, 8,L0|L1}, /* 9d: 0110 0000 1001 1101                      */
	{&upd7810_device::ORA_A_H,       2, 8, 8,L0|L1}, /* 9e: 0110 0000 1001 1110                      */
	{&upd7810_device::ORA_A_L,       2, 8, 8,L0|L1}, /* 9f: 0110 0000 1001 1111                      */

	{&upd7810_device::ADDNC_A_V,     2, 8, 8,L0|L1}, /* a0: 0110 0000 1010 0000                      */
	{&upd7810_device::ADDNC_A_A,     2, 8, 8,L0|L1}, /* a1: 0110 0000 1010 0001                      */
	{&upd7810_device::ADDNC_A_B,     2, 8, 8,L0|L1}, /* a2: 0110 0000 1010 0010                      */
	{&upd7810_device::ADDNC_A_C,     2, 8, 8,L0|L1}, /* a3: 0110 0000 1010 0011                      */
	{&upd7810_device::ADDNC_A_D,     2, 8, 8,L0|L1}, /* a4: 0110 0000 1010 0100                      */
	{&upd7810_device::ADDNC_A_E,     2, 8, 8,L0|L1}, /* a5: 0110 0000 1010 0101                      */
	{&upd7810_device::ADDNC_A_H,     2, 8, 8,L0|L1}, /* a6: 0110 0000 1010 0110                      */
	{&upd7810_device::ADDNC_A_L,     2, 8, 8,L0|L1}, /* a7: 0110 0000 1010 0111                      */
	{&upd7810_device::GTA_A_V,       2, 8, 8,L0|L1}, /* a8: 0110 0000 1010 1000                      */
	{&upd7810_device::GTA_A_A,       2, 8, 8,L0|L1}, /* a9: 0110 0000 1010 1001                      */
	{&upd7810_device::GTA_A_B,       2, 8, 8,L0|L1}, /* aa: 0110 0000 1010 1010                      */
	{&upd7810_device::GTA_A_C,       2, 8, 8,L0|L1}, /* ab: 0110 0000 1010 1011                      */
	{&upd7810_device::GTA_A_D,       2, 8, 8,L0|L1}, /* ac: 0110 0000 1010 1100                      */
	{&upd7810_device::GTA_A_E,       2, 8, 8,L0|L1}, /* ad: 0110 0000 1010 1101                      */
	{&upd7810_device::GTA_A_H,       2, 8, 8,L0|L1}, /* ae: 0110 0000 1010 1110                      */
	{&upd7810_device::GTA_A_L,       2, 8, 8,L0|L1}, /* af: 0110 0000 1010 1111                      */

	{&upd7810_device::SUBNB_A_V,     2, 8, 8,L0|L1}, /* b0: 0110 0000 1011 0000                      */
	{&upd7810_device::SUBNB_A_A,     2, 8, 8,L0|L1}, /* b1: 0110 0000 1011 0001                      */
	{&upd7810_device::SUBNB_A_B,     2, 8, 8,L0|L1}, /* b2: 0110 0000 1011 0010                      */
	{&upd7810_device::SUBNB_A_C,     2, 8, 8,L0|L1}, /* b3: 0110 0000 1011 0011                      */
	{&upd7810_device::SUBNB_A_D,     2, 8, 8,L0|L1}, /* b4: 0110 0000 1011 0100                      */
	{&upd7810_device::SUBNB_A_E,     2, 8, 8,L0|L1}, /* b5: 0110 0000 1011 0101                      */
	{&upd7810_device::SUBNB_A_H,     2, 8, 8,L0|L1}, /* b6: 0110 0000 1011 0110                      */
	{&upd7810_device::SUBNB_A_L,     2, 8, 8,L0|L1}, /* b7: 0110 0000 1011 0111                      */
	{&upd7810_device::LTA_A_V,       2, 8, 8,L0|L1}, /* b8: 0110 0000 1011 1000                      */
	{&upd7810_device::LTA_A_A,       2, 8, 8,L0|L1}, /* b9: 0110 0000 1011 1001                      */
	{&upd7810_device::LTA_A_B,       2, 8, 8,L0|L1}, /* ba: 0110 0000 1011 1010                      */
	{&upd7810_device::LTA_A_C,       2, 8, 8,L0|L1}, /* bb: 0110 0000 1011 1011                      */
	{&upd7810_device::LTA_A_D,       2, 8, 8,L0|L1}, /* bc: 0110 0000 1011 1100                      */
	{&upd7810_device::LTA_A_E,       2, 8, 8,L0|L1}, /* bd: 0110 0000 1011 1101                      */
	{&upd7810_device::LTA_A_H,       2, 8, 8,L0|L1}, /* be: 0110 0000 1011 1110                      */
	{&upd7810_device::LTA_A_L,       2, 8, 8,L0|L1}, /* bf: 0110 0000 1011 1111                      */

	{&upd7810_device::ADD_A_V,       2, 8, 8,L0|L1}, /* c0: 0110 0000 1100 0000                      */
	{&upd7810_device::ADD_A_A,       2, 8, 8,L0|L1}, /* c1: 0110 0000 1100 0001                      */
	{&upd7810_device::ADD_A_B,       2, 8, 8,L0|L1}, /* c2: 0110 0000 1100 0010                      */
	{&upd7810_device::ADD_A_C,       2, 8, 8,L0|L1}, /* c3: 0110 0000 1100 0011                      */
	{&upd7810_device::ADD_A_D,       2, 8, 8,L0|L1}, /* c4: 0110 0000 1100 0100                      */
	{&upd7810_device::ADD_A_E,       2, 8, 8,L0|L1}, /* c5: 0110 0000 1100 0101                      */
	{&upd7810_device::ADD_A_H,       2, 8, 8,L0|L1}, /* c6: 0110 0000 1100 0110                      */
	{&upd7810_device::ADD_A_L,       2, 8, 8,L0|L1}, /* c7: 0110 0000 1100 0111                      */
	{&upd7810_device::ONA_A_V,       2, 8, 8,L0|L1}, /* c8: 0110 0000 1100 1000                      */
	{&upd7810_device::ONA_A_A,       2, 8, 8,L0|L1}, /* c9: 0110 0000 1100 1001                      */
	{&upd7810_device::ONA_A_B,       2, 8, 8,L0|L1}, /* ca: 0110 0000 1100 1010                      */
	{&upd7810_device::ONA_A_C,       2, 8, 8,L0|L1}, /* cb: 0110 0000 1100 1011                      */
	{&upd7810_device::ONA_A_D,       2, 8, 8,L0|L1}, /* cc: 0110 0000 1100 1100                      */
	{&upd7810_device::ONA_A_E,       2, 8, 8,L0|L1}, /* cd: 0110 0000 1100 1101                      */
	{&upd7810_device::ONA_A_H,       2, 8, 8,L0|L1}, /* ce: 0110 0000 1100 1110                      */
	{&upd7810_device::ONA_A_L,       2, 8, 8,L0|L1}, /* cf: 0110 0000 1100 1111                      */

	{&upd7810_device::ADC_A_V,       2, 8, 8,L0|L1}, /* d0: 0110 0000 1101 0000                      */
	{&upd7810_device::ADC_A_A,       2, 8, 8,L0|L1}, /* d1: 0110 0000 1101 0001                      */
	{&upd7810_device::ADC_A_B,       2, 8, 8,L0|L1}, /* d2: 0110 0000 1101 0010                      */
	{&upd7810_device::ADC_A_C,       2, 8, 8,L0|L1}, /* d3: 0110 0000 1101 0011                      */
	{&upd7810_device::ADC_A_D,       2, 8, 8,L0|L1}, /* d4: 0110 0000 1101 0100                      */
	{&upd7810_device::ADC_A_E,       2, 8, 8,L0|L1}, /* d5: 0110 0000 1101 0101                      */
	{&upd7810_device::ADC_A_H,       2, 8, 8,L0|L1}, /* d6: 0110 0000 1101 0110                      */
	{&upd7810_device::ADC_A_L,       2, 8, 8,L0|L1}, /* d7: 0110 0000 1101 0111                      */
	{&upd7810_device::OFFA_A_V,      2, 8, 8,L0|L1}, /* d8: 0110 0000 1101 1000                      */
	{&upd7810_device::OFFA_A_A,      2, 8, 8,L0|L1}, /* d9: 0110 0000 1101 1001                      */
	{&upd7810_device::OFFA_A_B,      2, 8, 8,L0|L1}, /* da: 0110 0000 1101 1010                      */
	{&upd7810_device::OFFA_A_C,      2, 8, 8,L0|L1}, /* db: 0110 0000 1101 1011                      */
	{&upd7810_device::OFFA_A_D,      2, 8, 8,L0|L1}, /* dc: 0110 0000 1101 1100                      */
	{&upd7810_device::OFFA_A_E,      2, 8, 8,L0|L1}, /* dd: 0110 0000 1101 1101                      */
	{&upd7810_device::OFFA_A_H,      2, 8, 8,L0|L1}, /* de: 0110 0000 1101 1110                      */
	{&upd7810_device::OFFA_A_L,      2, 8, 8,L0|L1}, /* df: 0110 0000 1101 1111                      */

	{&upd7810_device::SUB_A_V,       2, 8, 8,L0|L1}, /* e0: 0110 0000 1110 0000                      */
	{&upd7810_device::SUB_A_A,       2, 8, 8,L0|L1}, /* e1: 0110 0000 1110 0001                      */
	{&upd7810_device::SUB_A_B,       2, 8, 8,L0|L1}, /* e2: 0110 0000 1110 0010                      */
	{&upd7810_device::SUB_A_C,       2, 8, 8,L0|L1}, /* e3: 0110 0000 1110 0011                      */
	{&upd7810_device::SUB_A_D,       2, 8, 8,L0|L1}, /* e4: 0110 0000 1110 0100                      */
	{&upd7810_device::SUB_A_E,       2, 8, 8,L0|L1}, /* e5: 0110 0000 1110 0101                      */
	{&upd7810_device::SUB_A_H,       2, 8, 8,L0|L1}, /* e6: 0110 0000 1110 0110                      */
	{&upd7810_device::SUB_A_L,       2, 8, 8,L0|L1}, /* e7: 0110 0000 1110 0111                      */
	{&upd7810_device::NEA_A_V,       2, 8, 8,L0|L1}, /* e8: 0110 0000 1110 1000                      */
	{&upd7810_device::NEA_A_A,       2, 8, 8,L0|L1}, /* e9: 0110 0000 1110 1001                      */
	{&upd7810_device::NEA_A_B,       2, 8, 8,L0|L1}, /* ea: 0110 0000 1110 1010                      */
	{&upd7810_device::NEA_A_C,       2, 8, 8,L0|L1}, /* eb: 0110 0000 1110 1011                      */
	{&upd7810_device::NEA_A_D,       2, 8, 8,L0|L1}, /* ec: 0110 0000 1110 1100                      */
	{&upd7810_device::NEA_A_E,       2, 8, 8,L0|L1}, /* ed: 0110 0000 1110 1101                      */
	{&upd7810_device::NEA_A_H,       2, 8, 8,L0|L1}, /* ee: 0110 0000 1110 1110                      */
	{&upd7810_device::NEA_A_L,       2, 8, 8,L0|L1}, /* ef: 0110 0000 1110 1111                      */

	{&upd7810_device::SBB_A_V,       2, 8, 8,L0|L1}, /* f0: 0110 0000 1111 0000                      */
	{&upd7810_device::SBB_A_A,       2, 8, 8,L0|L1}, /* f1: 0110 0000 1111 0001                      */
	{&upd7810_device::SBB_A_B,       2, 8, 8,L0|L1}, /* f2: 0110 0000 1111 0010                      */
	{&upd7810_device::SBB_A_C,       2, 8, 8,L0|L1}, /* f3: 0110 0000 1111 0011                      */
	{&upd7810_device::SBB_A_D,       2, 8, 8,L0|L1}, /* f4: 0110 0000 1111 0100                      */
	{&upd7810_device::SBB_A_E,       2, 8, 8,L0|L1}, /* f5: 0110 0000 1111 0101                      */
	{&upd7810_device::SBB_A_H,       2, 8, 8,L0|L1}, /* f6: 0110 0000 1111 0110                      */
	{&upd7810_device::SBB_A_L,       2, 8, 8,L0|L1}, /* f7: 0110 0000 1111 0111                      */
	{&upd7810_device::EQA_A_V,       2, 8, 8,L0|L1}, /* f8: 0110 0000 1111 1000                      */
	{&upd7810_device::EQA_A_A,       2, 8, 8,L0|L1}, /* f9: 0110 0000 1111 1001                      */
	{&upd7810_device::EQA_A_B,       2, 8, 8,L0|L1}, /* fa: 0110 0000 1111 1010                      */
	{&upd7810_device::EQA_A_C,       2, 8, 8,L0|L1}, /* fb: 0110 0000 1111 1011                      */
	{&upd7810_device::EQA_A_D,       2, 8, 8,L0|L1}, /* fc: 0110 0000 1111 1100                      */
	{&upd7810_device::EQA_A_E,       2, 8, 8,L0|L1}, /* fd: 0110 0000 1111 1101                      */
	{&upd7810_device::EQA_A_H,       2, 8, 8,L0|L1}, /* fe: 0110 0000 1111 1110                      */
	{&upd7810_device::EQA_A_L,       2, 8, 8,L0|L1}  /* ff: 0110 0000 1111 1111                      */
};

/* prefix 64 */
const struct upd7810_device::opcode_s upd7810_device::s_op64[256] =
{
	{&upd7810_device::MVI_PA_xx,     3,14,11,L0|L1}, /* 00: 0110 0100 0000 0000 xxxx xxxx            */
	{&upd7810_device::MVI_PB_xx,     3,14,11,L0|L1}, /* 01: 0110 0100 0000 0001 xxxx xxxx            */
	{&upd7810_device::MVI_PC_xx,     3,14,11,L0|L1}, /* 02: 0110 0100 0000 0010 xxxx xxxx            */
	{&upd7810_device::MVI_PD_xx,     3,14,11,L0|L1}, /* 03: 0110 0100 0000 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 04: 0110 0100 0000 0100 xxxx xxxx            */
	{&upd7810_device::MVI_PF_xx,     3,14,11,L0|L1}, /* 05: 0110 0100 0000 0101 xxxx xxxx            */
	{&upd7810_device::MVI_MKH_xx,    3,14,11,L0|L1}, /* 06: 0110 0100 0000 0110 xxxx xxxx            */
	{&upd7810_device::MVI_MKL_xx,    3,14,11,L0|L1}, /* 07: 0110 0100 0000 0111 xxxx xxxx            */
	{&upd7810_device::ANI_PA_xx,     3,20,11,L0|L1}, /* 08: 0110 0100 0000 1000 xxxx xxxx            */
	{&upd7810_device::ANI_PB_xx,     3,20,11,L0|L1}, /* 09: 0110 0100 0000 1001 xxxx xxxx            */
	{&upd7810_device::ANI_PC_xx,     3,20,11,L0|L1}, /* 0a: 0110 0100 0000 1010 xxxx xxxx            */
	{&upd7810_device::ANI_PD_xx,     3,20,11,L0|L1}, /* 0b: 0110 0100 0000 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 0c: 0110 0100 0000 1100 xxxx xxxx            */
	{&upd7810_device::ANI_PF_xx,     3,20,11,L0|L1}, /* 0d: 0110 0100 0000 1101 xxxx xxxx            */
	{&upd7810_device::ANI_MKH_xx,    3,20,11,L0|L1}, /* 0e: 0110 0100 0000 1110 xxxx xxxx            */
	{&upd7810_device::ANI_MKL_xx,    3,20,11,L0|L1}, /* 0f: 0110 0100 0000 1111 xxxx xxxx            */

	{&upd7810_device::XRI_PA_xx,     3,20,11,L0|L1}, /* 10: 0110 0100 0001 0000 xxxx xxxx            */
	{&upd7810_device::XRI_PB_xx,     3,20,11,L0|L1}, /* 11: 0110 0100 0001 0001 xxxx xxxx            */
	{&upd7810_device::XRI_PC_xx,     3,20,11,L0|L1}, /* 12: 0110 0100 0001 0010 xxxx xxxx            */
	{&upd7810_device::XRI_PD_xx,     3,20,11,L0|L1}, /* 13: 0110 0100 0001 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 14: 0110 0100 0001 0100 xxxx xxxx            */
	{&upd7810_device::XRI_PF_xx,     3,20,11,L0|L1}, /* 15: 0110 0100 0001 0101 xxxx xxxx            */
	{&upd7810_device::XRI_MKH_xx,    3,20,11,L0|L1}, /* 16: 0110 0100 0001 0110 xxxx xxxx            */
	{&upd7810_device::XRI_MKL_xx,    3,20,11,L0|L1}, /* 17: 0110 0100 0001 0111 xxxx xxxx            */
	{&upd7810_device::ORI_PA_xx,     3,20,11,L0|L1}, /* 18: 0110 0100 0001 1000 xxxx xxxx            */
	{&upd7810_device::ORI_PB_xx,     3,20,11,L0|L1}, /* 19: 0110 0100 0001 1001 xxxx xxxx            */
	{&upd7810_device::ORI_PC_xx,     3,20,11,L0|L1}, /* 1a: 0110 0100 0001 1010 xxxx xxxx            */
	{&upd7810_device::ORI_PD_xx,     3,20,11,L0|L1}, /* 1b: 0110 0100 0001 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 1c: 0110 0100 0001 1100 xxxx xxxx            */
	{&upd7810_device::ORI_PF_xx,     3,20,11,L0|L1}, /* 1d: 0110 0100 0001 1101 xxxx xxxx            */
	{&upd7810_device::ORI_MKH_xx,    3,20,11,L0|L1}, /* 1e: 0110 0100 0001 1110 xxxx xxxx            */
	{&upd7810_device::ORI_MKL_xx,    3,20,11,L0|L1}, /* 1f: 0110 0100 0001 1111 xxxx xxxx            */

	{&upd7810_device::ADINC_PA_xx,   3,20,11,L0|L1}, /* 20: 0110 0100 0010 0000 xxxx xxxx            */
	{&upd7810_device::ADINC_PB_xx,   3,20,11,L0|L1}, /* 21: 0110 0100 0010 0001 xxxx xxxx            */
	{&upd7810_device::ADINC_PC_xx,   3,20,11,L0|L1}, /* 22: 0110 0100 0010 0010 xxxx xxxx            */
	{&upd7810_device::ADINC_PD_xx,   3,20,11,L0|L1}, /* 23: 0110 0100 0010 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 24: 0110 0100 0010 0100 xxxx xxxx            */
	{&upd7810_device::ADINC_PF_xx,   3,20,11,L0|L1}, /* 25: 0110 0100 0010 0101 xxxx xxxx            */
	{&upd7810_device::ADINC_MKH_xx,  3,20,11,L0|L1}, /* 26: 0110 0100 0010 0110 xxxx xxxx            */
	{&upd7810_device::ADINC_MKL_xx,  3,20,11,L0|L1}, /* 27: 0110 0100 0010 0111 xxxx xxxx            */
	{&upd7810_device::GTI_PA_xx,     3,14,11,L0|L1}, /* 28: 0110 0100 0010 1000 xxxx xxxx            */
	{&upd7810_device::GTI_PB_xx,     3,14,11,L0|L1}, /* 29: 0110 0100 0010 1001 xxxx xxxx            */
	{&upd7810_device::GTI_PC_xx,     3,14,11,L0|L1}, /* 2a: 0110 0100 0010 1010 xxxx xxxx            */
	{&upd7810_device::GTI_PD_xx,     3,14,11,L0|L1}, /* 2b: 0110 0100 0010 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 2c: 0110 0100 0010 1100 xxxx xxxx            */
	{&upd7810_device::GTI_PF_xx,     3,14,11,L0|L1}, /* 2d: 0110 0100 0010 1101 xxxx xxxx            */
	{&upd7810_device::GTI_MKH_xx,    3,14,11,L0|L1}, /* 2e: 0110 0100 0010 1110 xxxx xxxx            */
	{&upd7810_device::GTI_MKL_xx,    3,14,11,L0|L1}, /* 2f: 0110 0100 0010 1111 xxxx xxxx            */

	{&upd7810_device::SUINB_PA_xx,   3,20,11,L0|L1}, /* 30: 0110 0100 0011 0000 xxxx xxxx            */
	{&upd7810_device::SUINB_PB_xx,   3,20,11,L0|L1}, /* 31: 0110 0100 0011 0001 xxxx xxxx            */
	{&upd7810_device::SUINB_PC_xx,   3,20,11,L0|L1}, /* 32: 0110 0100 0011 0010 xxxx xxxx            */
	{&upd7810_device::SUINB_PD_xx,   3,20,11,L0|L1}, /* 33: 0110 0100 0011 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 34: 0110 0100 0011 0100 xxxx xxxx            */
	{&upd7810_device::SUINB_PF_xx,   3,20,11,L0|L1}, /* 35: 0110 0100 0011 0101 xxxx xxxx            */
	{&upd7810_device::SUINB_MKH_xx,  3,20,11,L0|L1}, /* 36: 0110 0100 0011 0110 xxxx xxxx            */
	{&upd7810_device::SUINB_MKL_xx,  3,20,11,L0|L1}, /* 37: 0110 0100 0011 0111 xxxx xxxx            */
	{&upd7810_device::LTI_PA_xx,     3,14,11,L0|L1}, /* 38: 0110 0100 0011 1000 xxxx xxxx            */
	{&upd7810_device::LTI_PB_xx,     3,14,11,L0|L1}, /* 39: 0110 0100 0011 1001 xxxx xxxx            */
	{&upd7810_device::LTI_PC_xx,     3,14,11,L0|L1}, /* 3a: 0110 0100 0011 1010 xxxx xxxx            */
	{&upd7810_device::LTI_PD_xx,     3,14,11,L0|L1}, /* 3b: 0110 0100 0011 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 3c: 0110 0100 0011 1100 xxxx xxxx            */
	{&upd7810_device::LTI_PF_xx,     3,14,11,L0|L1}, /* 3d: 0110 0100 0011 1101 xxxx xxxx            */
	{&upd7810_device::LTI_MKH_xx,    3,14,11,L0|L1}, /* 3e: 0110 0100 0011 1110 xxxx xxxx            */
	{&upd7810_device::LTI_MKL_xx,    3,14,11,L0|L1}, /* 3f: 0110 0100 0011 1111 xxxx xxxx            */

	{&upd7810_device::ADI_PA_xx,     3,20,11,L0|L1}, /* 40: 0110 0100 0100 0000 xxxx xxxx            */
	{&upd7810_device::ADI_PB_xx,     3,20,11,L0|L1}, /* 41: 0110 0100 0100 0001 xxxx xxxx            */
	{&upd7810_device::ADI_PC_xx,     3,20,11,L0|L1}, /* 42: 0110 0100 0100 0010 xxxx xxxx            */
	{&upd7810_device::ADI_PD_xx,     3,20,11,L0|L1}, /* 43: 0110 0100 0100 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 44: 0110 0100 0100 0100 xxxx xxxx            */
	{&upd7810_device::ADI_PF_xx,     3,20,11,L0|L1}, /* 45: 0110 0100 0100 0101 xxxx xxxx            */
	{&upd7810_device::ADI_MKH_xx,    3,20,11,L0|L1}, /* 46: 0110 0100 0100 0110 xxxx xxxx            */
	{&upd7810_device::ADI_MKL_xx,    3,20,11,L0|L1}, /* 47: 0110 0100 0100 0111 xxxx xxxx            */
	{&upd7810_device::ONI_PA_xx,     3,14,11,L0|L1}, /* 48: 0110 0100 0100 1000 xxxx xxxx            */
	{&upd7810_device::ONI_PB_xx,     3,14,11,L0|L1}, /* 49: 0110 0100 0100 1001 xxxx xxxx            */
	{&upd7810_device::ONI_PC_xx,     3,14,11,L0|L1}, /* 4a: 0110 0100 0100 1010 xxxx xxxx            */
	{&upd7810_device::ONI_PD_xx,     3,14,11,L0|L1}, /* 4b: 0110 0100 0100 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 4c: 0110 0100 0100 1100 xxxx xxxx            */
	{&upd7810_device::ONI_PF_xx,     3,14,11,L0|L1}, /* 4d: 0110 0100 0100 1101 xxxx xxxx            */
	{&upd7810_device::ONI_MKH_xx,    3,14,11,L0|L1}, /* 4e: 0110 0100 0100 1110 xxxx xxxx            */
	{&upd7810_device::ONI_MKL_xx,    3,14,11,L0|L1}, /* 4f: 0110 0100 0100 1111 xxxx xxxx            */

	{&upd7810_device::ACI_PA_xx,     3,20,11,L0|L1}, /* 50: 0110 0100 0101 0000 xxxx xxxx            */
	{&upd7810_device::ACI_PB_xx,     3,20,11,L0|L1}, /* 51: 0110 0100 0101 0001 xxxx xxxx            */
	{&upd7810_device::ACI_PC_xx,     3,20,11,L0|L1}, /* 52: 0110 0100 0101 0010 xxxx xxxx            */
	{&upd7810_device::ACI_PD_xx,     3,20,11,L0|L1}, /* 53: 0110 0100 0101 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 54: 0110 0100 0101 0100 xxxx xxxx            */
	{&upd7810_device::ACI_PF_xx,     3,20,11,L0|L1}, /* 55: 0110 0100 0101 0101 xxxx xxxx            */
	{&upd7810_device::ACI_MKH_xx,    3,20,11,L0|L1}, /* 56: 0110 0100 0101 0110 xxxx xxxx            */
	{&upd7810_device::ACI_MKL_xx,    3,20,11,L0|L1}, /* 57: 0110 0100 0101 0111 xxxx xxxx            */
	{&upd7810_device::OFFI_PA_xx,    3,14,11,L0|L1}, /* 58: 0110 0100 0101 1000 xxxx xxxx            */
	{&upd7810_device::OFFI_PB_xx,    3,14,11,L0|L1}, /* 59: 0110 0100 0101 1001 xxxx xxxx            */
	{&upd7810_device::OFFI_PC_xx,    3,14,11,L0|L1}, /* 5a: 0110 0100 0101 1010 xxxx xxxx            */
	{&upd7810_device::OFFI_PD_xx,    3,14,11,L0|L1}, /* 5b: 0110 0100 0101 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 5c: 0110 0100 0101 1100 xxxx xxxx            */
	{&upd7810_device::OFFI_PF_xx,    3,14,11,L0|L1}, /* 5d: 0110 0100 0101 1101 xxxx xxxx            */
	{&upd7810_device::OFFI_MKH_xx,   3,14,11,L0|L1}, /* 5e: 0110 0100 0101 1110 xxxx xxxx            */
	{&upd7810_device::OFFI_MKL_xx,   3,14,11,L0|L1}, /* 5f: 0110 0100 0101 1111 xxxx xxxx            */

	{&upd7810_device::SUI_PA_xx,     3,20,11,L0|L1}, /* 60: 0110 0100 0110 0000 xxxx xxxx            */
	{&upd7810_device::SUI_PB_xx,     3,20,11,L0|L1}, /* 61: 0110 0100 0110 0001 xxxx xxxx            */
	{&upd7810_device::SUI_PC_xx,     3,20,11,L0|L1}, /* 62: 0110 0100 0110 0010 xxxx xxxx            */
	{&upd7810_device::SUI_PD_xx,     3,20,11,L0|L1}, /* 63: 0110 0100 0110 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 64: 0110 0100 0110 0100 xxxx xxxx            */
	{&upd7810_device::SUI_PF_xx,     3,20,11,L0|L1}, /* 65: 0110 0100 0110 0101 xxxx xxxx            */
	{&upd7810_device::SUI_MKH_xx,    3,20,11,L0|L1}, /* 66: 0110 0100 0110 0110 xxxx xxxx            */
	{&upd7810_device::SUI_MKL_xx,    3,20,11,L0|L1}, /* 67: 0110 0100 0110 0111 xxxx xxxx            */
	{&upd7810_device::NEI_PA_xx,     3,14,11,L0|L1}, /* 68: 0110 0100 0110 1000 xxxx xxxx            */
	{&upd7810_device::NEI_PB_xx,     3,14,11,L0|L1}, /* 69: 0110 0100 0110 1001 xxxx xxxx            */
	{&upd7810_device::NEI_PC_xx,     3,14,11,L0|L1}, /* 6a: 0110 0100 0110 1010 xxxx xxxx            */
	{&upd7810_device::NEI_PD_xx,     3,14,11,L0|L1}, /* 6b: 0110 0100 0110 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 6c: 0110 0100 0110 1100 xxxx xxxx            */
	{&upd7810_device::NEI_PF_xx,     3,14,11,L0|L1}, /* 6d: 0110 0100 0110 1101 xxxx xxxx            */
	{&upd7810_device::NEI_MKH_xx,    3,14,11,L0|L1}, /* 6e: 0110 0100 0110 1110 xxxx xxxx            */
	{&upd7810_device::NEI_MKL_xx,    3,14,11,L0|L1}, /* 6f: 0110 0100 0110 1111 xxxx xxxx            */

	{&upd7810_device::SBI_PA_xx,     3,20,11,L0|L1}, /* 70: 0110 0100 0111 0000 xxxx xxxx            */
	{&upd7810_device::SBI_PB_xx,     3,20,11,L0|L1}, /* 71: 0110 0100 0111 0001 xxxx xxxx            */
	{&upd7810_device::SBI_PC_xx,     3,20,11,L0|L1}, /* 72: 0110 0100 0111 0010 xxxx xxxx            */
	{&upd7810_device::SBI_PD_xx,     3,20,11,L0|L1}, /* 73: 0110 0100 0111 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 74: 0110 0100 0111 0100 xxxx xxxx            */
	{&upd7810_device::SBI_PF_xx,     3,20,11,L0|L1}, /* 75: 0110 0100 0111 0101 xxxx xxxx            */
	{&upd7810_device::SBI_MKH_xx,    3,20,11,L0|L1}, /* 76: 0110 0100 0111 0110 xxxx xxxx            */
	{&upd7810_device::SBI_MKL_xx,    3,20,11,L0|L1}, /* 77: 0110 0100 0111 0111 xxxx xxxx            */
	{&upd7810_device::EQI_PA_xx,     3,14,11,L0|L1}, /* 78: 0110 0100 0111 1000 xxxx xxxx            */
	{&upd7810_device::EQI_PB_xx,     3,14,11,L0|L1}, /* 79: 0110 0100 0111 1001 xxxx xxxx            */
	{&upd7810_device::EQI_PC_xx,     3,14,11,L0|L1}, /* 7a: 0110 0100 0111 1010 xxxx xxxx            */
	{&upd7810_device::EQI_PD_xx,     3,14,11,L0|L1}, /* 7b: 0110 0100 0111 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 7c: 0110 0100 0111 1100 xxxx xxxx            */
	{&upd7810_device::EQI_PF_xx,     3,14,11,L0|L1}, /* 7d: 0110 0100 0111 1101 xxxx xxxx            */
	{&upd7810_device::EQI_MKH_xx,    3,14,11,L0|L1}, /* 7e: 0110 0100 0111 1110 xxxx xxxx            */
	{&upd7810_device::EQI_MKL_xx,    3,14,11,L0|L1}, /* 7f: 0110 0100 0111 1111 xxxx xxxx            */

	{&upd7810_device::MVI_ANM_xx,    3,14,11,L0|L1}, /* 80: 0110 0100 1000 0000 xxxx xxxx            */
	{&upd7810_device::MVI_SMH_xx,    3,14,11,L0|L1}, /* 81: 0110 0100 1000 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 82: 0110 0100 1000 0010 xxxx xxxx            */
	{&upd7810_device::MVI_EOM_xx,    3,14,11,L0|L1}, /* 83: 0110 0100 1000 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 84: 0110 0100 1000 0100 xxxx xxxx            */
	{&upd7810_device::MVI_TMM_xx,    3,14,11,L0|L1}, /* 85: 0110 0100 1000 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 86: 0110 0100 1000 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 87: 0110 0100 1000 0111 xxxx xxxx            */
	{&upd7810_device::ANI_ANM_xx,    3,20,11,L0|L1}, /* 88: 0110 0100 1000 1000 xxxx xxxx            */
	{&upd7810_device::ANI_SMH_xx,    3,20,11,L0|L1}, /* 89: 0110 0100 1000 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 8a: 0110 0100 1000 1010 xxxx xxxx            */
	{&upd7810_device::ANI_EOM_xx,    3,20,11,L0|L1}, /* 8b: 0110 0100 1000 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 8c: 0110 0100 1000 1100 xxxx xxxx            */
	{&upd7810_device::ANI_TMM_xx,    3,20,11,L0|L1}, /* 8d: 0110 0100 1000 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 8e: 0110 0100 1000 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 8f: 0110 0100 1000 1111 xxxx xxxx            */

	{&upd7810_device::XRI_ANM_xx,    3,20,11,L0|L1}, /* 90: 0110 0100 1001 0000 xxxx xxxx            */
	{&upd7810_device::XRI_SMH_xx,    3,20,11,L0|L1}, /* 91: 0110 0100 1001 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 92: 0110 0100 1001 0010 xxxx xxxx            */
	{&upd7810_device::XRI_EOM_xx,    3,20,11,L0|L1}, /* 93: 0110 0100 1001 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 94: 0110 0100 1001 0100 xxxx xxxx            */
	{&upd7810_device::XRI_TMM_xx,    3,20,11,L0|L1}, /* 95: 0110 0100 1001 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 96: 0110 0100 1001 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 97: 0110 0100 1001 0111 xxxx xxxx            */
	{&upd7810_device::ORI_ANM_xx,    3,20,11,L0|L1}, /* 98: 0110 0100 1001 1000 xxxx xxxx            */
	{&upd7810_device::ORI_SMH_xx,    3,20,11,L0|L1}, /* 99: 0110 0100 1001 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 9a: 0110 0100 1001 1010 xxxx xxxx            */
	{&upd7810_device::ORI_EOM_xx,    3,20,11,L0|L1}, /* 9b: 0110 0100 1001 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 9c: 0110 0100 1001 1100 xxxx xxxx            */
	{&upd7810_device::ORI_TMM_xx,    3,20,11,L0|L1}, /* 9d: 0110 0100 1001 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 9e: 0110 0100 1001 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* 9f: 0110 0100 1001 1111 xxxx xxxx            */

	{&upd7810_device::ADINC_ANM_xx,  3,20,11,L0|L1}, /* a0: 0110 0100 1010 0000 xxxx xxxx            */
	{&upd7810_device::ADINC_SMH_xx,  3,20,11,L0|L1}, /* a1: 0110 0100 1010 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* a2: 0110 0100 1010 0010 xxxx xxxx            */
	{&upd7810_device::ADINC_EOM_xx,  3,20,11,L0|L1}, /* a3: 0110 0100 1010 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* a4: 0110 0100 1010 0100 xxxx xxxx            */
	{&upd7810_device::ADINC_TMM_xx,  3,20,11,L0|L1}, /* a5: 0110 0100 1010 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* a6: 0110 0100 1010 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* a7: 0110 0100 1010 0111 xxxx xxxx            */
	{&upd7810_device::GTI_ANM_xx,    3,14,11,L0|L1}, /* a8: 0110 0100 1010 1000 xxxx xxxx            */
	{&upd7810_device::GTI_SMH_xx,    3,14,11,L0|L1}, /* a9: 0110 0100 1010 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* aa: 0110 0100 1010 1010 xxxx xxxx            */
	{&upd7810_device::GTI_EOM_xx,    3,14,11,L0|L1}, /* ab: 0110 0100 1010 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ac: 0110 0100 1010 1100 xxxx xxxx            */
	{&upd7810_device::GTI_TMM_xx,    3,14,11,L0|L1}, /* ad: 0110 0100 1010 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ae: 0110 0100 1010 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* af: 0110 0100 1010 1111 xxxx xxxx            */

	{&upd7810_device::SUINB_ANM_xx,  3,20,11,L0|L1}, /* b0: 0110 0100 1011 0000 xxxx xxxx            */
	{&upd7810_device::SUINB_SMH_xx,  3,20,11,L0|L1}, /* b1: 0110 0100 1011 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* b2: 0110 0100 1011 0010 xxxx xxxx            */
	{&upd7810_device::SUINB_EOM_xx,  3,20,11,L0|L1}, /* b3: 0110 0100 1011 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* b4: 0110 0100 1011 0100 xxxx xxxx            */
	{&upd7810_device::SUINB_TMM_xx,  3,20,11,L0|L1}, /* b5: 0110 0100 1011 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* b6: 0110 0100 1011 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* b7: 0110 0100 1011 0111 xxxx xxxx            */
	{&upd7810_device::LTI_ANM_xx,    3,14,11,L0|L1}, /* b8: 0110 0100 1011 1000 xxxx xxxx            */
	{&upd7810_device::LTI_SMH_xx,    3,14,11,L0|L1}, /* b9: 0110 0100 1011 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ba: 0110 0100 1011 1010 xxxx xxxx            */
	{&upd7810_device::LTI_EOM_xx,    3,14,11,L0|L1}, /* bb: 0110 0100 1011 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* bc: 0110 0100 1011 1100 xxxx xxxx            */
	{&upd7810_device::LTI_TMM_xx,    3,14,11,L0|L1}, /* bd: 0110 0100 1011 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* be: 0110 0100 1011 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* bf: 0110 0100 1011 1111 xxxx xxxx            */

	{&upd7810_device::ADI_ANM_xx,    3,20,11,L0|L1}, /* c0: 0110 0100 1100 0000 xxxx xxxx            */
	{&upd7810_device::ADI_SMH_xx,    3,20,11,L0|L1}, /* c1: 0110 0100 1100 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* c2: 0110 0100 1100 0010 xxxx xxxx            */
	{&upd7810_device::ADI_EOM_xx,    3,20,11,L0|L1}, /* c3: 0110 0100 1100 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* c4: 0110 0100 1100 0100 xxxx xxxx            */
	{&upd7810_device::ADI_TMM_xx,    3,20,11,L0|L1}, /* c5: 0110 0100 1100 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* c6: 0110 0100 1100 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* c7: 0110 0100 1100 0111 xxxx xxxx            */
	{&upd7810_device::ONI_ANM_xx,    3,14,11,L0|L1}, /* c8: 0110 0100 1100 1000 xxxx xxxx            */
	{&upd7810_device::ONI_SMH_xx,    3,14,11,L0|L1}, /* c9: 0110 0100 1100 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ca: 0110 0100 1100 1010 xxxx xxxx            */
	{&upd7810_device::ONI_EOM_xx,    3,14,11,L0|L1}, /* cb: 0110 0100 1100 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* cc: 0110 0100 1100 1100 xxxx xxxx            */
	{&upd7810_device::ONI_TMM_xx,    3,14,11,L0|L1}, /* cd: 0110 0100 1100 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ce: 0110 0100 1100 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* cf: 0110 0100 1100 1111 xxxx xxxx            */

	{&upd7810_device::ACI_ANM_xx,    3,20,11,L0|L1}, /* d0: 0110 0100 1101 0000 xxxx xxxx            */
	{&upd7810_device::ACI_SMH_xx,    3,20,11,L0|L1}, /* d1: 0110 0100 1101 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* d2: 0110 0100 1101 0010 xxxx xxxx            */
	{&upd7810_device::ACI_EOM_xx,    3,20,11,L0|L1}, /* d3: 0110 0100 1101 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* d4: 0110 0100 1101 0100 xxxx xxxx            */
	{&upd7810_device::ACI_TMM_xx,    3,20,11,L0|L1}, /* d5: 0110 0100 1101 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* d6: 0110 0100 1101 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* d7: 0110 0100 1101 0111 xxxx xxxx            */
	{&upd7810_device::OFFI_ANM_xx,   3,14,11,L0|L1}, /* d8: 0110 0100 1101 1000 xxxx xxxx            */
	{&upd7810_device::OFFI_SMH_xx,   3,14,11,L0|L1}, /* d9: 0110 0100 1101 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* da: 0110 0100 1101 1010 xxxx xxxx            */
	{&upd7810_device::OFFI_EOM_xx,   3,14,11,L0|L1}, /* db: 0110 0100 1101 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* dc: 0110 0100 1101 1100 xxxx xxxx            */
	{&upd7810_device::OFFI_TMM_xx,   3,14,11,L0|L1}, /* dd: 0110 0100 1101 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* de: 0110 0100 1101 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* df: 0110 0100 1101 1111 xxxx xxxx            */

	{&upd7810_device::SUI_ANM_xx,    3,20,11,L0|L1}, /* e0: 0110 0100 1110 0000 xxxx xxxx            */
	{&upd7810_device::SUI_SMH_xx,    3,20,11,L0|L1}, /* e1: 0110 0100 1110 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* e2: 0110 0100 1110 0010 xxxx xxxx            */
	{&upd7810_device::SUI_EOM_xx,    3,20,11,L0|L1}, /* e3: 0110 0100 1110 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* e4: 0110 0100 1110 0100 xxxx xxxx            */
	{&upd7810_device::SUI_TMM_xx,    3,20,11,L0|L1}, /* e5: 0110 0100 1110 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* e6: 0110 0100 1110 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* e7: 0110 0100 1110 0111 xxxx xxxx            */
	{&upd7810_device::NEI_ANM_xx,    3,14,11,L0|L1}, /* e8: 0110 0100 1110 1000 xxxx xxxx            */
	{&upd7810_device::NEI_SMH_xx,    3,14,11,L0|L1}, /* e9: 0110 0100 1110 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ea: 0110 0100 1110 1010 xxxx xxxx            */
	{&upd7810_device::NEI_EOM_xx,    3,14,11,L0|L1}, /* eb: 0110 0100 1110 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ec: 0110 0100 1110 1100 xxxx xxxx            */
	{&upd7810_device::NEI_TMM_xx,    3,14,11,L0|L1}, /* ed: 0110 0100 1110 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ee: 0110 0100 1110 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* ef: 0110 0100 1110 1111 xxxx xxxx            */

	{&upd7810_device::SBI_ANM_xx,    3,20,11,L0|L1}, /* f0: 0110 0100 1111 0000 xxxx xxxx            */
	{&upd7810_device::SBI_SMH_xx,    3,20,11,L0|L1}, /* f1: 0110 0100 1111 0001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* f2: 0110 0100 1111 0010 xxxx xxxx            */
	{&upd7810_device::SBI_EOM_xx,    3,20,11,L0|L1}, /* f3: 0110 0100 1111 0011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* f4: 0110 0100 1111 0100 xxxx xxxx            */
	{&upd7810_device::SBI_TMM_xx,    3,20,11,L0|L1}, /* f5: 0110 0100 1111 0101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* f6: 0110 0100 1111 0110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* f7: 0110 0100 1111 0111 xxxx xxxx            */
	{&upd7810_device::EQI_ANM_xx,    3,14,11,L0|L1}, /* f8: 0110 0100 1111 1000 xxxx xxxx            */
	{&upd7810_device::EQI_SMH_xx,    3,14,11,L0|L1}, /* f9: 0110 0100 1111 1001 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* fa: 0110 0100 1111 1010 xxxx xxxx            */
	{&upd7810_device::EQI_EOM_xx,    3,14,11,L0|L1}, /* fb: 0110 0100 1111 1011 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* fc: 0110 0100 1111 1100 xxxx xxxx            */
	{&upd7810_device::EQI_TMM_xx,    3,14,11,L0|L1}, /* fd: 0110 0100 1111 1101 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}, /* fe: 0110 0100 1111 1110 xxxx xxxx            */
	{&upd7810_device::illegal2,      3,11,11,L0|L1}  /* ff: 0110 0100 1111 1111 xxxx xxxx            */
};

/* prefix 70 */
const struct upd7810_device::opcode_s upd7810_device::s_op70[256] =
{
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 00: 0111 0000 0000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 01: 0111 0000 0000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 02: 0111 0000 0000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 03: 0111 0000 0000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 04: 0111 0000 0000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 05: 0111 0000 0000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 06: 0111 0000 0000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 07: 0111 0000 0000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 08: 0111 0000 0000 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 09: 0111 0000 0000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0a: 0111 0000 0000 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0b: 0111 0000 0000 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0c: 0111 0000 0000 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 0d: 0111 0000 0000 1101                      */
	{&upd7810_device::SSPD_w,        4,20,14,L0|L1}, /* 0e: 0111 0000 0000 1110 llll llll hhhh hhhh  */
	{&upd7810_device::LSPD_w,        4,20,14,L0|L1}, /* 0f: 0111 0000 0000 1111 llll llll hhhh hhhh  */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 10: 0111 0000 0001 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 11: 0111 0000 0001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 12: 0111 0000 0001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 13: 0111 0000 0001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 14: 0111 0000 0001 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 15: 0111 0000 0001 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 16: 0111 0000 0001 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 17: 0111 0000 0001 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 18: 0111 0000 0001 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 19: 0111 0000 0001 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1a: 0111 0000 0001 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1b: 0111 0000 0001 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1c: 0111 0000 0001 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 1d: 0111 0000 0001 1101                      */
	{&upd7810_device::SBCD_w,        4,20,14,L0|L1}, /* 1e: 0111 0000 0001 1110 llll llll hhhh hhhh  */
	{&upd7810_device::LBCD_w,        4,20,14,L0|L1}, /* 1f: 0111 0000 0001 1111 llll llll hhhh hhhh  */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 20: 0111 0000 0010 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 21: 0111 0000 0010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 22: 0111 0000 0010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 23: 0111 0000 0010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 24: 0111 0000 0010 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 25: 0111 0000 0010 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 26: 0111 0000 0010 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 27: 0111 0000 0010 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 28: 0111 0000 0010 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 29: 0111 0000 0010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2a: 0111 0000 0010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2b: 0111 0000 0010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2c: 0111 0000 0010 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 2d: 0111 0000 0010 1101                      */
	{&upd7810_device::SDED_w,        4,20,14,L0|L1}, /* 2e: 0111 0000 0010 1110 llll llll hhhh hhhh  */
	{&upd7810_device::LDED_w,        4,20,14,L0|L1}, /* 2f: 0111 0000 0010 1111 llll llll hhhh hhhh  */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 30: 0111 0000 0011 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 31: 0111 0000 0011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 32: 0111 0000 0011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 33: 0111 0000 0011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 34: 0111 0000 0011 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 35: 0111 0000 0011 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 36: 0111 0000 0011 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 37: 0111 0000 0011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 38: 0111 0000 0011 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 39: 0111 0000 0011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3a: 0111 0000 0011 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3b: 0111 0000 0011 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3c: 0111 0000 0011 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 3d: 0111 0000 0011 1101                      */
	{&upd7810_device::SHLD_w,        4,20,14,L0|L1}, /* 3e: 0111 0000 0011 1110 llll llll hhhh hhhh  */
	{&upd7810_device::LHLD_w,        4,20,14,L0|L1}, /* 3f: 0111 0000 0011 1111 llll llll hhhh hhhh  */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 40: 0111 0000 0100 0000                      */
	{&upd7810_device::EADD_EA_A,     2,11, 8,L0|L1}, /* 41: 0111 0000 0100 0001                      */
	{&upd7810_device::EADD_EA_B,     2,11, 8,L0|L1}, /* 42: 0111 0000 0100 0010                      */
	{&upd7810_device::EADD_EA_C,     2,11, 8,L0|L1}, /* 43: 0111 0000 0100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 44: 0111 0000 0100 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 45: 0111 0000 0100 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 46: 0111 0000 0100 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 47: 0111 0000 0100 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 48: 0111 0000 0100 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 49: 0111 0000 0100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4a: 0111 0000 0100 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4b: 0111 0000 0100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4c: 0111 0000 0100 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4d: 0111 0000 0100 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4e: 0111 0000 0100 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 4f: 0111 0000 0100 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 50: 0111 0000 0101 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 51: 0111 0000 0101 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 52: 0111 0000 0101 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 53: 0111 0000 0101 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 54: 0111 0000 0101 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 55: 0111 0000 0101 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 56: 0111 0000 0101 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 57: 0111 0000 0101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 58: 0111 0000 0101 1000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 59: 0111 0000 0101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5a: 0111 0000 0101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5b: 0111 0000 0101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5c: 0111 0000 0101 1100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5d: 0111 0000 0101 1101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5e: 0111 0000 0101 1110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 5f: 0111 0000 0101 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 60: 0111 0000 0110 0000                      */
	{&upd7810_device::ESUB_EA_A,     2,11, 8,L0|L1}, /* 61: 0111 0000 0110 0001                      */
	{&upd7810_device::ESUB_EA_B,     2,11, 8,L0|L1}, /* 62: 0111 0000 0110 0010                      */
	{&upd7810_device::ESUB_EA_C,     2,11, 8,L0|L1}, /* 63: 0111 0000 0110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 64: 0111 0000 0110 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 65: 0111 0000 0110 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 66: 0111 0000 0110 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 67: 0111 0000 0110 0111                      */
	{&upd7810_device::MOV_V_w,       4,17,14,L0|L1}, /* 68: 0111 0000 0110 1000 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_A_w,       4,17,14,L0|L1}, /* 69: 0111 0000 0110 1001 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_B_w,       4,17,14,L0|L1}, /* 6a: 0111 0000 0110 1010 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_C_w,       4,17,14,L0|L1}, /* 6b: 0111 0000 0110 1011 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_D_w,       4,17,14,L0|L1}, /* 6c: 0111 0000 0110 1100 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_E_w,       4,17,14,L0|L1}, /* 6d: 0111 0000 0110 1101 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_H_w,       4,17,14,L0|L1}, /* 6e: 0111 0000 0110 1110 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_L_w,       4,17,14,L0|L1}, /* 6f: 0111 0000 0110 1111 llll llll hhhh hhhh  */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 70: 0111 0000 0111 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 71: 0111 0000 0111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 72: 0111 0000 0111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 73: 0111 0000 0111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 74: 0111 0000 0111 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 75: 0111 0000 0111 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 76: 0111 0000 0111 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 77: 0111 0000 0111 0111                      */
	{&upd7810_device::MOV_w_V,       4,17,14,L0|L1}, /* 78: 0111 0000 0111 1000 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_A,       4,17,14,L0|L1}, /* 79: 0111 0000 0111 1001 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_B,       4,17,14,L0|L1}, /* 7a: 0111 0000 0111 1010 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_C,       4,17,14,L0|L1}, /* 7b: 0111 0000 0111 1011 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_D,       4,17,14,L0|L1}, /* 7c: 0111 0000 0111 1100 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_E,       4,17,14,L0|L1}, /* 7d: 0111 0000 0111 1101 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_H,       4,17,14,L0|L1}, /* 7e: 0111 0000 0111 1110 llll llll hhhh hhhh  */
	{&upd7810_device::MOV_w_L,       4,17,14,L0|L1}, /* 7f: 0111 0000 0111 1111 llll llll hhhh hhhh  */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 80: 0111 0000 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 81: 0111 0000 1000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 82: 0111 0000 1000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 83: 0111 0000 1000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 84: 0111 0000 1000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 85: 0111 0000 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 86: 0111 0000 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 87: 0111 0000 1000 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 88: 0111 0000 1000 1000                      */
	{&upd7810_device::ANAX_B,        2,11, 8,L0|L1}, /* 89: 0111 0000 1000 1001                      */
	{&upd7810_device::ANAX_D,        2,11, 8,L0|L1}, /* 8a: 0111 0000 1000 1010                      */
	{&upd7810_device::ANAX_H,        2,11, 8,L0|L1}, /* 8b: 0111 0000 1000 1011                      */
	{&upd7810_device::ANAX_Dp,       2,11, 8,L0|L1}, /* 8c: 0111 0000 1000 1100                      */
	{&upd7810_device::ANAX_Hp,       2,11, 8,L0|L1}, /* 8d: 0111 0000 1000 1101                      */
	{&upd7810_device::ANAX_Dm,       2,11, 8,L0|L1}, /* 8e: 0111 0000 1000 1110                      */
	{&upd7810_device::ANAX_Hm,       2,11, 8,L0|L1}, /* 8f: 0111 0000 1000 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 90: 0111 0000 1001 0000                      */
	{&upd7810_device::XRAX_B,        2,11, 8,L0|L1}, /* 91: 0111 0000 1001 0001                      */
	{&upd7810_device::XRAX_D,        2,11, 8,L0|L1}, /* 92: 0111 0000 1001 0010                      */
	{&upd7810_device::XRAX_H,        2,11, 8,L0|L1}, /* 93: 0111 0000 1001 0011                      */
	{&upd7810_device::XRAX_Dp,       2,11, 8,L0|L1}, /* 94: 0111 0000 1001 0100                      */
	{&upd7810_device::XRAX_Hp,       2,11, 8,L0|L1}, /* 95: 0111 0000 1001 0101                      */
	{&upd7810_device::XRAX_Dm,       2,11, 8,L0|L1}, /* 96: 0111 0000 1001 0110                      */
	{&upd7810_device::XRAX_Hm,       2,11, 8,L0|L1}, /* 97: 0111 0000 1001 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 98: 0111 0000 1001 1000                      */
	{&upd7810_device::ORAX_B,        2,11, 8,L0|L1}, /* 99: 0111 0000 1001 1001                      */
	{&upd7810_device::ORAX_D,        2,11, 8,L0|L1}, /* 9a: 0111 0000 1001 1010                      */
	{&upd7810_device::ORAX_H,        2,11, 8,L0|L1}, /* 9b: 0111 0000 1001 1011                      */
	{&upd7810_device::ORAX_Dp,       2,11, 8,L0|L1}, /* 9c: 0111 0000 1001 1100                      */
	{&upd7810_device::ORAX_Hp,       2,11, 8,L0|L1}, /* 9d: 0111 0000 1001 1101                      */
	{&upd7810_device::ORAX_Dm,       2,11, 8,L0|L1}, /* 9e: 0111 0000 1001 1110                      */
	{&upd7810_device::ORAX_Hm,       2,11, 8,L0|L1}, /* 9f: 0111 0000 1001 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a0: 0111 0000 1010 0000                      */
	{&upd7810_device::ADDNCX_B,      2,11, 8,L0|L1}, /* a1: 0111 0000 1010 0001                      */
	{&upd7810_device::ADDNCX_D,      2,11, 8,L0|L1}, /* a2: 0111 0000 1010 0010                      */
	{&upd7810_device::ADDNCX_H,      2,11, 8,L0|L1}, /* a3: 0111 0000 1010 0011                      */
	{&upd7810_device::ADDNCX_Dp,     2,11, 8,L0|L1}, /* a4: 0111 0000 1010 0100                      */
	{&upd7810_device::ADDNCX_Hp,     2,11, 8,L0|L1}, /* a5: 0111 0000 1010 0101                      */
	{&upd7810_device::ADDNCX_Dm,     2,11, 8,L0|L1}, /* a6: 0111 0000 1010 0110                      */
	{&upd7810_device::ADDNCX_Hm,     2,11, 8,L0|L1}, /* a7: 0111 0000 1010 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a8: 0111 0000 1010 1000                      */
	{&upd7810_device::GTAX_B,        2,11, 8,L0|L1}, /* a9: 0111 0000 1010 1001                      */
	{&upd7810_device::GTAX_D,        2,11, 8,L0|L1}, /* aa: 0111 0000 1010 1010                      */
	{&upd7810_device::GTAX_H,        2,11, 8,L0|L1}, /* ab: 0111 0000 1010 1011                      */
	{&upd7810_device::GTAX_Dp,       2,11, 8,L0|L1}, /* ac: 0111 0000 1010 1100                      */
	{&upd7810_device::GTAX_Hp,       2,11, 8,L0|L1}, /* ad: 0111 0000 1010 1101                      */
	{&upd7810_device::GTAX_Dm,       2,11, 8,L0|L1}, /* ae: 0111 0000 1010 1110                      */
	{&upd7810_device::GTAX_Hm,       2,11, 8,L0|L1}, /* af: 0111 0000 1010 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b0: 0111 0000 1011 0000                      */
	{&upd7810_device::SUBNBX_B,      2,11, 8,L0|L1}, /* b1: 0111 0000 1011 0001                      */
	{&upd7810_device::SUBNBX_D,      2,11, 8,L0|L1}, /* b2: 0111 0000 1011 0010                      */
	{&upd7810_device::SUBNBX_H,      2,11, 8,L0|L1}, /* b3: 0111 0000 1011 0011                      */
	{&upd7810_device::SUBNBX_Dp,     2,11, 8,L0|L1}, /* b4: 0111 0000 1011 0100                      */
	{&upd7810_device::SUBNBX_Hp,     2,11, 8,L0|L1}, /* b5: 0111 0000 1011 0101                      */
	{&upd7810_device::SUBNBX_Dm,     2,11, 8,L0|L1}, /* b6: 0111 0000 1011 0110                      */
	{&upd7810_device::SUBNBX_Hm,     2,11, 8,L0|L1}, /* b7: 0111 0000 1011 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b8: 0111 0000 1011 1000                      */
	{&upd7810_device::LTAX_B,        2,11, 8,L0|L1}, /* b9: 0111 0000 1011 1001                      */
	{&upd7810_device::LTAX_D,        2,11, 8,L0|L1}, /* ba: 0111 0000 1011 1010                      */
	{&upd7810_device::LTAX_H,        2,11, 8,L0|L1}, /* bb: 0111 0000 1011 1011                      */
	{&upd7810_device::LTAX_Dp,       2,11, 8,L0|L1}, /* bc: 0111 0000 1011 1100                      */
	{&upd7810_device::LTAX_Hp,       2,11, 8,L0|L1}, /* bd: 0111 0000 1011 1101                      */
	{&upd7810_device::LTAX_Dm,       2,11, 8,L0|L1}, /* be: 0111 0000 1011 1110                      */
	{&upd7810_device::LTAX_Hm,       2,11, 8,L0|L1}, /* bf: 0111 0000 1011 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c0: 0111 0000 1100 0000                      */
	{&upd7810_device::ADDX_B,        2,11, 8,L0|L1}, /* c1: 0111 0000 1100 0001                      */
	{&upd7810_device::ADDX_D,        2,11, 8,L0|L1}, /* c2: 0111 0000 1100 0010                      */
	{&upd7810_device::ADDX_H,        2,11, 8,L0|L1}, /* c3: 0111 0000 1100 0011                      */
	{&upd7810_device::ADDX_Dp,       2,11, 8,L0|L1}, /* c4: 0111 0000 1100 0100                      */
	{&upd7810_device::ADDX_Hp,       2,11, 8,L0|L1}, /* c5: 0111 0000 1100 0101                      */
	{&upd7810_device::ADDX_Dm,       2,11, 8,L0|L1}, /* c6: 0111 0000 1100 0110                      */
	{&upd7810_device::ADDX_Hm,       2,11, 8,L0|L1}, /* c7: 0111 0000 1100 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c8: 0111 0000 1100 1000                      */
	{&upd7810_device::ONAX_B,        2,11, 8,L0|L1}, /* c9: 0111 0000 1100 1001                      */
	{&upd7810_device::ONAX_D,        2,11, 8,L0|L1}, /* ca: 0111 0000 1100 1010                      */
	{&upd7810_device::ONAX_H,        2,11, 8,L0|L1}, /* cb: 0111 0000 1100 1011                      */
	{&upd7810_device::ONAX_Dp,       2,11, 8,L0|L1}, /* cc: 0111 0000 1100 1100                      */
	{&upd7810_device::ONAX_Hp,       2,11, 8,L0|L1}, /* cd: 0111 0000 1100 1101                      */
	{&upd7810_device::ONAX_Dm,       2,11, 8,L0|L1}, /* ce: 0111 0000 1100 1110                      */
	{&upd7810_device::ONAX_Hm,       2,11, 8,L0|L1}, /* cf: 0111 0000 1100 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d0: 0111 0000 1101 0000                      */
	{&upd7810_device::ADCX_B,        2,11, 8,L0|L1}, /* d1: 0111 0000 1101 0001                      */
	{&upd7810_device::ADCX_D,        2,11, 8,L0|L1}, /* d2: 0111 0000 1101 0010                      */
	{&upd7810_device::ADCX_H,        2,11, 8,L0|L1}, /* d3: 0111 0000 1101 0011                      */
	{&upd7810_device::ADCX_Dp,       2,11, 8,L0|L1}, /* d4: 0111 0000 1101 0100                      */
	{&upd7810_device::ADCX_Hp,       2,11, 8,L0|L1}, /* d5: 0111 0000 1101 0101                      */
	{&upd7810_device::ADCX_Dm,       2,11, 8,L0|L1}, /* d6: 0111 0000 1101 0110                      */
	{&upd7810_device::ADCX_Hm,       2,11, 8,L0|L1}, /* d7: 0111 0000 1101 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d8: 0111 0000 1101 1000                      */
	{&upd7810_device::OFFAX_B,       2,11, 8,L0|L1}, /* d9: 0111 0000 1101 1001                      */
	{&upd7810_device::OFFAX_D,       2,11, 8,L0|L1}, /* da: 0111 0000 1101 1010                      */
	{&upd7810_device::OFFAX_H,       2,11, 8,L0|L1}, /* db: 0111 0000 1101 1011                      */
	{&upd7810_device::OFFAX_Dp,      2,11, 8,L0|L1}, /* dc: 0111 0000 1101 1100                      */
	{&upd7810_device::OFFAX_Hp,      2,11, 8,L0|L1}, /* dd: 0111 0000 1101 1101                      */
	{&upd7810_device::OFFAX_Dm,      2,11, 8,L0|L1}, /* de: 0111 0000 1101 1110                      */
	{&upd7810_device::OFFAX_Hm,      2,11, 8,L0|L1}, /* df: 0111 0000 1101 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e0: 0111 0000 1110 0000                      */
	{&upd7810_device::SUBX_B,        2,11, 8,L0|L1}, /* e1: 0111 0000 1110 0001                      */
	{&upd7810_device::SUBX_D,        2,11, 8,L0|L1}, /* e2: 0111 0000 1110 0010                      */
	{&upd7810_device::SUBX_H,        2,11, 8,L0|L1}, /* e3: 0111 0000 1110 0011                      */
	{&upd7810_device::SUBX_Dp,       2,11, 8,L0|L1}, /* e4: 0111 0000 1110 0100                      */
	{&upd7810_device::SUBX_Hp,       2,11, 8,L0|L1}, /* e5: 0111 0000 1110 0101                      */
	{&upd7810_device::SUBX_Dm,       2,11, 8,L0|L1}, /* e6: 0111 0000 1110 0110                      */
	{&upd7810_device::SUBX_Hm,       2,11, 8,L0|L1}, /* e7: 0111 0000 1110 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e8: 0111 0000 1110 1000                      */
	{&upd7810_device::NEAX_B,        2,11, 8,L0|L1}, /* e9: 0111 0000 1110 1001                      */
	{&upd7810_device::NEAX_D,        2,11, 8,L0|L1}, /* ea: 0111 0000 1110 1010                      */
	{&upd7810_device::NEAX_H,        2,11, 8,L0|L1}, /* eb: 0111 0000 1110 1011                      */
	{&upd7810_device::NEAX_Dp,       2,11, 8,L0|L1}, /* ec: 0111 0000 1110 1100                      */
	{&upd7810_device::NEAX_Hp,       2,11, 8,L0|L1}, /* ed: 0111 0000 1110 1101                      */
	{&upd7810_device::NEAX_Dm,       2,11, 8,L0|L1}, /* ee: 0111 0000 1110 1110                      */
	{&upd7810_device::NEAX_Hm,       2,11, 8,L0|L1}, /* ef: 0111 0000 1110 1111                      */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f0: 0111 0000 1111 0000                      */
	{&upd7810_device::SBBX_B,        2,11, 8,L0|L1}, /* f1: 0111 0000 1111 0001                      */
	{&upd7810_device::SBBX_D,        2,11, 8,L0|L1}, /* f2: 0111 0000 1111 0010                      */
	{&upd7810_device::SBBX_H,        2,11, 8,L0|L1}, /* f3: 0111 0000 1111 0011                      */
	{&upd7810_device::SBBX_Dp,       2,11, 8,L0|L1}, /* f4: 0111 0000 1111 0100                      */
	{&upd7810_device::SBBX_Hp,       2,11, 8,L0|L1}, /* f5: 0111 0000 1111 0101                      */
	{&upd7810_device::SBBX_Dm,       2,11, 8,L0|L1}, /* f6: 0111 0000 1111 0110                      */
	{&upd7810_device::SBBX_Hm,       2,11, 8,L0|L1}, /* f7: 0111 0000 1111 0111                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f8: 0111 0000 1111 1000                      */
	{&upd7810_device::EQAX_B,        2,11, 8,L0|L1}, /* f9: 0111 0000 1111 1001                      */
	{&upd7810_device::EQAX_D,        2,11, 8,L0|L1}, /* fa: 0111 0000 1111 1010                      */
	{&upd7810_device::EQAX_H,        2,11, 8,L0|L1}, /* fb: 0111 0000 1111 1011                      */
	{&upd7810_device::EQAX_Dp,       2,11, 8,L0|L1}, /* fc: 0111 0000 1111 1100                      */
	{&upd7810_device::EQAX_Hp,       2,11, 8,L0|L1}, /* fd: 0111 0000 1111 1101                      */
	{&upd7810_device::EQAX_Dm,       2,11, 8,L0|L1}, /* fe: 0111 0000 1111 1110                      */
	{&upd7810_device::EQAX_Hm,       2,11, 8,L0|L1}  /* ff: 0111 0000 1111 1111                      */
};

/* prefix 74 */
const struct upd7810_device::opcode_s upd7810_device::s_op74[256] =
{
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 00: 0111 0100 0000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 01: 0111 0100 0000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 02: 0111 0100 0000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 03: 0111 0100 0000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 04: 0111 0100 0000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 05: 0111 0100 0000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 06: 0111 0100 0000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 07: 0111 0100 0000 0111                      */
	{&upd7810_device::ANI_V_xx,      3,11,11,L0|L1}, /* 08: 0111 0100 0000 1000 xxxx xxxx            */
	{&upd7810_device::ANI_A_xx,      3,11,11,L0|L1}, /* 09: 0111 0100 0000 1001 xxxx xxxx            */
	{&upd7810_device::ANI_B_xx,      3,11,11,L0|L1}, /* 0a: 0111 0100 0000 1010 xxxx xxxx            */
	{&upd7810_device::ANI_C_xx,      3,11,11,L0|L1}, /* 0b: 0111 0100 0000 1011 xxxx xxxx            */
	{&upd7810_device::ANI_D_xx,      3,11,11,L0|L1}, /* 0c: 0111 0100 0000 1100 xxxx xxxx            */
	{&upd7810_device::ANI_E_xx,      3,11,11,L0|L1}, /* 0d: 0111 0100 0000 1101 xxxx xxxx            */
	{&upd7810_device::ANI_H_xx,      3,11,11,L0|L1}, /* 0e: 0111 0100 0000 1110 xxxx xxxx            */
	{&upd7810_device::ANI_L_xx,      3,11,11,L0|L1}, /* 0f: 0111 0100 0000 1111 xxxx xxxx            */

	{&upd7810_device::XRI_V_xx,      3,11,11,L0|L1}, /* 10: 0111 0100 0001 0000 xxxx xxxx            */
	{&upd7810_device::XRI_A_xx,      3,11,11,L0|L1}, /* 11: 0111 0100 0001 0001 xxxx xxxx            */
	{&upd7810_device::XRI_B_xx,      3,11,11,L0|L1}, /* 12: 0111 0100 0001 0010 xxxx xxxx            */
	{&upd7810_device::XRI_C_xx,      3,11,11,L0|L1}, /* 13: 0111 0100 0001 0011 xxxx xxxx            */
	{&upd7810_device::XRI_D_xx,      3,11,11,L0|L1}, /* 14: 0111 0100 0001 0100 xxxx xxxx            */
	{&upd7810_device::XRI_E_xx,      3,11,11,L0|L1}, /* 15: 0111 0100 0001 0101 xxxx xxxx            */
	{&upd7810_device::XRI_H_xx,      3,11,11,L0|L1}, /* 16: 0111 0100 0001 0110 xxxx xxxx            */
	{&upd7810_device::XRI_L_xx,      3,11,11,L0|L1}, /* 17: 0111 0100 0001 0111 xxxx xxxx            */
	{&upd7810_device::ORI_V_xx,      3,11,11,L0|L1}, /* 18: 0111 0100 0001 1000 xxxx xxxx            */
	{&upd7810_device::ORI_A_xx,      3,11,11,L0|L1}, /* 19: 0111 0100 0001 1001 xxxx xxxx            */
	{&upd7810_device::ORI_B_xx,      3,11,11,L0|L1}, /* 1a: 0111 0100 0001 1010 xxxx xxxx            */
	{&upd7810_device::ORI_C_xx,      3,11,11,L0|L1}, /* 1b: 0111 0100 0001 1011 xxxx xxxx            */
	{&upd7810_device::ORI_D_xx,      3,11,11,L0|L1}, /* 1c: 0111 0100 0001 1100 xxxx xxxx            */
	{&upd7810_device::ORI_E_xx,      3,11,11,L0|L1}, /* 1d: 0111 0100 0001 1101 xxxx xxxx            */
	{&upd7810_device::ORI_H_xx,      3,11,11,L0|L1}, /* 1e: 0111 0100 0001 1110 xxxx xxxx            */
	{&upd7810_device::ORI_L_xx,      3,11,11,L0|L1}, /* 1f: 0111 0100 0001 1111 xxxx xxxx            */

	{&upd7810_device::ADINC_V_xx,    3,11,11,L0|L1}, /* 20: 0111 0100 0010 0000 xxxx xxxx            */
	{&upd7810_device::ADINC_A_xx,    3,11,11,L0|L1}, /* 21: 0111 0100 0010 0001 xxxx xxxx            */
	{&upd7810_device::ADINC_B_xx,    3,11,11,L0|L1}, /* 22: 0111 0100 0010 0010 xxxx xxxx            */
	{&upd7810_device::ADINC_C_xx,    3,11,11,L0|L1}, /* 23: 0111 0100 0010 0011 xxxx xxxx            */
	{&upd7810_device::ADINC_D_xx,    3,11,11,L0|L1}, /* 24: 0111 0100 0010 0100 xxxx xxxx            */
	{&upd7810_device::ADINC_E_xx,    3,11,11,L0|L1}, /* 25: 0111 0100 0010 0101 xxxx xxxx            */
	{&upd7810_device::ADINC_H_xx,    3,11,11,L0|L1}, /* 26: 0111 0100 0010 0110 xxxx xxxx            */
	{&upd7810_device::ADINC_L_xx,    3,11,11,L0|L1}, /* 27: 0111 0100 0010 0111 xxxx xxxx            */
	{&upd7810_device::GTI_V_xx,      3,11,11,L0|L1}, /* 28: 0111 0100 0010 1000 xxxx xxxx            */
	{&upd7810_device::GTI_A_xx,      3,11,11,L0|L1}, /* 29: 0111 0100 0010 1001 xxxx xxxx            */
	{&upd7810_device::GTI_B_xx,      3,11,11,L0|L1}, /* 2a: 0111 0100 0010 1010 xxxx xxxx            */
	{&upd7810_device::GTI_C_xx,      3,11,11,L0|L1}, /* 2b: 0111 0100 0010 1011 xxxx xxxx            */
	{&upd7810_device::GTI_D_xx,      3,11,11,L0|L1}, /* 2c: 0111 0100 0010 1100 xxxx xxxx            */
	{&upd7810_device::GTI_E_xx,      3,11,11,L0|L1}, /* 2d: 0111 0100 0010 1101 xxxx xxxx            */
	{&upd7810_device::GTI_H_xx,      3,11,11,L0|L1}, /* 2e: 0111 0100 0010 1110 xxxx xxxx            */
	{&upd7810_device::GTI_L_xx,      3,11,11,L0|L1}, /* 2f: 0111 0100 0010 1111 xxxx xxxx            */

	{&upd7810_device::SUINB_V_xx,    3,11,11,L0|L1}, /* 30: 0111 0100 0011 0000 xxxx xxxx            */
	{&upd7810_device::SUINB_A_xx,    3,11,11,L0|L1}, /* 31: 0111 0100 0011 0001 xxxx xxxx            */
	{&upd7810_device::SUINB_B_xx,    3,11,11,L0|L1}, /* 32: 0111 0100 0011 0010 xxxx xxxx            */
	{&upd7810_device::SUINB_C_xx,    3,11,11,L0|L1}, /* 33: 0111 0100 0011 0011 xxxx xxxx            */
	{&upd7810_device::SUINB_D_xx,    3,11,11,L0|L1}, /* 34: 0111 0100 0011 0100 xxxx xxxx            */
	{&upd7810_device::SUINB_E_xx,    3,11,11,L0|L1}, /* 35: 0111 0100 0011 0101 xxxx xxxx            */
	{&upd7810_device::SUINB_H_xx,    3,11,11,L0|L1}, /* 36: 0111 0100 0011 0110 xxxx xxxx            */
	{&upd7810_device::SUINB_L_xx,    3,11,11,L0|L1}, /* 37: 0111 0100 0011 0111 xxxx xxxx            */
	{&upd7810_device::LTI_V_xx,      3,11,11,L0|L1}, /* 38: 0111 0100 0011 1000 xxxx xxxx            */
	{&upd7810_device::LTI_A_xx,      3,11,11,L0|L1}, /* 39: 0111 0100 0011 1001 xxxx xxxx            */
	{&upd7810_device::LTI_B_xx,      3,11,11,L0|L1}, /* 3a: 0111 0100 0011 1010 xxxx xxxx            */
	{&upd7810_device::LTI_C_xx,      3,11,11,L0|L1}, /* 3b: 0111 0100 0011 1011 xxxx xxxx            */
	{&upd7810_device::LTI_D_xx,      3,11,11,L0|L1}, /* 3c: 0111 0100 0011 1100 xxxx xxxx            */
	{&upd7810_device::LTI_E_xx,      3,11,11,L0|L1}, /* 3d: 0111 0100 0011 1101 xxxx xxxx            */
	{&upd7810_device::LTI_H_xx,      3,11,11,L0|L1}, /* 3e: 0111 0100 0011 1110 xxxx xxxx            */
	{&upd7810_device::LTI_L_xx,      3,11,11,L0|L1}, /* 3f: 0111 0100 0011 1111 xxxx xxxx            */

	{&upd7810_device::ADI_V_xx,      3,11,11,L0|L1}, /* 40: 0111 0100 0100 0000 xxxx xxxx            */
	{&upd7810_device::ADI_A_xx,      3,11,11,L0|L1}, /* 41: 0111 0100 0100 0001 xxxx xxxx            */
	{&upd7810_device::ADI_B_xx,      3,11,11,L0|L1}, /* 42: 0111 0100 0100 0010 xxxx xxxx            */
	{&upd7810_device::ADI_C_xx,      3,11,11,L0|L1}, /* 43: 0111 0100 0100 0011 xxxx xxxx            */
	{&upd7810_device::ADI_D_xx,      3,11,11,L0|L1}, /* 44: 0111 0100 0100 0100 xxxx xxxx            */
	{&upd7810_device::ADI_E_xx,      3,11,11,L0|L1}, /* 45: 0111 0100 0100 0101 xxxx xxxx            */
	{&upd7810_device::ADI_H_xx,      3,11,11,L0|L1}, /* 46: 0111 0100 0100 0110 xxxx xxxx            */
	{&upd7810_device::ADI_L_xx,      3,11,11,L0|L1}, /* 47: 0111 0100 0100 0111 xxxx xxxx            */
	{&upd7810_device::ONI_V_xx,      3,11,11,L0|L1}, /* 48: 0111 0100 0100 1000 xxxx xxxx            */
	{&upd7810_device::ONI_A_xx,      3,11,11,L0|L1}, /* 49: 0111 0100 0100 1001 xxxx xxxx            */
	{&upd7810_device::ONI_B_xx,      3,11,11,L0|L1}, /* 4a: 0111 0100 0100 1010 xxxx xxxx            */
	{&upd7810_device::ONI_C_xx,      3,11,11,L0|L1}, /* 4b: 0111 0100 0100 1011 xxxx xxxx            */
	{&upd7810_device::ONI_D_xx,      3,11,11,L0|L1}, /* 4c: 0111 0100 0100 1100 xxxx xxxx            */
	{&upd7810_device::ONI_E_xx,      3,11,11,L0|L1}, /* 4d: 0111 0100 0100 1101 xxxx xxxx            */
	{&upd7810_device::ONI_H_xx,      3,11,11,L0|L1}, /* 4e: 0111 0100 0100 1110 xxxx xxxx            */
	{&upd7810_device::ONI_L_xx,      3,11,11,L0|L1}, /* 4f: 0111 0100 0100 1111 xxxx xxxx            */

	{&upd7810_device::ACI_V_xx,      3,11,11,L0|L1}, /* 50: 0111 0100 0101 0000 xxxx xxxx            */
	{&upd7810_device::ACI_A_xx,      3,11,11,L0|L1}, /* 51: 0111 0100 0101 0001 xxxx xxxx            */
	{&upd7810_device::ACI_B_xx,      3,11,11,L0|L1}, /* 52: 0111 0100 0101 0010 xxxx xxxx            */
	{&upd7810_device::ACI_C_xx,      3,11,11,L0|L1}, /* 53: 0111 0100 0101 0011 xxxx xxxx            */
	{&upd7810_device::ACI_D_xx,      3,11,11,L0|L1}, /* 54: 0111 0100 0101 0100 xxxx xxxx            */
	{&upd7810_device::ACI_E_xx,      3,11,11,L0|L1}, /* 55: 0111 0100 0101 0101 xxxx xxxx            */
	{&upd7810_device::ACI_H_xx,      3,11,11,L0|L1}, /* 56: 0111 0100 0101 0110 xxxx xxxx            */
	{&upd7810_device::ACI_L_xx,      3,11,11,L0|L1}, /* 57: 0111 0100 0101 0111 xxxx xxxx            */
	{&upd7810_device::OFFI_V_xx,     3,11,11,L0|L1}, /* 58: 0111 0100 0101 1000 xxxx xxxx            */
	{&upd7810_device::OFFI_A_xx,     3,11,11,L0|L1}, /* 59: 0111 0100 0101 1001 xxxx xxxx            */
	{&upd7810_device::OFFI_B_xx,     3,11,11,L0|L1}, /* 5a: 0111 0100 0101 1010 xxxx xxxx            */
	{&upd7810_device::OFFI_C_xx,     3,11,11,L0|L1}, /* 5b: 0111 0100 0101 1011 xxxx xxxx            */
	{&upd7810_device::OFFI_D_xx,     3,11,11,L0|L1}, /* 5c: 0111 0100 0101 1100 xxxx xxxx            */
	{&upd7810_device::OFFI_E_xx,     3,11,11,L0|L1}, /* 5d: 0111 0100 0101 1101 xxxx xxxx            */
	{&upd7810_device::OFFI_H_xx,     3,11,11,L0|L1}, /* 5e: 0111 0100 0101 1110 xxxx xxxx            */
	{&upd7810_device::OFFI_L_xx,     3,11,11,L0|L1}, /* 5f: 0111 0100 0101 1111 xxxx xxxx            */

	{&upd7810_device::SUI_V_xx,      3,11,11,L0|L1}, /* 60: 0111 0100 0110 0000 xxxx xxxx            */
	{&upd7810_device::SUI_A_xx,      3,11,11,L0|L1}, /* 61: 0111 0100 0110 0001 xxxx xxxx            */
	{&upd7810_device::SUI_B_xx,      3,11,11,L0|L1}, /* 62: 0111 0100 0110 0010 xxxx xxxx            */
	{&upd7810_device::SUI_C_xx,      3,11,11,L0|L1}, /* 63: 0111 0100 0110 0011 xxxx xxxx            */
	{&upd7810_device::SUI_D_xx,      3,11,11,L0|L1}, /* 64: 0111 0100 0110 0100 xxxx xxxx            */
	{&upd7810_device::SUI_E_xx,      3,11,11,L0|L1}, /* 65: 0111 0100 0110 0101 xxxx xxxx            */
	{&upd7810_device::SUI_H_xx,      3,11,11,L0|L1}, /* 66: 0111 0100 0110 0110 xxxx xxxx            */
	{&upd7810_device::SUI_L_xx,      3,11,11,L0|L1}, /* 67: 0111 0100 0110 0111 xxxx xxxx            */
	{&upd7810_device::NEI_V_xx,      3,11,11,L0|L1}, /* 68: 0111 0100 0110 1000 xxxx xxxx            */
	{&upd7810_device::NEI_A_xx,      3,11,11,L0|L1}, /* 69: 0111 0100 0110 1001 xxxx xxxx            */
	{&upd7810_device::NEI_B_xx,      3,11,11,L0|L1}, /* 6a: 0111 0100 0110 1010 xxxx xxxx            */
	{&upd7810_device::NEI_C_xx,      3,11,11,L0|L1}, /* 6b: 0111 0100 0110 1011 xxxx xxxx            */
	{&upd7810_device::NEI_D_xx,      3,11,11,L0|L1}, /* 6c: 0111 0100 0110 1100 xxxx xxxx            */
	{&upd7810_device::NEI_E_xx,      3,11,11,L0|L1}, /* 6d: 0111 0100 0110 1101 xxxx xxxx            */
	{&upd7810_device::NEI_H_xx,      3,11,11,L0|L1}, /* 6e: 0111 0100 0110 1110 xxxx xxxx            */
	{&upd7810_device::NEI_L_xx,      3,11,11,L0|L1}, /* 6f: 0111 0100 0110 1111 xxxx xxxx            */

	{&upd7810_device::SBI_V_xx,      3,11,11,L0|L1}, /* 70: 0111 0100 0111 0000 xxxx xxxx            */
	{&upd7810_device::SBI_A_xx,      3,11,11,L0|L1}, /* 71: 0111 0100 0111 0001 xxxx xxxx            */
	{&upd7810_device::SBI_B_xx,      3,11,11,L0|L1}, /* 72: 0111 0100 0111 0010 xxxx xxxx            */
	{&upd7810_device::SBI_C_xx,      3,11,11,L0|L1}, /* 73: 0111 0100 0111 0011 xxxx xxxx            */
	{&upd7810_device::SBI_D_xx,      3,11,11,L0|L1}, /* 74: 0111 0100 0111 0100 xxxx xxxx            */
	{&upd7810_device::SBI_E_xx,      3,11,11,L0|L1}, /* 75: 0111 0100 0111 0101 xxxx xxxx            */
	{&upd7810_device::SBI_H_xx,      3,11,11,L0|L1}, /* 76: 0111 0100 0111 0110 xxxx xxxx            */
	{&upd7810_device::SBI_L_xx,      3,11,11,L0|L1}, /* 77: 0111 0100 0111 0111 xxxx xxxx            */
	{&upd7810_device::EQI_V_xx,      3,11,11,L0|L1}, /* 78: 0111 0100 0111 1000 xxxx xxxx            */
	{&upd7810_device::EQI_A_xx,      3,11,11,L0|L1}, /* 79: 0111 0100 0111 1001 xxxx xxxx            */
	{&upd7810_device::EQI_B_xx,      3,11,11,L0|L1}, /* 7a: 0111 0100 0111 1010 xxxx xxxx            */
	{&upd7810_device::EQI_C_xx,      3,11,11,L0|L1}, /* 7b: 0111 0100 0111 1011 xxxx xxxx            */
	{&upd7810_device::EQI_D_xx,      3,11,11,L0|L1}, /* 7c: 0111 0100 0111 1100 xxxx xxxx            */
	{&upd7810_device::EQI_E_xx,      3,11,11,L0|L1}, /* 7d: 0111 0100 0111 1101 xxxx xxxx            */
	{&upd7810_device::EQI_H_xx,      3,11,11,L0|L1}, /* 7e: 0111 0100 0111 1110 xxxx xxxx            */
	{&upd7810_device::EQI_L_xx,      3,11,11,L0|L1}, /* 7f: 0111 0100 0111 1111 xxxx xxxx            */

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 80: 0111 0100 1000 0000                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 81: 0111 0100 1000 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 82: 0111 0100 1000 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 83: 0111 0100 1000 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 84: 0111 0100 1000 0100                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 85: 0111 0100 1000 0101                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 86: 0111 0100 1000 0110                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 87: 0111 0100 1000 0111                      */
	{&upd7810_device::ANAW_wa,       3,14,11,L0|L1}, /* 88: 0111 0100 1000 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 89: 0111 0100 1000 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8a: 0111 0100 1000 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8b: 0111 0100 1000 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 8c: 0111 0100 1000 1100                      */
	{&upd7810_device::DAN_EA_BC,     2,11, 8,L0|L1}, /* 8d: 0111 0100 1000 1101                      */
	{&upd7810_device::DAN_EA_DE,     2,11, 8,L0|L1}, /* 8e: 0111 0100 1000 1110                      */
	{&upd7810_device::DAN_EA_HL,     2,11, 8,L0|L1}, /* 8f: 0111 0100 1000 1111                      */

	{&upd7810_device::XRAW_wa,       3,14,11,L0|L1}, /* 90: 0111 0100 1001 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 91: 0111 0100 1001 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 92: 0111 0100 1001 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 93: 0111 0100 1001 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 94: 0111 0100 1001 0100                      */
	{&upd7810_device::DXR_EA_BC,     2,11, 8,L0|L1}, /* 95: 0111 0100 1001 0101                      */
	{&upd7810_device::DXR_EA_DE,     2,11, 8,L0|L1}, /* 96: 0111 0100 1001 0110                      */
	{&upd7810_device::DXR_EA_HL,     2,11, 8,L0|L1}, /* 97: 0111 0100 1001 0111                      */
	{&upd7810_device::ORAW_wa,       3,14,11,L0|L1}, /* 98: 0111 0100 1001 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 99: 0111 0100 1001 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9a: 0111 0100 1001 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9b: 0111 0100 1001 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* 9c: 0111 0100 1001 1100                      */
	{&upd7810_device::DOR_EA_BC,     2,11, 8,L0|L1}, /* 9d: 0111 0100 1001 1101                      */
	{&upd7810_device::DOR_EA_DE,     2,11, 8,L0|L1}, /* 9e: 0111 0100 1001 1110                      */
	{&upd7810_device::DOR_EA_HL,     2,11, 8,L0|L1}, /* 9f: 0111 0100 1001 1111                      */

	{&upd7810_device::ADDNCW_wa,     3,14,11,L0|L1}, /* a0: 0111 0100 1010 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a1: 0111 0100 1010 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a2: 0111 0100 1010 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a3: 0111 0100 1010 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a4: 0111 0100 1010 0100                      */
	{&upd7810_device::DADDNC_EA_BC,  2,11, 8,L0|L1}, /* a5: 0111 0100 1010 0101                      */
	{&upd7810_device::DADDNC_EA_DE,  2,11, 8,L0|L1}, /* a6: 0111 0100 1010 0110                      */
	{&upd7810_device::DADDNC_EA_HL,  2,11, 8,L0|L1}, /* a7: 0111 0100 1010 0111                      */
	{&upd7810_device::GTAW_wa,       3,14,11,L0|L1}, /* a8: 0111 0100 1010 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* a9: 0111 0100 1010 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* aa: 0111 0100 1010 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ab: 0111 0100 1010 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ac: 0111 0100 1010 1100                      */
	{&upd7810_device::DGT_EA_BC,     2,11, 8,L0|L1}, /* ad: 0111 0100 1010 1101                      */
	{&upd7810_device::DGT_EA_DE,     2,11, 8,L0|L1}, /* ae: 0111 0100 1010 1110                      */
	{&upd7810_device::DGT_EA_HL,     2,11, 8,L0|L1}, /* af: 0111 0100 1010 1111                      */

	{&upd7810_device::SUBNBW_wa,     3,14,11,L0|L1}, /* b0: 0111 0100 1011 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b1: 0111 0100 1011 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b2: 0111 0100 1011 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b3: 0111 0100 1011 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b4: 0111 0100 1011 0100                      */
	{&upd7810_device::DSUBNB_EA_BC,  2,11, 8,L0|L1}, /* b5: 0111 0100 1011 0101                      */
	{&upd7810_device::DSUBNB_EA_DE,  2,11, 8,L0|L1}, /* b6: 0111 0100 1011 0110                      */
	{&upd7810_device::DSUBNB_EA_HL,  2,11, 8,L0|L1}, /* b7: 0111 0100 1011 0111                      */
	{&upd7810_device::LTAW_wa,       3,14,11,L0|L1}, /* b8: 0111 0100 1011 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* b9: 0111 0100 1011 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ba: 0111 0100 1011 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bb: 0111 0100 1011 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* bc: 0111 0100 1011 1100                      */
	{&upd7810_device::DLT_EA_BC,     2,11, 8,L0|L1}, /* bd: 0111 0100 1011 1101                      */
	{&upd7810_device::DLT_EA_DE,     2,11, 8,L0|L1}, /* be: 0111 0100 1011 1110                      */
	{&upd7810_device::DLT_EA_HL,     2,11, 8,L0|L1}, /* bf: 0111 0100 1011 1111                      */

	{&upd7810_device::ADDW_wa,       3,14,11,L0|L1}, /* c0: 0111 0100 1100 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c1: 0111 0100 1100 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c2: 0111 0100 1100 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c3: 0111 0100 1100 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c4: 0111 0100 1100 0100                      */
	{&upd7810_device::DADD_EA_BC,    2,11, 8,L0|L1}, /* c5: 0111 0100 1100 0101                      */
	{&upd7810_device::DADD_EA_DE,    2,11, 8,L0|L1}, /* c6: 0111 0100 1100 0110                      */
	{&upd7810_device::DADD_EA_HL,    2,11, 8,L0|L1}, /* c7: 0111 0100 1100 0111                      */
	{&upd7810_device::ONAW_wa,       3,14,11,L0|L1}, /* c8: 0111 0100 1100 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* c9: 0111 0100 1100 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ca: 0111 0100 1100 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cb: 0111 0100 1100 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* cc: 0111 0100 1100 1100                      */
	{&upd7810_device::DON_EA_BC,     2,11, 8,L0|L1}, /* cd: 0111 0100 1100 1101                      */
	{&upd7810_device::DON_EA_DE,     2,11, 8,L0|L1}, /* ce: 0111 0100 1100 1110                      */
	{&upd7810_device::DON_EA_HL,     2,11, 8,L0|L1}, /* cf: 0111 0100 1100 1111                      */

	{&upd7810_device::ADCW_wa,       3,14,11,L0|L1}, /* d0: 0111 0100 1101 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d1: 0111 0100 1101 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d2: 0111 0100 1101 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d3: 0111 0100 1101 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d4: 0111 0100 1101 0100                      */
	{&upd7810_device::DADC_EA_BC,    2,11, 8,L0|L1}, /* d5: 0111 0100 1101 0101                      */
	{&upd7810_device::DADC_EA_DE,    2,11, 8,L0|L1}, /* d6: 0111 0100 1101 0110                      */
	{&upd7810_device::DADC_EA_HL,    2,11, 8,L0|L1}, /* d7: 0111 0100 1101 0111                      */
	{&upd7810_device::OFFAW_wa,      3,14,11,L0|L1}, /* d8: 0111 0100 1101 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* d9: 0111 0100 1101 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* da: 0111 0100 1101 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* db: 0111 0100 1101 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* dc: 0111 0100 1101 1100                      */
	{&upd7810_device::DOFF_EA_BC,    2,11, 8,L0|L1}, /* dd: 0111 0100 1101 1101                      */
	{&upd7810_device::DOFF_EA_DE,    2,11, 8,L0|L1}, /* de: 0111 0100 1101 1110                      */
	{&upd7810_device::DOFF_EA_HL,    2,11, 8,L0|L1}, /* df: 0111 0100 1101 1111                      */

	{&upd7810_device::SUBW_wa,       3,14,11,L0|L1}, /* e0: 0111 0100 1110 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e1: 0111 0100 1110 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e2: 0111 0100 1110 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e3: 0111 0100 1110 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e4: 0111 0100 1110 0100                      */
	{&upd7810_device::DSUB_EA_BC,    2,11, 8,L0|L1}, /* e5: 0111 0100 1110 0101                      */
	{&upd7810_device::DSUB_EA_DE,    2,11, 8,L0|L1}, /* e6: 0111 0100 1110 0110                      */
	{&upd7810_device::DSUB_EA_HL,    2,11, 8,L0|L1}, /* e7: 0111 0100 1110 0111                      */
	{&upd7810_device::NEAW_wa,       3,14,11,L0|L1}, /* e8: 0111 0100 1110 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* e9: 0111 0100 1110 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ea: 0111 0100 1110 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* eb: 0111 0100 1110 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* ec: 0111 0100 1110 1100                      */
	{&upd7810_device::DNE_EA_BC,     2,11, 8,L0|L1}, /* ed: 0111 0100 1110 1101                      */
	{&upd7810_device::DNE_EA_DE,     2,11, 8,L0|L1}, /* ee: 0111 0100 1110 1110                      */
	{&upd7810_device::DNE_EA_HL,     2,11, 8,L0|L1}, /* ef: 0111 0100 1110 1111                      */

	{&upd7810_device::SBBW_wa,       3,14,11,L0|L1}, /* f0: 0111 0100 1111 0000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f1: 0111 0100 1111 0001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f2: 0111 0100 1111 0010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f3: 0111 0100 1111 0011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f4: 0111 0100 1111 0100                      */
	{&upd7810_device::DSBB_EA_BC,    2,11, 8,L0|L1}, /* f5: 0111 0100 1111 0101                      */
	{&upd7810_device::DSBB_EA_DE,    2,11, 8,L0|L1}, /* f6: 0111 0100 1111 0110                      */
	{&upd7810_device::DSBB_EA_HL,    2,11, 8,L0|L1}, /* f7: 0111 0100 1111 0111                      */
	{&upd7810_device::EQAW_wa,       3,14,11,L0|L1}, /* f8: 0111 0100 1111 1000 oooo oooo            */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* f9: 0111 0100 1111 1001                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fa: 0111 0100 1111 1010                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fb: 0111 0100 1111 1011                      */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, /* fc: 0111 0100 1111 1100                      */
	{&upd7810_device::DEQ_EA_BC,     2,11, 8,L0|L1}, /* fd: 0111 0100 1111 1101                      */
	{&upd7810_device::DEQ_EA_DE,     2,11, 8,L0|L1}, /* fe: 0111 0100 1111 1110                      */
	{&upd7810_device::DEQ_EA_HL,     2,11, 8,L0|L1}  /* ff: 0111 0100 1111 1111                      */
};

/* main opcodes */
const struct upd7810_device::opcode_s upd7810_device::s_opXX_7810[256] =
{
	{&upd7810_device::NOP,           1, 4, 4,L0|L1}, /* 00: 0000 0000                                */
	{&upd7810_device::LDAW_wa,       2,10, 7,L0|L1}, /* 01: 0000 0001 oooo oooo                      */
	{&upd7810_device::INX_SP,        1, 7, 4,L0|L1}, /* 02: 0000 0010                                */
	{&upd7810_device::DCX_SP,        1, 7, 4,L0|L1}, /* 03: 0000 0011                                */
	{&upd7810_device::LXI_S_w,       3,10,10,L0|L1}, /* 04: 0000 0100 llll llll hhhh hhhh            */
	{&upd7810_device::ANIW_wa_xx,    3,19,10,L0|L1}, /* 05: 0000 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, /* 06:                                          */
	{&upd7810_device::ANI_A_xx,      2, 7, 7,L0|L1}, /* 07: 0000 0111 xxxx xxxx                      */
	{&upd7810_device::MOV_A_EAH,     1, 4, 4,L0|L1}, /* 08: 0000 1000                                */
	{&upd7810_device::MOV_A_EAL,     1, 4, 4,L0|L1}, /* 09: 0000 1001                                */
	{&upd7810_device::MOV_A_B,       1, 4, 4,L0|L1}, /* 0a: 0000 1010                                */
	{&upd7810_device::MOV_A_C,       1, 4, 4,L0|L1}, /* 0b: 0000 1011                                */
	{&upd7810_device::MOV_A_D,       1, 4, 4,L0|L1}, /* 0c: 0000 1100                                */
	{&upd7810_device::MOV_A_E,       1, 4, 4,L0|L1}, /* 0d: 0000 1101                                */
	{&upd7810_device::MOV_A_H,       1, 4, 4,L0|L1}, /* 0e: 0000 1110                                */
	{&upd7810_device::MOV_A_L,       1, 4, 4,L0|L1}, /* 0f: 0000 1111                                */

	{&upd7810_device::EXA,           1, 4, 4,L0|L1}, /* 10: 0001 0000                                */
	{&upd7810_device::EXX,           1, 4, 4,L0|L1}, /* 11: 0001 0001                                */
	{&upd7810_device::INX_BC,        1, 7, 4,L0|L1}, /* 12: 0001 0010                                */
	{&upd7810_device::DCX_BC,        1, 7, 4,L0|L1}, /* 13: 0001 0011                                */
	{&upd7810_device::LXI_B_w,       3,10,10,L0|L1}, /* 14: 0001 0100 llll llll hhhh hhhh            */
	{&upd7810_device::ORIW_wa_xx,    3,19,10,L0|L1}, /* 15: 0001 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::XRI_A_xx,      2, 7, 7,L0|L1}, /* 16: 0001 0110 xxxx xxxx                      */
	{&upd7810_device::ORI_A_xx,      2, 7, 7,L0|L1}, /* 17: 0001 0111 xxxx xxxx                      */
	{&upd7810_device::MOV_EAH_A,     1, 4, 4,L0|L1}, /* 18: 0001 1000                                */
	{&upd7810_device::MOV_EAL_A,     1, 4, 4,L0|L1}, /* 19: 0001 1001                                */
	{&upd7810_device::MOV_B_A,       1, 4, 4,L0|L1}, /* 1a: 0001 1010                                */
	{&upd7810_device::MOV_C_A,       1, 4, 4,L0|L1}, /* 1b: 0001 1011                                */
	{&upd7810_device::MOV_D_A,       1, 4, 4,L0|L1}, /* 1c: 0001 1100                                */
	{&upd7810_device::MOV_E_A,       1, 4, 4,L0|L1}, /* 1d: 0001 1101                                */
	{&upd7810_device::MOV_H_A,       1, 4, 4,L0|L1}, /* 1e: 0001 1110                                */
	{&upd7810_device::MOV_L_A,       1, 4, 4,L0|L1}, /* 1f: 0001 1111                                */

	{&upd7810_device::INRW_wa,       2,16, 7,L0|L1}, /* 20: 0010 0000 oooo oooo                      */
	{&upd7810_device::JB,            1, 4, 4,L0|L1}, /* 21: 0010 0001                                */
	{&upd7810_device::INX_DE,        1, 7, 4,L0|L1}, /* 22: 0010 0010                                */
	{&upd7810_device::DCX_DE,        1, 7, 4,L0|L1}, /* 23: 0010 0011                                */
	{&upd7810_device::LXI_D_w,       3,10,10,L0|L1}, /* 24: 0010 0100 llll llll hhhh hhhh            */
	{&upd7810_device::GTIW_wa_xx,    3,13,10,L0|L1}, /* 25: 0010 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::ADINC_A_xx,    2, 7, 7,L0|L1}, /* 26: 0010 0110 xxxx xxxx                      */
	{&upd7810_device::GTI_A_xx,      2, 7, 7,L0|L1}, /* 27: 0010 0111 xxxx xxxx                      */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, /* 28:                                          */
	{&upd7810_device::LDAX_B,        1, 7, 4,L0|L1}, /* 29: 0010 1001                                */
	{&upd7810_device::LDAX_D,        1, 7, 4,L0|L1}, /* 2a: 0010 1010                                */
	{&upd7810_device::LDAX_H,        1, 7, 4,L0|L1}, /* 2b: 0010 1011                                */
	{&upd7810_device::LDAX_Dp,       1, 7, 4,L0|L1}, /* 2c: 0010 1100                                */
	{&upd7810_device::LDAX_Hp,       1, 7, 4,L0|L1}, /* 2d: 0010 1101                                */
	{&upd7810_device::LDAX_Dm,       1, 7, 4,L0|L1}, /* 2e: 0010 1110                                */
	{&upd7810_device::LDAX_Hm,       1, 7, 4,L0|L1}, /* 2f: 0010 1111                                */

	{&upd7810_device::DCRW_wa,       2,16, 7,L0|L1}, /* 30: 0011 0000 oooo oooo                      */
	{&upd7810_device::BLOCK,         1,13, 4,L0|L1}, /* 31: 0011 0001                                */  /* 78(c)10; timing is variable: 13*(C+1) cycles */
	{&upd7810_device::INX_HL,        1, 7, 4,L0|L1}, /* 32: 0011 0010                                */
	{&upd7810_device::DCX_HL,        1, 7, 4,L0|L1}, /* 33: 0011 0011                                */
	{&upd7810_device::LXI_H_w,       3,10,10,   L1}, /* 34: 0011 0100 llll llll hhhh hhhh            */
	{&upd7810_device::LTIW_wa_xx,    3,13,10,L0|L1}, /* 35: 0011 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::SUINB_A_xx,    2, 7, 7,L0|L1}, /* 36: 0011 0110 xxxx xxxx                      */
	{&upd7810_device::LTI_A_xx,      2, 7, 7,L0|L1}, /* 37: 0011 0111 xxxx xxxx                      */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, /* 38:                                          */
	{&upd7810_device::STAX_B,        1, 7, 4,L0|L1}, /* 39: 0011 1001                                */
	{&upd7810_device::STAX_D,        1, 7, 4,L0|L1}, /* 3a: 0011 1010                                */
	{&upd7810_device::STAX_H,        1, 7, 4,L0|L1}, /* 3b: 0011 1011                                */
	{&upd7810_device::STAX_Dp,       1, 7, 4,L0|L1}, /* 3c: 0011 1100                                */
	{&upd7810_device::STAX_Hp,       1, 7, 4,L0|L1}, /* 3d: 0011 1101                                */
	{&upd7810_device::STAX_Dm,       1, 7, 4,L0|L1}, /* 3e: 0011 1110                                */
	{&upd7810_device::STAX_Hm,       1, 7, 4,L0|L1}, /* 3f: 0011 1111                                */

	{&upd7810_device::CALL_w,        3,16,10,L0|L1}, /* 40: 0100 0000 llll llll hhhh hhhh            */
	{&upd7810_device::INR_A,         1, 4, 4,L0|L1}, /* 41: 0100 0001                                */
	{&upd7810_device::INR_B,         1, 4, 4,L0|L1}, /* 42: 0100 0010                                */
	{&upd7810_device::INR_C,         1, 4, 4,L0|L1}, /* 43: 0100 0011                                */
	{&upd7810_device::LXI_EA_s,      3,10,10,L0|L1}, /* 44: 0100 0100 llll llll hhhh hhhh            */
	{&upd7810_device::ONIW_wa_xx,    3,13,10,L0|L1}, /* 45: 0100 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::ADI_A_xx,      2, 7, 7,L0|L1}, /* 46: 0100 0110 xxxx xxxx                      */
	{&upd7810_device::ONI_A_xx,      2, 7, 7,L0|L1}, /* 47: 0100 0111 xxxx xxxx                      */
	{&upd7810_device::PRE_48,        1, 0, 0,L0|L1}, /* 48: prefix                                   */
	{&upd7810_device::MVIX_BC_xx,    2,10, 7,L0|L1}, /* 49: 0100 1001 xxxx xxxx                      */
	{&upd7810_device::MVIX_DE_xx,    2,10, 7,L0|L1}, /* 4a: 0100 1010 xxxx xxxx                      */
	{&upd7810_device::MVIX_HL_xx,    2,10, 7,L0|L1}, /* 4b: 0100 1011 xxxx xxxx                      */
	{&upd7810_device::PRE_4C,        1, 0, 0,L0|L1}, /* 4c: prefix                                   */
	{&upd7810_device::PRE_4D,        1, 0, 0,L0|L1}, /* 4d: prefix                                   */
	{&upd7810_device::JRE,           2,10, 7,L0|L1}, /* 4e: 0100 111d dddd dddd                      */
	{&upd7810_device::JRE,           2,10, 7,L0|L1}, /* 4f: 0100 111d dddd dddd                      */

	{&upd7810_device::EXH,           1, 4, 4,L0|L1}, /* 50: 0101 0000                                */  /* 7810 */
	{&upd7810_device::DCR_A,         1, 4, 4,L0|L1}, /* 51: 0101 0001                                */
	{&upd7810_device::DCR_B,         1, 4, 4,L0|L1}, /* 52: 0101 0010                                */
	{&upd7810_device::DCR_C,         1, 4, 4,L0|L1}, /* 53: 0101 0011                                */
	{&upd7810_device::JMP_w,         3,10,10,L0|L1}, /* 54: 0101 0100 llll llll hhhh hhhh            */
	{&upd7810_device::OFFIW_wa_xx,   3,13,10,L0|L1}, /* 55: 0101 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::ACI_A_xx,      2, 7, 7,L0|L1}, /* 56: 0101 0110 xxxx xxxx                      */
	{&upd7810_device::OFFI_A_xx,     2, 7, 7,L0|L1}, /* 57: 0101 0111 xxxx xxxx                      */
	{&upd7810_device::BIT_0_wa,      2,10, 7,L0|L1}, /* 58: 0101 1000 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_1_wa,      2,10, 7,L0|L1}, /* 59: 0101 1001 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_2_wa,      2,10, 7,L0|L1}, /* 5a: 0101 1010 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_3_wa,      2,10, 7,L0|L1}, /* 5b: 0101 1011 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_4_wa,      2,10, 7,L0|L1}, /* 5c: 0101 1100 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_5_wa,      2,10, 7,L0|L1}, /* 5d: 0101 1101 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_6_wa,      2,10, 7,L0|L1}, /* 5e: 0101 1110 oooo oooo                      */  /* 7810 */
	{&upd7810_device::BIT_7_wa,      2,10, 7,L0|L1}, /* 5f: 0101 1111 oooo oooo                      */  /* 7810 */

	{&upd7810_device::PRE_60,        1, 0, 0,L0|L1}, /* 60: prefix                                   */
	{&upd7810_device::DAA,           1, 4, 4,L0|L1}, /* 61: 0110 0001                                */
	{&upd7810_device::RETI,          1,13, 4,L0|L1}, /* 62: 0110 0010                                */
	{&upd7810_device::STAW_wa,       2,10, 7,L0|L1}, /* 63: 0110 0011 oooo oooo                      */
	{&upd7810_device::PRE_64,        1, 0, 0,L0|L1}, /* 64: prefix                                   */
	{&upd7810_device::NEIW_wa_xx,    3,13,10,L0|L1}, /* 65: 0110 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::SUI_A_xx,      2, 7, 7,L0|L1}, /* 66: 0110 0110 xxxx xxxx                      */
	{&upd7810_device::NEI_A_xx,      2, 7, 7,L0|L1}, /* 67: 0110 0111 xxxx xxxx                      */
	{&upd7810_device::MVI_V_xx,      2, 7, 7,L0|L1}, /* 68: 0110 1000 xxxx xxxx                      */
	{&upd7810_device::MVI_A_xx,      2, 7, 7,L0   }, /* 69: 0110 1001 xxxx xxxx                      */
	{&upd7810_device::MVI_B_xx,      2, 7, 7,L0|L1}, /* 6a: 0110 1010 xxxx xxxx                      */
	{&upd7810_device::MVI_C_xx,      2, 7, 7,L0|L1}, /* 6b: 0110 1011 xxxx xxxx                      */
	{&upd7810_device::MVI_D_xx,      2, 7, 7,L0|L1}, /* 6c: 0110 1100 xxxx xxxx                      */
	{&upd7810_device::MVI_E_xx,      2, 7, 7,L0|L1}, /* 6d: 0110 1101 xxxx xxxx                      */
	{&upd7810_device::MVI_H_xx,      2, 7, 7,L0|L1}, /* 6e: 0110 1110 xxxx xxxx                      */
	{&upd7810_device::MVI_L_xx,      2, 7, 7,   L1}, /* 6f: 0110 1111 xxxx xxxx                      */

	{&upd7810_device::PRE_70,        1, 0, 0,L0|L1}, /* 70: prefix                                   */
	{&upd7810_device::MVIW_wa_xx,    3,13,10,L0|L1}, /* 71: 0111 0001 oooo oooo xxxx xxxx            */
	{&upd7810_device::SOFTI,         1,16, 4,L0|L1}, /* 72: 0111 0010                                */
	{&upd7810_device::illegal,       1, 0, 0,L0|L1}, /* 73:                                          */
	{&upd7810_device::PRE_74,        1, 0, 0,L0|L1}, /* 74: prefix                                   */
	{&upd7810_device::EQIW_wa_xx,    3,13,10,L0|L1}, /* 75: 0111 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::SBI_A_xx,      2, 7, 7,L0|L1}, /* 76: 0111 0110 xxxx xxxx                      */
	{&upd7810_device::EQI_A_xx,      2, 7, 7,L0|L1}, /* 77: 0111 0111 xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 78: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 79: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7a: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7b: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7c: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7d: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7e: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7f: 0111 1xxx xxxx xxxx                      */

	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 80: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 81: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 82: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 83: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 84: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 85: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 86: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 87: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 88: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 89: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8a: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8b: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8c: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8d: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8e: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8f: 100x xxxx                                */

	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 90: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 91: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 92: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 93: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 94: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 95: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 96: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 97: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 98: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 99: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9a: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9b: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9c: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9d: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9e: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9f: 100x xxxx                                */

	{&upd7810_device::POP_VA,        1,10, 4,L0|L1}, /* a0: 1010 0000                                */
	{&upd7810_device::POP_BC,        1,10, 4,L0|L1}, /* a1: 1010 0001                                */
	{&upd7810_device::POP_DE,        1,10, 4,L0|L1}, /* a2: 1010 0010                                */
	{&upd7810_device::POP_HL,        1,10, 4,L0|L1}, /* a3: 1010 0011                                */
	{&upd7810_device::POP_EA,        1,10, 4,L0|L1}, /* a4: 1010 0100                                */
	{&upd7810_device::DMOV_EA_BC,    1, 4, 4,L0|L1}, /* a5: 1010 0101                                */
	{&upd7810_device::DMOV_EA_DE,    1, 4, 4,L0|L1}, /* a6: 1010 0110                                */
	{&upd7810_device::DMOV_EA_HL,    1, 4, 4,L0|L1}, /* a7: 1010 0111                                */
	{&upd7810_device::INX_EA,        1, 7, 4,L0|L1}, /* a8: 1010 1000                                */
	{&upd7810_device::DCX_EA,        1, 7, 4,L0|L1}, /* a9: 1010 1001                                */
	{&upd7810_device::EI,            1, 4, 4,L0|L1}, /* aa: 1010 1010                                */
	{&upd7810_device::LDAX_D_xx,     2,13, 7,L0|L1}, /* ab: 1010 1011 dddd dddd                      */
	{&upd7810_device::LDAX_H_A,      1,13, 7,L0|L1}, /* ac: 1010 1100                                */
	{&upd7810_device::LDAX_H_B,      1,13, 7,L0|L1}, /* ad: 1010 1101                                */
	{&upd7810_device::LDAX_H_EA,     1,13, 7,L0|L1}, /* ae: 1010 1110                                */
	{&upd7810_device::LDAX_H_xx,     2,13, 7,L0|L1}, /* af: 1010 1111 dddd dddd                      */

	{&upd7810_device::PUSH_VA,       1,13, 4,L0|L1}, /* b0: 1011 0000                                */
	{&upd7810_device::PUSH_BC,       1,13, 4,L0|L1}, /* b1: 1011 0001                                */
	{&upd7810_device::PUSH_DE,       1,13, 4,L0|L1}, /* b2: 1011 0010                                */
	{&upd7810_device::PUSH_HL,       1,13, 4,L0|L1}, /* b3: 1011 0011                                */
	{&upd7810_device::PUSH_EA,       1,13, 4,L0|L1}, /* b4: 1011 0100                                */
	{&upd7810_device::DMOV_BC_EA,    1, 4, 4,L0|L1}, /* b5: 1011 0101                                */
	{&upd7810_device::DMOV_DE_EA,    1, 4, 4,L0|L1}, /* b6: 1011 0110                                */
	{&upd7810_device::DMOV_HL_EA,    1, 4, 4,L0|L1}, /* b7: 1011 0111                                */
	{&upd7810_device::RET,           1,10, 4,L0|L1}, /* b8: 1011 1000                                */
	{&upd7810_device::RETS,          1,10, 4,L0|L1}, /* b9: 1011 1001                                */
	{&upd7810_device::DI,            1, 4, 4,L0|L1}, /* ba: 1011 1010                                */
	{&upd7810_device::STAX_D_xx,     2,13, 7,L0|L1}, /* bb: 1011 1011 dddd dddd                      */
	{&upd7810_device::STAX_H_A,      1,13, 7,L0|L1}, /* bc: 1011 1100                                */
	{&upd7810_device::STAX_H_B,      1,13, 7,L0|L1}, /* bd: 1011 1101                                */
	{&upd7810_device::STAX_H_EA,     1,13, 7,L0|L1}, /* be: 1011 1110                                */
	{&upd7810_device::STAX_H_xx,     2,13, 7,L0|L1}, /* bf: 1011 1111 dddd dddd                      */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c0: 1100 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c1: 1100 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c2: 1100 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c3: 1100 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c4: 1100 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c5: 1100 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c6: 1100 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c7: 1100 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c8: 1100 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c9: 1100 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ca: 1100 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cb: 1100 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cc: 1100 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cd: 1100 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ce: 1100 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cf: 1100 1111                                */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d0: 1101 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d1: 1101 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d2: 1101 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d3: 1101 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d4: 1101 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d5: 1101 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d6: 1101 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d7: 1101 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d8: 1101 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d9: 1101 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* da: 1101 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* db: 1101 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* dc: 1101 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* dd: 1101 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* de: 1101 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* df: 1101 1111                                */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e0: 1110 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e1: 1110 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e2: 1110 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e3: 1110 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e4: 1110 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e5: 1110 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e6: 1110 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e7: 1110 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e8: 1110 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e9: 1110 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ea: 1110 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* eb: 1110 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ec: 1110 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ed: 1110 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ee: 1110 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ef: 1110 1111                                */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f0: 1111 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f1: 1111 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f2: 1111 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f3: 1111 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f4: 1111 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f5: 1111 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f6: 1111 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f7: 1111 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f8: 1111 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f9: 1111 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fa: 1111 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fb: 1111 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fc: 1111 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fd: 1111 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fe: 1111 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}  /* ff: 1111 1111                                */
};

/* 7807 main opcodes */
const struct upd7810_device::opcode_s upd7810_device::s_opXX_7807[256] =
{
	{&upd7810_device::NOP,           1, 4, 4,L0|L1}, /* 00: 0000 0000                                */
	{&upd7810_device::LDAW_wa,       2,10, 7,L0|L1}, /* 01: 0000 0001 oooo oooo                      */
	{&upd7810_device::INX_SP,        1, 7, 4,L0|L1}, /* 02: 0000 0010                                */
	{&upd7810_device::DCX_SP,        1, 7, 4,L0|L1}, /* 03: 0000 0011                                */
	{&upd7810_device::LXI_S_w,       3,10,10,L0|L1}, /* 04: 0000 0100 llll llll hhhh hhhh            */
	{&upd7810_device::ANIW_wa_xx,    3,19,10,L0|L1}, /* 05: 0000 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, /* 06:                                          */
	{&upd7810_device::ANI_A_xx,      2, 7, 7,L0|L1}, /* 07: 0000 0111 xxxx xxxx                      */
	{&upd7810_device::MOV_A_EAH,     1, 4, 4,L0|L1}, /* 08: 0000 1000                                */
	{&upd7810_device::MOV_A_EAL,     1, 4, 4,L0|L1}, /* 09: 0000 1001                                */
	{&upd7810_device::MOV_A_B,       1, 4, 4,L0|L1}, /* 0a: 0000 1010                                */
	{&upd7810_device::MOV_A_C,       1, 4, 4,L0|L1}, /* 0b: 0000 1011                                */
	{&upd7810_device::MOV_A_D,       1, 4, 4,L0|L1}, /* 0c: 0000 1100                                */
	{&upd7810_device::MOV_A_E,       1, 4, 4,L0|L1}, /* 0d: 0000 1101                                */
	{&upd7810_device::MOV_A_H,       1, 4, 4,L0|L1}, /* 0e: 0000 1110                                */
	{&upd7810_device::MOV_A_L,       1, 4, 4,L0|L1}, /* 0f: 0000 1111                                */

	{&upd7810_device::illegal,       1,13, 4,L0|L1}, /* 10: 0001 0000                                */  /* 7807 */
	{&upd7810_device::illegal,       1,13, 4,L0|L1}, /* 11: 0001 0001                                */  /* 7807 */
	{&upd7810_device::INX_BC,        1, 7, 4,L0|L1}, /* 12: 0001 0010                                */
	{&upd7810_device::DCX_BC,        1, 7, 4,L0|L1}, /* 13: 0001 0011                                */
	{&upd7810_device::LXI_B_w,       3,10,10,L0|L1}, /* 14: 0001 0100 llll llll hhhh hhhh            */
	{&upd7810_device::ORIW_wa_xx,    3,19,10,L0|L1}, /* 15: 0001 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::XRI_A_xx,      2, 7, 7,L0|L1}, /* 16: 0001 0110 xxxx xxxx                      */
	{&upd7810_device::ORI_A_xx,      2, 7, 7,L0|L1}, /* 17: 0001 0111 xxxx xxxx                      */
	{&upd7810_device::MOV_EAH_A,     1, 4, 4,L0|L1}, /* 18: 0001 1000                                */
	{&upd7810_device::MOV_EAL_A,     1, 4, 4,L0|L1}, /* 19: 0001 1001                                */
	{&upd7810_device::MOV_B_A,       1, 4, 4,L0|L1}, /* 1a: 0001 1010                                */
	{&upd7810_device::MOV_C_A,       1, 4, 4,L0|L1}, /* 1b: 0001 1011                                */
	{&upd7810_device::MOV_D_A,       1, 4, 4,L0|L1}, /* 1c: 0001 1100                                */
	{&upd7810_device::MOV_E_A,       1, 4, 4,L0|L1}, /* 1d: 0001 1101                                */
	{&upd7810_device::MOV_H_A,       1, 4, 4,L0|L1}, /* 1e: 0001 1110                                */
	{&upd7810_device::MOV_L_A,       1, 4, 4,L0|L1}, /* 1f: 0001 1111                                */

	{&upd7810_device::INRW_wa,       2,16, 7,L0|L1}, /* 20: 0010 0000 oooo oooo                      */
	{&upd7810_device::JB,            1, 4, 4,L0|L1}, /* 21: 0010 0001                                */
	{&upd7810_device::INX_DE,        1, 7, 4,L0|L1}, /* 22: 0010 0010                                */
	{&upd7810_device::DCX_DE,        1, 7, 4,L0|L1}, /* 23: 0010 0011                                */
	{&upd7810_device::LXI_D_w,       3,10,10,L0|L1}, /* 24: 0010 0100 llll llll hhhh hhhh            */
	{&upd7810_device::GTIW_wa_xx,    3,13,10,L0|L1}, /* 25: 0010 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::ADINC_A_xx,    2, 7, 7,L0|L1}, /* 26: 0010 0110 xxxx xxxx                      */
	{&upd7810_device::GTI_A_xx,      2, 7, 7,L0|L1}, /* 27: 0010 0111 xxxx xxxx                      */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, /* 28:                                          */
	{&upd7810_device::LDAX_B,        1, 7, 4,L0|L1}, /* 29: 0010 1001                                */
	{&upd7810_device::LDAX_D,        1, 7, 4,L0|L1}, /* 2a: 0010 1010                                */
	{&upd7810_device::LDAX_H,        1, 7, 4,L0|L1}, /* 2b: 0010 1011                                */
	{&upd7810_device::LDAX_Dp,       1, 7, 4,L0|L1}, /* 2c: 0010 1100                                */
	{&upd7810_device::LDAX_Hp,       1, 7, 4,L0|L1}, /* 2d: 0010 1101                                */
	{&upd7810_device::LDAX_Dm,       1, 7, 4,L0|L1}, /* 2e: 0010 1110                                */
	{&upd7810_device::LDAX_Hm,       1, 7, 4,L0|L1}, /* 2f: 0010 1111                                */

	{&upd7810_device::DCRW_wa,       2,16, 7,L0|L1}, /* 30: 0011 0000 oooo oooo                      */
	{&upd7810_device::illegal,       2, 8, 8,L0|L1}, /* 31: 0011 0001 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::INX_HL,        1, 7, 4,L0|L1}, /* 32: 0011 0010                                */
	{&upd7810_device::DCX_HL,        1, 7, 4,L0|L1}, /* 33: 0011 0011                                */
	{&upd7810_device::LXI_H_w,       3,10,10,   L1}, /* 34: 0011 0100 llll llll hhhh hhhh            */
	{&upd7810_device::LTIW_wa_xx,    3,13,10,L0|L1}, /* 35: 0011 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::SUINB_A_xx,    2, 7, 7,L0|L1}, /* 36: 0011 0110 xxxx xxxx                      */
	{&upd7810_device::LTI_A_xx,      2, 7, 7,L0|L1}, /* 37: 0011 0111 xxxx xxxx                      */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, /* 38:                                          */
	{&upd7810_device::STAX_B,        1, 7, 4,L0|L1}, /* 39: 0011 1001                                */
	{&upd7810_device::STAX_D,        1, 7, 4,L0|L1}, /* 3a: 0011 1010                                */
	{&upd7810_device::STAX_H,        1, 7, 4,L0|L1}, /* 3b: 0011 1011                                */
	{&upd7810_device::STAX_Dp,       1, 7, 4,L0|L1}, /* 3c: 0011 1100                                */
	{&upd7810_device::STAX_Hp,       1, 7, 4,L0|L1}, /* 3d: 0011 1101                                */
	{&upd7810_device::STAX_Dm,       1, 7, 4,L0|L1}, /* 3e: 0011 1110                                */
	{&upd7810_device::STAX_Hm,       1, 7, 4,L0|L1}, /* 3f: 0011 1111                                */

	{&upd7810_device::CALL_w,        3,16,10,L0|L1}, /* 40: 0100 0000 llll llll hhhh hhhh            */
	{&upd7810_device::INR_A,         1, 4, 4,L0|L1}, /* 41: 0100 0001                                */
	{&upd7810_device::INR_B,         1, 4, 4,L0|L1}, /* 42: 0100 0010                                */
	{&upd7810_device::INR_C,         1, 4, 4,L0|L1}, /* 43: 0100 0011                                */
	{&upd7810_device::LXI_EA_s,      3,10,10,L0|L1}, /* 44: 0100 0100 llll llll hhhh hhhh            */
	{&upd7810_device::ONIW_wa_xx,    3,13,10,L0|L1}, /* 45: 0100 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::ADI_A_xx,      2, 7, 7,L0|L1}, /* 46: 0100 0110 xxxx xxxx                      */
	{&upd7810_device::ONI_A_xx,      2, 7, 7,L0|L1}, /* 47: 0100 0111 xxxx xxxx                      */
	{&upd7810_device::PRE_48,        1, 0, 0,L0|L1}, /* 48: prefix                                   */
	{&upd7810_device::MVIX_BC_xx,    2,10, 7,L0|L1}, /* 49: 0100 1001 xxxx xxxx                      */
	{&upd7810_device::MVIX_DE_xx,    2,10, 7,L0|L1}, /* 4a: 0100 1010 xxxx xxxx                      */
	{&upd7810_device::MVIX_HL_xx,    2,10, 7,L0|L1}, /* 4b: 0100 1011 xxxx xxxx                      */
	{&upd7810_device::PRE_4C,        1, 0, 0,L0|L1}, /* 4c: prefix                                   */
	{&upd7810_device::PRE_4D,        1, 0, 0,L0|L1}, /* 4d: prefix                                   */
	{&upd7810_device::JRE,           2,10, 7,L0|L1}, /* 4e: 0100 111d dddd dddd                      */
	{&upd7810_device::JRE,           2,10, 7,L0|L1}, /* 4f: 0100 111d dddd dddd                      */

	{&upd7810_device::SKN_bit,       2,10, 8,L0|L1}, /* 50: 0101 0000 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::DCR_A,         1, 4, 4,L0|L1}, /* 51: 0101 0001                                */
	{&upd7810_device::DCR_B,         1, 4, 4,L0|L1}, /* 52: 0101 0010                                */
	{&upd7810_device::DCR_C,         1, 4, 4,L0|L1}, /* 53: 0101 0011                                */
	{&upd7810_device::JMP_w,         3,10,10,L0|L1}, /* 54: 0101 0100 llll llll hhhh hhhh            */
	{&upd7810_device::OFFIW_wa_xx,   3,13,10,L0|L1}, /* 55: 0101 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::ACI_A_xx,      2, 7, 7,L0|L1}, /* 56: 0101 0110 xxxx xxxx                      */
	{&upd7810_device::OFFI_A_xx,     2, 7, 7,L0|L1}, /* 57: 0101 0111 xxxx xxxx                      */
	{&upd7810_device::SETB,          2,13, 8,L0|L1}, /* 58: 0101 1000 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::illegal,       2, 8, 8,L0|L1}, /* 59: 0101 1001 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::illegal,       2, 8, 8,L0|L1}, /* 5a: 0101 1010 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::CLR,           2,13, 8,L0|L1}, /* 5b: 0101 1011 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::illegal,       2, 8, 8,L0|L1}, /* 5c: 0101 1100 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::SK_bit,        2,10, 8,L0|L1}, /* 5d: 0101 1101 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::illegal,       2, 8, 8,L0|L1}, /* 5e: 0101 1110 bbbb bbbb                      */  /* 7807 */
	{&upd7810_device::illegal,       2, 8, 8,L0|L1}, /* 5f: 0101 1111 bbbb bbbb                      */  /* 7807 */

	{&upd7810_device::PRE_60,        1, 0, 0,L0|L1}, /* 60: prefix                                   */
	{&upd7810_device::DAA,           1, 4, 4,L0|L1}, /* 61: 0110 0001                                */
	{&upd7810_device::RETI,          1,13, 4,L0|L1}, /* 62: 0110 0010                                */
	{&upd7810_device::STAW_wa,       2,10, 7,L0|L1}, /* 63: 0110 0011 oooo oooo                      */
	{&upd7810_device::PRE_64,        1, 0, 0,L0|L1}, /* 64: prefix                                   */
	{&upd7810_device::NEIW_wa_xx,    3,13,10,L0|L1}, /* 65: 0110 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::SUI_A_xx,      2, 7, 7,L0|L1}, /* 66: 0110 0110 xxxx xxxx                      */
	{&upd7810_device::NEI_A_xx,      2, 7, 7,L0|L1}, /* 67: 0110 0111 xxxx xxxx                      */
	{&upd7810_device::MVI_V_xx,      2, 7, 7,L0|L1}, /* 68: 0110 1000 xxxx xxxx                      */
	{&upd7810_device::MVI_A_xx,      2, 7, 7,L0   }, /* 69: 0110 1001 xxxx xxxx                      */
	{&upd7810_device::MVI_B_xx,      2, 7, 7,L0|L1}, /* 6a: 0110 1010 xxxx xxxx                      */
	{&upd7810_device::MVI_C_xx,      2, 7, 7,L0|L1}, /* 6b: 0110 1011 xxxx xxxx                      */
	{&upd7810_device::MVI_D_xx,      2, 7, 7,L0|L1}, /* 6c: 0110 1100 xxxx xxxx                      */
	{&upd7810_device::MVI_E_xx,      2, 7, 7,L0|L1}, /* 6d: 0110 1101 xxxx xxxx                      */
	{&upd7810_device::MVI_H_xx,      2, 7, 7,L0|L1}, /* 6e: 0110 1110 xxxx xxxx                      */
	{&upd7810_device::MVI_L_xx,      2, 7, 7,   L1}, /* 6f: 0110 1111 xxxx xxxx                      */

	{&upd7810_device::PRE_70,        1, 0, 0,L0|L1}, /* 70: prefix                                   */
	{&upd7810_device::MVIW_wa_xx,    3,13,10,L0|L1}, /* 71: 0111 0001 oooo oooo xxxx xxxx            */
	{&upd7810_device::SOFTI,         1,16, 4,L0|L1}, /* 72: 0111 0010                                */
	{&upd7810_device::illegal,       1, 0, 0,L0|L1}, /* 73:                                          */
	{&upd7810_device::PRE_74,        1, 0, 0,L0|L1}, /* 74: prefix                                   */
	{&upd7810_device::EQIW_wa_xx,    3,13,10,L0|L1}, /* 75: 0111 0101 oooo oooo xxxx xxxx            */
	{&upd7810_device::SBI_A_xx,      2, 7, 7,L0|L1}, /* 76: 0111 0110 xxxx xxxx                      */
	{&upd7810_device::EQI_A_xx,      2, 7, 7,L0|L1}, /* 77: 0111 0111 xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 78: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 79: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7a: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7b: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7c: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7d: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7e: 0111 1xxx xxxx xxxx                      */
	{&upd7810_device::CALF,          2,13, 7,L0|L1}, /* 7f: 0111 1xxx xxxx xxxx                      */

	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 80: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 81: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 82: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 83: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 84: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 85: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 86: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 87: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 88: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 89: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8a: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8b: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8c: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8d: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8e: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 8f: 100x xxxx                                */

	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 90: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 91: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 92: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 93: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 94: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 95: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 96: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 97: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 98: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 99: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9a: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9b: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9c: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9d: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9e: 100x xxxx                                */
	{&upd7810_device::CALT,          1,16, 4,L0|L1}, /* 9f: 100x xxxx                                */

	{&upd7810_device::POP_VA,        1,10, 4,L0|L1}, /* a0: 1010 0000                                */
	{&upd7810_device::POP_BC,        1,10, 4,L0|L1}, /* a1: 1010 0001                                */
	{&upd7810_device::POP_DE,        1,10, 4,L0|L1}, /* a2: 1010 0010                                */
	{&upd7810_device::POP_HL,        1,10, 4,L0|L1}, /* a3: 1010 0011                                */
	{&upd7810_device::POP_EA,        1,10, 4,L0|L1}, /* a4: 1010 0100                                */
	{&upd7810_device::DMOV_EA_BC,    1, 4, 4,L0|L1}, /* a5: 1010 0101                                */
	{&upd7810_device::DMOV_EA_DE,    1, 4, 4,L0|L1}, /* a6: 1010 0110                                */
	{&upd7810_device::DMOV_EA_HL,    1, 4, 4,L0|L1}, /* a7: 1010 0111                                */
	{&upd7810_device::INX_EA,        1, 7, 4,L0|L1}, /* a8: 1010 1000                                */
	{&upd7810_device::DCX_EA,        1, 7, 4,L0|L1}, /* a9: 1010 1001                                */
	{&upd7810_device::EI,            1, 4, 4,L0|L1}, /* aa: 1010 1010                                */
	{&upd7810_device::LDAX_D_xx,     2,13, 7,L0|L1}, /* ab: 1010 1011 dddd dddd                      */
	{&upd7810_device::LDAX_H_A,      1,13, 7,L0|L1}, /* ac: 1010 1100                                */
	{&upd7810_device::LDAX_H_B,      1,13, 7,L0|L1}, /* ad: 1010 1101                                */
	{&upd7810_device::LDAX_H_EA,     1,13, 7,L0|L1}, /* ae: 1010 1110                                */
	{&upd7810_device::LDAX_H_xx,     2,13, 7,L0|L1}, /* af: 1010 1111 dddd dddd                      */

	{&upd7810_device::PUSH_VA,       1,13, 4,L0|L1}, /* b0: 1011 0000                                */
	{&upd7810_device::PUSH_BC,       1,13, 4,L0|L1}, /* b1: 1011 0001                                */
	{&upd7810_device::PUSH_DE,       1,13, 4,L0|L1}, /* b2: 1011 0010                                */
	{&upd7810_device::PUSH_HL,       1,13, 4,L0|L1}, /* b3: 1011 0011                                */
	{&upd7810_device::PUSH_EA,       1,13, 4,L0|L1}, /* b4: 1011 0100                                */
	{&upd7810_device::DMOV_BC_EA,    1, 4, 4,L0|L1}, /* b5: 1011 0101                                */
	{&upd7810_device::DMOV_DE_EA,    1, 4, 4,L0|L1}, /* b6: 1011 0110                                */
	{&upd7810_device::DMOV_HL_EA,    1, 4, 4,L0|L1}, /* b7: 1011 0111                                */
	{&upd7810_device::RET,           1,10, 4,L0|L1}, /* b8: 1011 1000                                */
	{&upd7810_device::RETS,          1,10, 4,L0|L1}, /* b9: 1011 1001                                */
	{&upd7810_device::DI,            1, 4, 4,L0|L1}, /* ba: 1011 1010                                */
	{&upd7810_device::STAX_D_xx,     2,13, 7,L0|L1}, /* bb: 1011 1011 dddd dddd                      */
	{&upd7810_device::STAX_H_A,      1,13, 7,L0|L1}, /* bc: 1011 1100                                */
	{&upd7810_device::STAX_H_B,      1,13, 7,L0|L1}, /* bd: 1011 1101                                */
	{&upd7810_device::STAX_H_EA,     1,13, 7,L0|L1}, /* be: 1011 1110                                */
	{&upd7810_device::STAX_H_xx,     2,13, 7,L0|L1}, /* bf: 1011 1111 dddd dddd                      */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c0: 1100 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c1: 1100 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c2: 1100 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c3: 1100 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c4: 1100 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c5: 1100 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c6: 1100 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c7: 1100 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c8: 1100 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* c9: 1100 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ca: 1100 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cb: 1100 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cc: 1100 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cd: 1100 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ce: 1100 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* cf: 1100 1111                                */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d0: 1101 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d1: 1101 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d2: 1101 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d3: 1101 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d4: 1101 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d5: 1101 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d6: 1101 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d7: 1101 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d8: 1101 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* d9: 1101 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* da: 1101 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* db: 1101 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* dc: 1101 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* dd: 1101 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* de: 1101 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* df: 1101 1111                                */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e0: 1110 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e1: 1110 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e2: 1110 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e3: 1110 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e4: 1110 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e5: 1110 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e6: 1110 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e7: 1110 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e8: 1110 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* e9: 1110 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ea: 1110 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* eb: 1110 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ec: 1110 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ed: 1110 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ee: 1110 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* ef: 1110 1111                                */

	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f0: 1111 0000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f1: 1111 0001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f2: 1111 0010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f3: 1111 0011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f4: 1111 0100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f5: 1111 0101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f6: 1111 0110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f7: 1111 0111                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f8: 1111 1000                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* f9: 1111 1001                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fa: 1111 1010                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fb: 1111 1011                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fc: 1111 1100                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fd: 1111 1101                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}, /* fe: 1111 1110                                */
	{&upd7810_device::JR,            1,10, 4,L0|L1}  /* ff: 1111 1111                                */
};


/***********************************************************************
 *
 * uPD7801
 *
 **********************************************************************/

const struct upd7810_device::opcode_s upd7810_device::s_op48_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::SKIT_F0,       2, 8, 8,L0|L1}, {&upd7810_device::SKIT_FT0,      2, 8, 8,L0|L1},
	{&upd7810_device::SKIT_F1,       2, 8, 8,L0|L1}, {&upd7810_device::SKIT_F2,       2, 8, 8,L0|L1},
	{&upd7810_device::SKIT_FST,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SK_CY,         2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SK_Z,          2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PUSH_VA,       2,17,17,L0|L1}, {&upd7810_device::POP_VA,        2,15,15,L0|L1},

	{&upd7810_device::SKNIT_F0,      2, 8, 8,L0|L1}, {&upd7810_device::SKNIT_FT0,     2, 8, 8,L0|L1},
	{&upd7810_device::SKNIT_F1,      2, 8, 8,L0|L1}, {&upd7810_device::SKNIT_F2,      2, 8, 8,L0|L1},
	{&upd7810_device::SKNIT_FST,     2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal,       2, 8, 8,L0|L1},
	{&upd7810_device::SKN_CY,        2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SKN_Z,         2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PUSH_BC,       2,17,17,L0|L1}, {&upd7810_device::POP_BC,        2,15,15,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::EI,            2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::DI,            2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::CLC,           2, 8, 8,L0|L1}, {&upd7810_device::STC,           2, 8, 8,L0|L1},
	{&upd7810_device::PEN,           2,11,11,L0|L1}, {&upd7810_device::PEX,           2,11,11,L0|L1},
	{&upd7810_device::PUSH_DE,       2,17,17,L0|L1}, {&upd7810_device::POP_DE,        2,15,15,L0|L1},

	{&upd7810_device::RLL_A,         2, 8, 8,L0|L1}, {&upd7810_device::RLR_A,         2, 8, 8,L0|L1},
	{&upd7810_device::RLL_C,         2, 8, 8,L0|L1}, {&upd7810_device::RLR_C,         2, 8, 8,L0|L1},
	{&upd7810_device::SLL_A,         2, 8, 8,L0|L1}, {&upd7810_device::SLR_A,         2, 8, 8,L0|L1},
	{&upd7810_device::SLL_C,         2, 8, 8,L0|L1}, {&upd7810_device::SLR_C,         2, 8, 8,L0|L1},
	{&upd7810_device::RLD,           2,17,17,L0|L1}, {&upd7810_device::RRD,           2,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PER,           2,11,11,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PUSH_HL,       2,17,17,L0|L1}, {&upd7810_device::POP_HL,        2,15,15,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

const struct upd7810_device::opcode_s upd7810_device::s_op4C_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},
	{&upd7810_device::IN,            2,10,10,L0|L1}, {&upd7810_device::IN,            2,10,10,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::MOV_A_PA,      2,10,10,L0|L1}, {&upd7810_device::MOV_A_PB,      2,10,10,L0|L1},
	{&upd7810_device::MOV_A_PC,      2,10,10,L0|L1}, {&upd7810_device::MOV_A_MKL,     2,10,10,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::MOV_A_S,       2,10,10,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

/* prefix 4D */
const struct upd7810_device::opcode_s upd7810_device::s_op4D_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},
	{&upd7810_device::OUT,           2,10,10,L0|L1}, {&upd7810_device::OUT,           2,10,10,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::MOV_PA_A,      2,10,10,L0|L1}, {&upd7810_device::MOV_PB_A,      2,10,10,L0|L1},
	{&upd7810_device::MOV_PC_A,      2,10,10,L0|L1}, {&upd7810_device::MOV_MKL_A,     2,10,10,L0|L1},
	{&upd7810_device::MOV_MB_A,      2,10,10,L0|L1}, {&upd7810_device::MOV_MC_A_7801, 2,10,10,L0|L1},
	{&upd7810_device::MOV_TM0_A,     2,10,10,L0|L1}, {&upd7810_device::MOV_TM1_A,     2,10,10,L0|L1},
	{&upd7810_device::MOV_S_A,       2,10,10,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

/* prefix 60 */
const struct upd7810_device::opcode_s upd7810_device::s_op60_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_L_A,       2, 8, 8,L0|L1},

	{&upd7810_device::XRA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_L_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_L_A,       2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::ADDNC_V_A,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_B_A,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_C_A,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_D_A,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_E_A,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_H_A,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_L_A,     2, 8, 8,L0|L1},
	{&upd7810_device::GTA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_L_A,       2, 8, 8,L0|L1},

	{&upd7810_device::SUBNB_V_A,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_B_A,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_C_A,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_D_A,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_E_A,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_H_A,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_L_A,     2, 8, 8,L0|L1},
	{&upd7810_device::LTA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_L_A,       2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::ADD_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_L_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::ADC_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_L_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::SUB_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_L_A,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_L_A,       2, 8, 8,L0|L1},

	{&upd7810_device::SBB_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_L_A,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_V_A,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_B_A,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_C_A,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_D_A,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_E_A,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_H_A,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_L_A,       2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::XRA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_L,       2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADDNC_A_V,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_A_B,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_C,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_A_D,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_E,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_A_H,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_L,     2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::SUBNB_A_V,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_A_B,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_C,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_A_D,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_E,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_A_H,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_L,     2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_L,       2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADD_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::ADC_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_V,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_A,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_B,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_C,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_D,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_E,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_H,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_L,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUB_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::SBB_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_V,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_L,       2, 8, 8,L0|L1}
};

/* prefix 64 */
const struct upd7810_device::opcode_s upd7810_device::s_op64_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::ANI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::ANI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::ANI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::ANI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::ANI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::ANI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::ANI_L_xx,      3,11,11,L0|L1},

	{&upd7810_device::XRI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::XRI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::XRI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::XRI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::XRI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::XRI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::XRI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::XRI_L_xx,      3,11,11,L0|L1},
	{&upd7810_device::ORI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::ORI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::ORI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::ORI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::ORI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::ORI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::ORI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::ORI_L_xx,      3,11,11,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::ADINC_V_xx,    3,11,11,L0|L1}, {&upd7810_device::ADINC_A_xx,    3,11,11,L0|L1},
	{&upd7810_device::ADINC_B_xx,    3,11,11,L0|L1}, {&upd7810_device::ADINC_C_xx,    3,11,11,L0|L1},
	{&upd7810_device::ADINC_D_xx,    3,11,11,L0|L1}, {&upd7810_device::ADINC_E_xx,    3,11,11,L0|L1},
	{&upd7810_device::ADINC_H_xx,    3,11,11,L0|L1}, {&upd7810_device::ADINC_L_xx,    3,11,11,L0|L1},
	{&upd7810_device::GTI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::GTI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::GTI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::GTI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::GTI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::GTI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::GTI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::GTI_L_xx,      3,11,11,L0|L1},

	{&upd7810_device::SUINB_V_xx,    3,11,11,L0|L1}, {&upd7810_device::SUINB_A_xx,    3,11,11,L0|L1},
	{&upd7810_device::SUINB_B_xx,    3,11,11,L0|L1}, {&upd7810_device::SUINB_C_xx,    3,11,11,L0|L1},
	{&upd7810_device::SUINB_D_xx,    3,11,11,L0|L1}, {&upd7810_device::SUINB_E_xx,    3,11,11,L0|L1},
	{&upd7810_device::SUINB_H_xx,    3,11,11,L0|L1}, {&upd7810_device::SUINB_L_xx,    3,11,11,L0|L1},
	{&upd7810_device::LTI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::LTI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::LTI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::LTI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::LTI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::LTI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::LTI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::LTI_L_xx,      3,11,11,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::ADI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::ADI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::ADI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::ADI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::ADI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::ADI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::ADI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::ADI_L_xx,      3,11,11,L0|L1},
	{&upd7810_device::ONI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::ONI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::ONI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::ONI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::ONI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::ONI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::ONI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::ONI_L_xx,      3,11,11,L0|L1},

	{&upd7810_device::ACI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::ACI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::ACI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::ACI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::ACI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::ACI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::ACI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::ACI_L_xx,      3,11,11,L0|L1},
	{&upd7810_device::OFFI_V_xx,     3,11,11,L0|L1}, {&upd7810_device::OFFI_A_xx,     3,11,11,L0|L1},
	{&upd7810_device::OFFI_B_xx,     3,11,11,L0|L1}, {&upd7810_device::OFFI_C_xx,     3,11,11,L0|L1},
	{&upd7810_device::OFFI_D_xx,     3,11,11,L0|L1}, {&upd7810_device::OFFI_E_xx,     3,11,11,L0|L1},
	{&upd7810_device::OFFI_H_xx,     3,11,11,L0|L1}, {&upd7810_device::OFFI_L_xx,     3,11,11,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::SUI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::SUI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::SUI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::SUI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::SUI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::SUI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::SUI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::SUI_L_xx,      3,11,11,L0|L1},
	{&upd7810_device::NEI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::NEI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::NEI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::NEI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::NEI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::NEI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::NEI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::NEI_L_xx,      3,11,11,L0|L1},

	{&upd7810_device::SBI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::SBI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::SBI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::SBI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::SBI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::SBI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::SBI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::SBI_L_xx,      3,11,11,L0|L1},
	{&upd7810_device::EQI_V_xx,      3,11,11,L0|L1}, {&upd7810_device::EQI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::EQI_B_xx,      3,11,11,L0|L1}, {&upd7810_device::EQI_C_xx,      3,11,11,L0|L1},
	{&upd7810_device::EQI_D_xx,      3,11,11,L0|L1}, {&upd7810_device::EQI_E_xx,      3,11,11,L0|L1},
	{&upd7810_device::EQI_H_xx,      3,11,11,L0|L1}, {&upd7810_device::EQI_L_xx,      3,11,11,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ANI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ANI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ANI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::XRI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::XRI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::XRI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::XRI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ORI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ORI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ORI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ORI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADINC_PA_xx,   3,17,17,L0|L1}, {&upd7810_device::ADINC_PB_xx,   3,17,17,L0|L1},
	{&upd7810_device::ADINC_PC_xx,   3,17,17,L0|L1}, {&upd7810_device::ADINC_MKL_xx,  3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::GTI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::GTI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::GTI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::GTI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SUINB_PA_xx,   3,17,17,L0|L1}, {&upd7810_device::SUINB_PB_xx,   3,17,17,L0|L1},
	{&upd7810_device::SUINB_PC_xx,   3,17,17,L0|L1}, {&upd7810_device::SUINB_MKL_xx,  3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::LTI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::LTI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::LTI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::LTI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ADI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ADI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ADI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ONI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::ONI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::ONI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::ONI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::ACI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ACI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ACI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ACI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFI_PA_xx,    3,14,14,L0|L1}, {&upd7810_device::OFFI_PB_xx,    3,14,14,L0|L1},
	{&upd7810_device::OFFI_PC_xx,    3,14,14,L0|L1}, {&upd7810_device::OFFI_MKL_xx,   3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::SUI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::SUI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::SUI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::NEI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::NEI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::NEI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::NEI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SBI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::SBI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::SBI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::SBI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::EQI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::EQI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::EQI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::EQI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

/* prefix 70 */
const struct upd7810_device::opcode_s upd7810_device::s_op70_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SSPD_w,        4,20,20,L0|L1}, {&upd7810_device::LSPD_w,        4,20,20,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SBCD_w,        4,20,20,L0|L1}, {&upd7810_device::LBCD_w,        4,20,20,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SDED_w,        4,20,20,L0|L1}, {&upd7810_device::LDED_w,        4,20,20,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SHLD_w,        4,20,20,L0|L1}, {&upd7810_device::LHLD_w,        4,20,20,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::MOV_V_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_A_w,       4,17,17,L0|L1},
	{&upd7810_device::MOV_B_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_C_w,       4,17,17,L0|L1},
	{&upd7810_device::MOV_D_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_E_w,       4,17,17,L0|L1},
	{&upd7810_device::MOV_H_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_L_w,       4,17,17,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::MOV_w_V,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_A,       4,17,17,L0|L1},
	{&upd7810_device::MOV_w_B,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_C,       4,17,17,L0|L1},
	{&upd7810_device::MOV_w_D,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_E,       4,17,17,L0|L1},
	{&upd7810_device::MOV_w_H,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_L,       4,17,17,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ANAX_B,        2,11,11,L0|L1},
	{&upd7810_device::ANAX_D,        2,11,11,L0|L1}, {&upd7810_device::ANAX_H,        2,11,11,L0|L1},
	{&upd7810_device::ANAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ANAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ANAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ANAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::XRAX_B,        2,11,11,L0|L1},
	{&upd7810_device::XRAX_D,        2,11,11,L0|L1}, {&upd7810_device::XRAX_H,        2,11,11,L0|L1},
	{&upd7810_device::XRAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::XRAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::XRAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::XRAX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ORAX_B,        2,11,11,L0|L1},
	{&upd7810_device::ORAX_D,        2,11,11,L0|L1}, {&upd7810_device::ORAX_H,        2,11,11,L0|L1},
	{&upd7810_device::ORAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ORAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ORAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ORAX_Hm,       2,11,11,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADDNCX_B,      2,11,11,L0|L1},
	{&upd7810_device::ADDNCX_D,      2,11,11,L0|L1}, {&upd7810_device::ADDNCX_H,      2,11,11,L0|L1},
	{&upd7810_device::ADDNCX_Dp,     2,11,11,L0|L1}, {&upd7810_device::ADDNCX_Hp,     2,11,11,L0|L1},
	{&upd7810_device::ADDNCX_Dm,     2,11,11,L0|L1}, {&upd7810_device::ADDNCX_Hm,     2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::GTAX_B,        2,11,11,L0|L1},
	{&upd7810_device::GTAX_D,        2,11,11,L0|L1}, {&upd7810_device::GTAX_H,        2,11,11,L0|L1},
	{&upd7810_device::GTAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::GTAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::GTAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::GTAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUBNBX_B,      2,11,11,L0|L1},
	{&upd7810_device::SUBNBX_D,      2,11,11,L0|L1}, {&upd7810_device::SUBNBX_H,      2,11,11,L0|L1},
	{&upd7810_device::SUBNBX_Dp,     2,11,11,L0|L1}, {&upd7810_device::SUBNBX_Hp,     2,11,11,L0|L1},
	{&upd7810_device::SUBNBX_Dm,     2,11,11,L0|L1}, {&upd7810_device::SUBNBX_Hm,     2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::LTAX_B,        2,11,11,L0|L1},
	{&upd7810_device::LTAX_D,        2,11,11,L0|L1}, {&upd7810_device::LTAX_H,        2,11,11,L0|L1},
	{&upd7810_device::LTAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::LTAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::LTAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::LTAX_Hm,       2,11,11,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADDX_B,        2,11,11,L0|L1},
	{&upd7810_device::ADDX_D,        2,11,11,L0|L1}, {&upd7810_device::ADDX_H,        2,11,11,L0|L1},
	{&upd7810_device::ADDX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ADDX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ADDX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ADDX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ONAX_B,        2,11,11,L0|L1},
	{&upd7810_device::ONAX_D,        2,11,11,L0|L1}, {&upd7810_device::ONAX_H,        2,11,11,L0|L1},
	{&upd7810_device::ONAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ONAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ONAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ONAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADCX_B,        2,11,11,L0|L1},
	{&upd7810_device::ADCX_D,        2,11,11,L0|L1}, {&upd7810_device::ADCX_H,        2,11,11,L0|L1},
	{&upd7810_device::ADCX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ADCX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ADCX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ADCX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::OFFAX_B,       2,11,11,L0|L1},
	{&upd7810_device::OFFAX_D,       2,11,11,L0|L1}, {&upd7810_device::OFFAX_H,       2,11,11,L0|L1},
	{&upd7810_device::OFFAX_Dp,      2,11,11,L0|L1}, {&upd7810_device::OFFAX_Hp,      2,11,11,L0|L1},
	{&upd7810_device::OFFAX_Dm,      2,11,11,L0|L1}, {&upd7810_device::OFFAX_Hm,      2,11,11,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUBX_B,        2,11,11,L0|L1},
	{&upd7810_device::SUBX_D,        2,11,11,L0|L1}, {&upd7810_device::SUBX_H,        2,11,11,L0|L1},
	{&upd7810_device::SUBX_Dp,       2,11,11,L0|L1}, {&upd7810_device::SUBX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::SUBX_Dm,       2,11,11,L0|L1}, {&upd7810_device::SUBX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::NEAX_B,        2,11,11,L0|L1},
	{&upd7810_device::NEAX_D,        2,11,11,L0|L1}, {&upd7810_device::NEAX_H,        2,11,11,L0|L1},
	{&upd7810_device::NEAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::NEAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::NEAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::NEAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SBBX_B,        2,11,11,L0|L1},
	{&upd7810_device::SBBX_D,        2,11,11,L0|L1}, {&upd7810_device::SBBX_H,        2,11,11,L0|L1},
	{&upd7810_device::SBBX_Dp,       2,11,11,L0|L1}, {&upd7810_device::SBBX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::SBBX_Dm,       2,11,11,L0|L1}, {&upd7810_device::SBBX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::EQAX_B,        2,11,11,L0|L1},
	{&upd7810_device::EQAX_D,        2,11,11,L0|L1}, {&upd7810_device::EQAX_H,        2,11,11,L0|L1},
	{&upd7810_device::EQAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::EQAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::EQAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::EQAX_Hm,       2,11,11,L0|L1}
};

/* prefix 74 */
const struct upd7810_device::opcode_s upd7810_device::s_op74_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::XRAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ORAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADDNCW_wa,     3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::GTAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SUBNBW_wa,     3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::LTAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADDW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ONAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::ADCW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFAW_wa,      3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUBW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::NEAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SBBW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::EQAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

const struct upd7810_device::opcode_s upd7810_device::s_opXX_7801[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::NOP,           1, 4, 4,L0|L1}, {&upd7810_device::HALT,          1, 6, 6,L0|L1},
	{&upd7810_device::INX_SP,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_SP,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_S_w,       3,10,10,L0|L1}, {&upd7810_device::ANIW_wa_xx,    3,16,16,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::ANI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::RET,           1,11,11,L0|L1}, {&upd7810_device::SIO,           1, 4, 4,L0|L1},
	{&upd7810_device::MOV_A_B,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_A_C,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_A_D,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_A_E,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_A_H,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_A_L,       1, 4, 4,L0|L1},

	{&upd7810_device::EXA,           1, 4, 4,L0|L1}, {&upd7810_device::EXX,           1, 4, 4,L0|L1},
	{&upd7810_device::INX_BC,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_BC,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_B_w,       3,10,10,L0|L1}, {&upd7810_device::ORIW_wa_xx,    3,16,16,L0|L1},
	{&upd7810_device::XRI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::ORI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::RETS,          1,11,11,L0|L1}, {&upd7810_device::STM_7801,      1, 4, 4,L0|L1},
	{&upd7810_device::MOV_B_A,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_C_A,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_D_A,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_E_A,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_H_A,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_L_A,       1, 4, 4,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::INRW_wa,       2,13,13,L0|L1}, {&upd7810_device::TABLE,         1,19,19,L0|L1},
	{&upd7810_device::INX_DE,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_DE,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_D_w,       3,10,10,L0|L1}, {&upd7810_device::GTIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::ADINC_A_xx,    2, 7, 7,L0|L1}, {&upd7810_device::GTI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::LDAW_wa,       2,10,10,L0|L1}, {&upd7810_device::LDAX_B,        1, 7, 7,L0|L1},
	{&upd7810_device::LDAX_D,        1, 7, 7,L0|L1}, {&upd7810_device::LDAX_H,        1, 7, 7,L0|L1},
	{&upd7810_device::LDAX_Dp,       1, 7, 7,L0|L1}, {&upd7810_device::LDAX_Hp,       1, 7, 7,L0|L1},
	{&upd7810_device::LDAX_Dm,       1, 7, 7,L0|L1}, {&upd7810_device::LDAX_Hm,       1, 7, 7,L0|L1},

	{&upd7810_device::DCRW_wa,       2,13,13,L0|L1}, {&upd7810_device::BLOCK,         1,13,13,L0|L1},
	{&upd7810_device::INX_HL,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_HL,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_H_w,       3,10,10,   L1}, {&upd7810_device::LTIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SUINB_A_xx,    2, 7, 7,L0|L1}, {&upd7810_device::LTI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::STAW_wa,       2,10,10,L0|L1}, {&upd7810_device::STAX_B,        1, 7, 7,L0|L1},
	{&upd7810_device::STAX_D,        1, 7, 7,L0|L1}, {&upd7810_device::STAX_H,        1, 7, 7,L0|L1},
	{&upd7810_device::STAX_Dp,       1, 7, 7,L0|L1}, {&upd7810_device::STAX_Hp,       1, 7, 7,L0|L1},
	{&upd7810_device::STAX_Dm,       1, 7, 7,L0|L1}, {&upd7810_device::STAX_Hm,       1, 7, 7,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::INR_A,         1, 4, 4,L0|L1},
	{&upd7810_device::INR_B,         1, 4, 4,L0|L1}, {&upd7810_device::INR_C,         1, 4, 4,L0|L1},
	{&upd7810_device::CALL_w,        3,16,16,L0|L1}, {&upd7810_device::ONIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::ADI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::ONI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::PRE_48,        1, 0, 0,L0|L1}, {&upd7810_device::MVIX_BC_xx,    2,10,10,L0|L1},
	{&upd7810_device::MVIX_DE_xx,    2,10,10,L0|L1}, {&upd7810_device::MVIX_HL_xx,    2,10,10,L0|L1},
	{&upd7810_device::PRE_4C,        1, 0, 0,L0|L1}, {&upd7810_device::PRE_4D,        1, 0, 0,L0|L1},
	{&upd7810_device::JRE,           2,17,17,L0|L1}, {&upd7810_device::JRE,           2,17,17,L0|L1},

	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::DCR_A,         1, 4, 4,L0|L1},
	{&upd7810_device::DCR_B,         1, 4, 4,L0|L1}, {&upd7810_device::DCR_C,         1, 4, 4,L0|L1},
	{&upd7810_device::JMP_w,         3,10,10,L0|L1}, {&upd7810_device::OFFIW_wa_xx,   3,13,13,L0|L1},
	{&upd7810_device::ACI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::OFFI_A_xx,     2, 7, 7,L0|L1},
	{&upd7810_device::BIT_0_wa,      2,10,10,L0|L1}, {&upd7810_device::BIT_1_wa,      2,10,10,L0|L1},
	{&upd7810_device::BIT_2_wa,      2,10,10,L0|L1}, {&upd7810_device::BIT_3_wa,      2,10,10,L0|L1},
	{&upd7810_device::BIT_4_wa,      2,10,10,L0|L1}, {&upd7810_device::BIT_5_wa,      2,10,10,L0|L1},
	{&upd7810_device::BIT_6_wa,      2,10,10,L0|L1}, {&upd7810_device::BIT_7_wa,      2,10,10,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::PRE_60,        1, 0, 0,L0|L1}, {&upd7810_device::DAA,           1, 4, 4,L0|L1},
	{&upd7810_device::RETI,          1,15,15,L0|L1}, {&upd7810_device::CALB,          2,13,13,L0|L1},
	{&upd7810_device::PRE_64,        1, 0, 0,L0|L1}, {&upd7810_device::NEIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SUI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::NEI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::MVI_V_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_A_xx,      2, 7, 7,L0   },
	{&upd7810_device::MVI_B_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_C_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::MVI_D_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_E_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::MVI_H_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_L_xx,      2, 7, 7,   L1},

	{&upd7810_device::PRE_70,        1, 0, 0,L0|L1}, {&upd7810_device::MVIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SOFTI,         1,19,19,L0|L1}, {&upd7810_device::JB,            1, 4, 4,L0|L1},
	{&upd7810_device::PRE_74,        1, 0, 0,L0|L1}, {&upd7810_device::EQIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SBI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::EQI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::CALF,          2,16,16,L0|L1}, {&upd7810_device::CALF,          2,16,16,L0|L1},
	{&upd7810_device::CALF,          2,16,16,L0|L1}, {&upd7810_device::CALF,          2,16,16,L0|L1},
	{&upd7810_device::CALF,          2,16,16,L0|L1}, {&upd7810_device::CALF,          2,16,16,L0|L1},
	{&upd7810_device::CALF,          2,16,16,L0|L1}, {&upd7810_device::CALF,          2,16,16,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},

	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},

	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1},
	{&upd7810_device::JR,            1,13,13,L0|L1}, {&upd7810_device::JR,            1,13,13,L0|L1}
};

/***********************************************************************
 *
 * uPD78C05(A)
 *
 **********************************************************************/

const struct upd7810_device::opcode_s upd7810_device::s_op48_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::SKIT_F0,       2, 8, 8,L0|L1}, {&upd7810_device::SKIT_FT0,      2, 8, 8,L0|L1},
	{&upd7810_device::SKIT_F1,       2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SKIT_FST,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SK_CY,         2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SK_Z,          2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PUSH_VA,       2,17,17,L0|L1}, {&upd7810_device::POP_VA,        2,14,14,L0|L1},

	{&upd7810_device::SKNIT_F0,      2, 8, 8,L0|L1}, {&upd7810_device::SKNIT_FT0,     2, 8, 8,L0|L1},
	{&upd7810_device::SKNIT_F1,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SKNIT_FST,     2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SKN_CY,        2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SKN_Z,         2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PUSH_BC,       2,17,17,L0|L1}, {&upd7810_device::POP_BC,        2,14,14,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::EI,            2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::DI,            2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::CLC,           2, 8, 8,L0|L1}, {&upd7810_device::STC,           2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::PEX,           2,11,11,L0|L1},
	{&upd7810_device::PUSH_DE,       2,17,17,L0|L1}, {&upd7810_device::POP_DE,        2,14,14,L0|L1},

	{&upd7810_device::RLL_A,         2, 8, 8,L0|L1}, {&upd7810_device::RLR_A,         2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::RLD,           2,17,17,L0|L1}, {&upd7810_device::RRD,           2,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PER,           2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::PUSH_HL,       2,17,17,L0|L1}, {&upd7810_device::POP_HL,        2,14,14,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

const struct upd7810_device::opcode_s upd7810_device::s_op4C_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::MOV_A_PA,      2,10,10,L0|L1}, {&upd7810_device::MOV_A_PB,      2,10,10,L0|L1},
	{&upd7810_device::MOV_A_PC,      2,10,10,L0|L1}, {&upd7810_device::MOV_A_MKL,     2,10,10,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::MOV_A_S,       2,10,10,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

/* prefix 4D */
const struct upd7810_device::opcode_s upd7810_device::s_op4D_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::MOV_PA_A,      2,10,10,L0|L1}, {&upd7810_device::MOV_PB_A,      2,10,10,L0|L1},
	{&upd7810_device::MOV_PC_A,      2,10,10,L0|L1}, {&upd7810_device::MOV_MKL_A,     2,10,10,L0|L1},
	{&upd7810_device::MOV_MB_A,      2,10,10,L0|L1}, {&upd7810_device::MOV_MC_A,      2,10,10,L0|L1},
	{&upd7810_device::MOV_TM0_A,     2,10,10,L0|L1}, {&upd7810_device::MOV_TM1_A,     2,10,10,L0|L1},
	{&upd7810_device::MOV_S_A,       2,10,10,L0|L1}, {&upd7810_device::MOV_TMM_A,     2,10,10,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

/* prefix 60 */
const struct upd7810_device::opcode_s upd7810_device::s_op60_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ANA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ANA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::XRA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::XRA_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ORA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ORA_A_L,       2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_A_B,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_C,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_A_D,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_E,     2, 8, 8,L0|L1},
	{&upd7810_device::ADDNC_A_H,     2, 8, 8,L0|L1}, {&upd7810_device::ADDNC_A_L,     2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::GTA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::GTA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_A,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_A_B,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_C,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_A_D,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_E,     2, 8, 8,L0|L1},
	{&upd7810_device::SUBNB_A_H,     2, 8, 8,L0|L1}, {&upd7810_device::SUBNB_A_L,     2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::LTA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::LTA_A_L,       2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ADD_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ADD_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ONA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ONA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::ADC_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::ADC_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_A,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_B,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_C,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_D,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_E,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFA_A_H,      2, 8, 8,L0|L1}, {&upd7810_device::OFFA_A_L,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::SUB_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::NEA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::NEA_A_L,       2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::SBB_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::SBB_A_L,       2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_A,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_B,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_C,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_D,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_E,       2, 8, 8,L0|L1},
	{&upd7810_device::EQA_A_H,       2, 8, 8,L0|L1}, {&upd7810_device::EQA_A_L,       2, 8, 8,L0|L1}
};

/* prefix 64 */
const struct upd7810_device::opcode_s upd7810_device::s_op64_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ANI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::XRI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ORI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADINC_A_xx,    3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::GTI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUINB_A_xx,    3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      3, 8, 8,L0|L1}, {&upd7810_device::LTI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ONI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      3, 8, 8,L0|L1}, {&upd7810_device::ACI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      3, 8, 8,L0|L1}, {&upd7810_device::OFFI_A_xx,     3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::NEI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SBI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::EQI_A_xx,      3,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ANI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ANI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ANI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::XRI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::XRI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::XRI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::XRI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ORI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ORI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ORI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ORI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADINC_PA_xx,   3,17,17,L0|L1}, {&upd7810_device::ADINC_PB_xx,   3,17,17,L0|L1},
	{&upd7810_device::ADINC_PC_xx,   3,17,17,L0|L1}, {&upd7810_device::ADINC_MKL_xx,  3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::GTI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::GTI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::GTI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::GTI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SUINB_PA_xx,   3,17,17,L0|L1}, {&upd7810_device::SUINB_PB_xx,   3,17,17,L0|L1},
	{&upd7810_device::SUINB_PC_xx,   3,17,17,L0|L1}, {&upd7810_device::SUINB_MKL_xx,  3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::LTI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::LTI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::LTI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::LTI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ADI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ADI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ADI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ONI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::ONI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::ONI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::ONI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::ACI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::ACI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::ACI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::ACI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFI_PA_xx,    3,14,14,L0|L1}, {&upd7810_device::OFFI_PB_xx,    3,14,14,L0|L1},
	{&upd7810_device::OFFI_PC_xx,    3,14,14,L0|L1}, {&upd7810_device::OFFI_MKL_xx,   3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::SUI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::SUI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::SUI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::NEI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::NEI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::NEI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::NEI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SBI_PA_xx,     3,17,17,L0|L1}, {&upd7810_device::SBI_PB_xx,     3,17,17,L0|L1},
	{&upd7810_device::SBI_PC_xx,     3,17,17,L0|L1}, {&upd7810_device::SBI_MKL_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::EQI_PA_xx,     3,14,14,L0|L1}, {&upd7810_device::EQI_PB_xx,     3,14,14,L0|L1},
	{&upd7810_device::EQI_PC_xx,     3,14,14,L0|L1}, {&upd7810_device::EQI_MKL_xx,    3,14,14,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

/* prefix 70 */
const struct upd7810_device::opcode_s upd7810_device::s_op70_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SSPD_w,        4,20,20,L0|L1}, {&upd7810_device::LSPD_w,        4,20,20,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SBCD_w,        4,20,20,L0|L1}, {&upd7810_device::LBCD_w,        4,20,20,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SDED_w,        4,20,20,L0|L1}, {&upd7810_device::LDED_w,        4,20,20,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::SHLD_w,        4,20,20,L0|L1}, {&upd7810_device::LHLD_w,        4,20,20,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::MOV_A_w,       4,17,17,L0|L1},
	{&upd7810_device::MOV_B_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_C_w,       4,17,17,L0|L1},
	{&upd7810_device::MOV_D_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_E_w,       4,17,17,L0|L1},
	{&upd7810_device::MOV_H_w,       4,17,17,L0|L1}, {&upd7810_device::MOV_L_w,       4,17,17,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::MOV_w_A,       4,17,17,L0|L1},
	{&upd7810_device::MOV_w_B,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_C,       4,17,17,L0|L1},
	{&upd7810_device::MOV_w_D,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_E,       4,17,17,L0|L1},
	{&upd7810_device::MOV_w_H,       4,17,17,L0|L1}, {&upd7810_device::MOV_w_L,       4,17,17,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ANAX_B,        2,11,11,L0|L1},
	{&upd7810_device::ANAX_D,        2,11,11,L0|L1}, {&upd7810_device::ANAX_H,        2,11,11,L0|L1},
	{&upd7810_device::ANAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ANAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ANAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ANAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::XRAX_B,        2,11,11,L0|L1},
	{&upd7810_device::XRAX_D,        2,11,11,L0|L1}, {&upd7810_device::XRAX_H,        2,11,11,L0|L1},
	{&upd7810_device::XRAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::XRAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::XRAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::XRAX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ORAX_B,        2,11,11,L0|L1},
	{&upd7810_device::ORAX_D,        2,11,11,L0|L1}, {&upd7810_device::ORAX_H,        2,11,11,L0|L1},
	{&upd7810_device::ORAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ORAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ORAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ORAX_Hm,       2,11,11,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADDNCX_B,      2,11,11,L0|L1},
	{&upd7810_device::ADDNCX_D,      2,11,11,L0|L1}, {&upd7810_device::ADDNCX_H,      2,11,11,L0|L1},
	{&upd7810_device::ADDNCX_Dp,     2,11,11,L0|L1}, {&upd7810_device::ADDNCX_Hp,     2,11,11,L0|L1},
	{&upd7810_device::ADDNCX_Dm,     2,11,11,L0|L1}, {&upd7810_device::ADDNCX_Hm,     2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::GTAX_B,        2,11,11,L0|L1},
	{&upd7810_device::GTAX_D,        2,11,11,L0|L1}, {&upd7810_device::GTAX_H,        2,11,11,L0|L1},
	{&upd7810_device::GTAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::GTAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::GTAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::GTAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUBNBX_B,      2,11,11,L0|L1},
	{&upd7810_device::SUBNBX_D,      2,11,11,L0|L1}, {&upd7810_device::SUBNBX_H,      2,11,11,L0|L1},
	{&upd7810_device::SUBNBX_Dp,     2,11,11,L0|L1}, {&upd7810_device::SUBNBX_Hp,     2,11,11,L0|L1},
	{&upd7810_device::SUBNBX_Dm,     2,11,11,L0|L1}, {&upd7810_device::SUBNBX_Hm,     2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::LTAX_B,        2,11,11,L0|L1},
	{&upd7810_device::LTAX_D,        2,11,11,L0|L1}, {&upd7810_device::LTAX_H,        2,11,11,L0|L1},
	{&upd7810_device::LTAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::LTAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::LTAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::LTAX_Hm,       2,11,11,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADDX_B,        2,11,11,L0|L1},
	{&upd7810_device::ADDX_D,        2,11,11,L0|L1}, {&upd7810_device::ADDX_H,        2,11,11,L0|L1},
	{&upd7810_device::ADDX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ADDX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ADDX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ADDX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ONAX_B,        2,11,11,L0|L1},
	{&upd7810_device::ONAX_D,        2,11,11,L0|L1}, {&upd7810_device::ONAX_H,        2,11,11,L0|L1},
	{&upd7810_device::ONAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ONAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ONAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ONAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::ADCX_B,        2,11,11,L0|L1},
	{&upd7810_device::ADCX_D,        2,11,11,L0|L1}, {&upd7810_device::ADCX_H,        2,11,11,L0|L1},
	{&upd7810_device::ADCX_Dp,       2,11,11,L0|L1}, {&upd7810_device::ADCX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::ADCX_Dm,       2,11,11,L0|L1}, {&upd7810_device::ADCX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::OFFAX_B,       2,11,11,L0|L1},
	{&upd7810_device::OFFAX_D,       2,11,11,L0|L1}, {&upd7810_device::OFFAX_H,       2,11,11,L0|L1},
	{&upd7810_device::OFFAX_Dp,      2,11,11,L0|L1}, {&upd7810_device::OFFAX_Hp,      2,11,11,L0|L1},
	{&upd7810_device::OFFAX_Dm,      2,11,11,L0|L1}, {&upd7810_device::OFFAX_Hm,      2,11,11,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUBX_B,        2,11,11,L0|L1},
	{&upd7810_device::SUBX_D,        2,11,11,L0|L1}, {&upd7810_device::SUBX_H,        2,11,11,L0|L1},
	{&upd7810_device::SUBX_Dp,       2,11,11,L0|L1}, {&upd7810_device::SUBX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::SUBX_Dm,       2,11,11,L0|L1}, {&upd7810_device::SUBX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::NEAX_B,        2,11,11,L0|L1},
	{&upd7810_device::NEAX_D,        2,11,11,L0|L1}, {&upd7810_device::NEAX_H,        2,11,11,L0|L1},
	{&upd7810_device::NEAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::NEAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::NEAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::NEAX_Hm,       2,11,11,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SBBX_B,        2,11,11,L0|L1},
	{&upd7810_device::SBBX_D,        2,11,11,L0|L1}, {&upd7810_device::SBBX_H,        2,11,11,L0|L1},
	{&upd7810_device::SBBX_Dp,       2,11,11,L0|L1}, {&upd7810_device::SBBX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::SBBX_Dm,       2,11,11,L0|L1}, {&upd7810_device::SBBX_Hm,       2,11,11,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::EQAX_B,        2,11,11,L0|L1},
	{&upd7810_device::EQAX_D,        2,11,11,L0|L1}, {&upd7810_device::EQAX_H,        2,11,11,L0|L1},
	{&upd7810_device::EQAX_Dp,       2,11,11,L0|L1}, {&upd7810_device::EQAX_Hp,       2,11,11,L0|L1},
	{&upd7810_device::EQAX_Dm,       2,11,11,L0|L1}, {&upd7810_device::EQAX_Hm,       2,11,11,L0|L1}
};

/* prefix 74 */
const struct upd7810_device::opcode_s upd7810_device::s_op74_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ANAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::XRAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ORAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADDNCW_wa,     3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::GTAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SUBNBW_wa,     3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::LTAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADDW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::ONAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::ADCW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::OFFAW_wa,      3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUBW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::NEAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},

	{&upd7810_device::SBBW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::EQAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1},
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::illegal2,      2, 8, 8,L0|L1}
};

const struct upd7810_device::opcode_s upd7810_device::s_opXX_78c05[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::NOP,           1, 4, 4,L0|L1}, {&upd7810_device::HALT,          1, 6, 6,L0|L1},
	{&upd7810_device::INX_SP,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_SP,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_S_w,       3,10,10,L0|L1}, {&upd7810_device::ANIW_wa_xx,    3,16,16,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::ANI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::RET,           1,10,10,L0|L1}, {&upd7810_device::SIO,           1, 4, 4,L0|L1},
	{&upd7810_device::MOV_A_B,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_A_C,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_A_D,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_A_E,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_A_H,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_A_L,       1, 4, 4,L0|L1},

	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::INX_BC,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_BC,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_B_w,       3,10,10,L0|L1}, {&upd7810_device::ORIW_wa_xx,    3,16,16,L0|L1},
	{&upd7810_device::XRI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::ORI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::RETS,          1,10,10,L0|L1}, {&upd7810_device::STM,           1, 4, 4,L0|L1},
	{&upd7810_device::MOV_B_A,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_C_A,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_D_A,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_E_A,       1, 4, 4,L0|L1},
	{&upd7810_device::MOV_H_A,       1, 4, 4,L0|L1}, {&upd7810_device::MOV_L_A,       1, 4, 4,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::INRW_wa,       2,13,13,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::INX_DE,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_DE,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_D_w,       3,10,10,L0|L1}, {&upd7810_device::GTIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::ADINC_A_xx,    2, 7, 7,L0|L1}, {&upd7810_device::GTI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::LDAW_wa,       2,10,10,L0|L1}, {&upd7810_device::LDAX_B,        1, 7, 7,L0|L1},
	{&upd7810_device::LDAX_D,        1, 7, 7,L0|L1}, {&upd7810_device::LDAX_H,        1, 7, 7,L0|L1},
	{&upd7810_device::LDAX_Dp,       1, 7, 7,L0|L1}, {&upd7810_device::LDAX_Hp,       1, 7, 7,L0|L1},
	{&upd7810_device::LDAX_Dm,       1, 7, 7,L0|L1}, {&upd7810_device::LDAX_Hm,       1, 7, 7,L0|L1},

	{&upd7810_device::DCRW_wa,       2,13,13,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::INX_HL,        1, 7, 7,L0|L1}, {&upd7810_device::DCX_HL,        1, 7, 7,L0|L1},
	{&upd7810_device::LXI_H_w,       3,10,10,   L1}, {&upd7810_device::LTIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SUINB_A_xx,    2, 7, 7,L0|L1}, {&upd7810_device::LTI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::STAW_wa,       2,10,10,L0|L1}, {&upd7810_device::STAX_B,        1, 7, 7,L0|L1},
	{&upd7810_device::STAX_D,        1, 7, 7,L0|L1}, {&upd7810_device::STAX_H,        1, 7, 7,L0|L1},
	{&upd7810_device::STAX_Dp,       1, 7, 7,L0|L1}, {&upd7810_device::STAX_Hp,       1, 7, 7,L0|L1},
	{&upd7810_device::STAX_Dm,       1, 7, 7,L0|L1}, {&upd7810_device::STAX_Hm,       1, 7, 7,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::INR_A,         1, 4, 4,L0|L1},
	{&upd7810_device::INR_B,         1, 4, 4,L0|L1}, {&upd7810_device::INR_C,         1, 4, 4,L0|L1},
	{&upd7810_device::CALL_w,        3,16,16,L0|L1}, {&upd7810_device::ONIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::ADI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::ONI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::PRE_48,        1, 0, 0,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::PRE_4C,        1, 0, 0,L0|L1}, {&upd7810_device::PRE_4D,        1, 0, 0,L0|L1},
	{&upd7810_device::JRE,           2,13,13,L0|L1}, {&upd7810_device::JRE,           2,13,13,L0|L1},

	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::DCR_A,         1, 4, 4,L0|L1},
	{&upd7810_device::DCR_B,         1, 4, 4,L0|L1}, {&upd7810_device::DCR_C,         1, 4, 4,L0|L1},
	{&upd7810_device::JMP_w,         3,10,10,L0|L1}, {&upd7810_device::OFFIW_wa_xx,   3,13,13,L0|L1},
	{&upd7810_device::ACI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::OFFI_A_xx,     2, 7, 7,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::PRE_60,        1, 0, 0,L0|L1}, {&upd7810_device::DAA,           1, 4, 4,L0|L1},
	{&upd7810_device::RETI,          1,13,13,L0|L1}, {&upd7810_device::CALB,          2,13,13,L0|L1},
	{&upd7810_device::PRE_64,        1, 0, 0,L0|L1}, {&upd7810_device::NEIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SUI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::NEI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::illegal,       1, 4, 4,L0|L1}, {&upd7810_device::MVI_A_xx,      2, 7, 7,L0   },
	{&upd7810_device::MVI_B_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_C_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::MVI_D_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_E_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::MVI_H_xx,      2, 7, 7,L0|L1}, {&upd7810_device::MVI_L_xx,      2, 7, 7,   L1},

	{&upd7810_device::PRE_70,        1, 0, 0,L0|L1}, {&upd7810_device::MVIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SOFTI,         1,19,19,L0|L1}, {&upd7810_device::JB,            1, 4, 4,L0|L1},
	{&upd7810_device::PRE_74,        1, 0, 0,L0|L1}, {&upd7810_device::EQIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SBI_A_xx,      2, 7, 7,L0|L1}, {&upd7810_device::EQI_A_xx,      2, 7, 7,L0|L1},
	{&upd7810_device::CALF,          2,13,13,L0|L1}, {&upd7810_device::CALF,          2,13,13,L0|L1},
	{&upd7810_device::CALF,          2,13,13,L0|L1}, {&upd7810_device::CALF,          2,13,13,L0|L1},
	{&upd7810_device::CALF,          2,13,13,L0|L1}, {&upd7810_device::CALF,          2,13,13,L0|L1},
	{&upd7810_device::CALF,          2,13,13,L0|L1}, {&upd7810_device::CALF,          2,13,13,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},

	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},

	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1},
	{&upd7810_device::JR,            1,10,10,L0|L1}, {&upd7810_device::JR,            1,10,10,L0|L1}
};

/***********************************************************************
 *
 * uPD78C06(A) - Same as uPD78C05 but with different instruction timing
 *
 **********************************************************************/

const struct upd7810_device::opcode_s upd7810_device::s_op48_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::SKIT_F0,       2,12,12,L0|L1}, {&upd7810_device::SKIT_FT0,      2,12,12,L0|L1},
	{&upd7810_device::SKIT_F1,       2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SKIT_FST,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SK_CY,         2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SK_Z,          2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::PUSH_VA,       2,21,21,L0|L1}, {&upd7810_device::POP_VA,        2,18,18,L0|L1},

	{&upd7810_device::SKNIT_F0,      2,12,12,L0|L1}, {&upd7810_device::SKNIT_FT0,     2,12,12,L0|L1},
	{&upd7810_device::SKNIT_F1,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SKNIT_FST,     2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SKN_CY,        2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SKN_Z,         2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::PUSH_BC,       2,21,21,L0|L1}, {&upd7810_device::POP_BC,        2,18,18,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::EI,            2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::DI,            2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::CLC,           2,12,12,L0|L1}, {&upd7810_device::STC,           2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::PEX,           2,15,15,L0|L1},
	{&upd7810_device::PUSH_DE,       2,21,21,L0|L1}, {&upd7810_device::POP_DE,        2,18,18,L0|L1},

	{&upd7810_device::RLL_A,         2,12,12,L0|L1}, {&upd7810_device::RLR_A,         2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::RLD,           2,21,21,L0|L1}, {&upd7810_device::RRD,           2,21,21,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::PER,           2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::PUSH_HL,       2,21,21,L0|L1}, {&upd7810_device::POP_HL,        2,18,18,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1}
};

const struct upd7810_device::opcode_s upd7810_device::s_op4C_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::MOV_A_PA,      2,14,14,L0|L1}, {&upd7810_device::MOV_A_PB,      2,14,14,L0|L1},
	{&upd7810_device::MOV_A_PC,      2,14,14,L0|L1}, {&upd7810_device::MOV_A_MKL,     2,14,14,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::MOV_A_S,       2,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1}
};

/* prefix 4D */
const struct upd7810_device::opcode_s upd7810_device::s_op4D_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::MOV_PA_A,      2,14,14,L0|L1}, {&upd7810_device::MOV_PB_A,      2,14,14,L0|L1},
	{&upd7810_device::MOV_PC_A,      2,14,14,L0|L1}, {&upd7810_device::MOV_MKL_A,     2,14,14,L0|L1},
	{&upd7810_device::MOV_MB_A,      2,14,14,L0|L1}, {&upd7810_device::MOV_MC_A,      2,14,14,L0|L1},
	{&upd7810_device::MOV_TM0_A,     2,14,14,L0|L1}, {&upd7810_device::MOV_TM1_A,     2,14,14,L0|L1},
	{&upd7810_device::MOV_S_A,       2,14,14,L0|L1}, {&upd7810_device::MOV_TMM_A,     2,14,14,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1}
};

/* prefix 60 */
const struct upd7810_device::opcode_s upd7810_device::s_op60_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ANA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::XRA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ORA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADDNC_A_A,     2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::GTA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUBNB_A_A,     2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::LTA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADD_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADC_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2, 8, 8,L0|L1}, {&upd7810_device::SUB_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::NEA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SBB_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::EQA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ANA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::ANA_A_B,       2,12,12,L0|L1}, {&upd7810_device::ANA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::ANA_A_D,       2,12,12,L0|L1}, {&upd7810_device::ANA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::ANA_A_H,       2,12,12,L0|L1}, {&upd7810_device::ANA_A_L,       2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::XRA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::XRA_A_B,       2,12,12,L0|L1}, {&upd7810_device::XRA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::XRA_A_D,       2,12,12,L0|L1}, {&upd7810_device::XRA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::XRA_A_H,       2,12,12,L0|L1}, {&upd7810_device::XRA_A_L,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ORA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::ORA_A_B,       2,12,12,L0|L1}, {&upd7810_device::ORA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::ORA_A_D,       2,12,12,L0|L1}, {&upd7810_device::ORA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::ORA_A_H,       2,12,12,L0|L1}, {&upd7810_device::ORA_A_L,       2,12,12,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADDNC_A_A,     2,12,12,L0|L1},
	{&upd7810_device::ADDNC_A_B,     2,12,12,L0|L1}, {&upd7810_device::ADDNC_A_C,     2,12,12,L0|L1},
	{&upd7810_device::ADDNC_A_D,     2,12,12,L0|L1}, {&upd7810_device::ADDNC_A_E,     2,12,12,L0|L1},
	{&upd7810_device::ADDNC_A_H,     2,12,12,L0|L1}, {&upd7810_device::ADDNC_A_L,     2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::GTA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::GTA_A_B,       2,12,12,L0|L1}, {&upd7810_device::GTA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::GTA_A_D,       2,12,12,L0|L1}, {&upd7810_device::GTA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::GTA_A_H,       2,12,12,L0|L1}, {&upd7810_device::GTA_A_L,       2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUBNB_A_A,     2,12,12,L0|L1},
	{&upd7810_device::SUBNB_A_B,     2,12,12,L0|L1}, {&upd7810_device::SUBNB_A_C,     2,12,12,L0|L1},
	{&upd7810_device::SUBNB_A_D,     2,12,12,L0|L1}, {&upd7810_device::SUBNB_A_E,     2,12,12,L0|L1},
	{&upd7810_device::SUBNB_A_H,     2,12,12,L0|L1}, {&upd7810_device::SUBNB_A_L,     2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::LTA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::LTA_A_B,       2,12,12,L0|L1}, {&upd7810_device::LTA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::LTA_A_D,       2,12,12,L0|L1}, {&upd7810_device::LTA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::LTA_A_H,       2,12,12,L0|L1}, {&upd7810_device::LTA_A_L,       2,12,12,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADD_A_A,       2,12,12,L0|L1},
	{&upd7810_device::ADD_A_B,       2,12,12,L0|L1}, {&upd7810_device::ADD_A_C,       2,12,12,L0|L1},
	{&upd7810_device::ADD_A_D,       2,12,12,L0|L1}, {&upd7810_device::ADD_A_E,       2,12,12,L0|L1},
	{&upd7810_device::ADD_A_H,       2,12,12,L0|L1}, {&upd7810_device::ADD_A_L,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ONA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::ONA_A_B,       2,12,12,L0|L1}, {&upd7810_device::ONA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::ONA_A_D,       2,12,12,L0|L1}, {&upd7810_device::ONA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::ONA_A_H,       2,12,12,L0|L1}, {&upd7810_device::ONA_A_L,       2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADC_A_A,       2,12,12,L0|L1},
	{&upd7810_device::ADC_A_B,       2,12,12,L0|L1}, {&upd7810_device::ADC_A_C,       2,12,12,L0|L1},
	{&upd7810_device::ADC_A_D,       2,12,12,L0|L1}, {&upd7810_device::ADC_A_E,       2,12,12,L0|L1},
	{&upd7810_device::ADC_A_H,       2,12,12,L0|L1}, {&upd7810_device::ADC_A_L,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::OFFA_A_A,      2,12,12,L0|L1},
	{&upd7810_device::OFFA_A_B,      2,12,12,L0|L1}, {&upd7810_device::OFFA_A_C,      2,12,12,L0|L1},
	{&upd7810_device::OFFA_A_D,      2,12,12,L0|L1}, {&upd7810_device::OFFA_A_E,      2,12,12,L0|L1},
	{&upd7810_device::OFFA_A_H,      2,12,12,L0|L1}, {&upd7810_device::OFFA_A_L,      2,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUB_A_A,       2,12,12,L0|L1},
	{&upd7810_device::SUB_A_B,       2,12,12,L0|L1}, {&upd7810_device::SUB_A_C,       2,12,12,L0|L1},
	{&upd7810_device::SUB_A_D,       2,12,12,L0|L1}, {&upd7810_device::SUB_A_E,       2,12,12,L0|L1},
	{&upd7810_device::SUB_A_H,       2,12,12,L0|L1}, {&upd7810_device::SUB_A_L,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::NEA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::NEA_A_B,       2,12,12,L0|L1}, {&upd7810_device::NEA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::NEA_A_D,       2,12,12,L0|L1}, {&upd7810_device::NEA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::NEA_A_H,       2,12,12,L0|L1}, {&upd7810_device::NEA_A_L,       2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SBB_A_A,       2,12,12,L0|L1},
	{&upd7810_device::SBB_A_B,       2,12,12,L0|L1}, {&upd7810_device::SBB_A_C,       2,12,12,L0|L1},
	{&upd7810_device::SBB_A_D,       2,12,12,L0|L1}, {&upd7810_device::SBB_A_E,       2,12,12,L0|L1},
	{&upd7810_device::SBB_A_H,       2,12,12,L0|L1}, {&upd7810_device::SBB_A_L,       2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::EQA_A_A,       2,12,12,L0|L1},
	{&upd7810_device::EQA_A_B,       2,12,12,L0|L1}, {&upd7810_device::EQA_A_C,       2,12,12,L0|L1},
	{&upd7810_device::EQA_A_D,       2,12,12,L0|L1}, {&upd7810_device::EQA_A_E,       2,12,12,L0|L1},
	{&upd7810_device::EQA_A_H,       2,12,12,L0|L1}, {&upd7810_device::EQA_A_L,       2,12,12,L0|L1}
};

/* prefix 64 */
const struct upd7810_device::opcode_s upd7810_device::s_op64_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ANI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::XRI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ORI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADINC_A_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::GTI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUINB_A_xx,    3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      3,12,12,L0|L1}, {&upd7810_device::LTI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ONI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      3,12,12,L0|L1}, {&upd7810_device::ACI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      3,12,12,L0|L1}, {&upd7810_device::OFFI_A_xx,     3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::NEI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SBI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::EQI_A_xx,      3,17,17,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::ANI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::ANI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::ANI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::ANI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::XRI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::XRI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::XRI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::XRI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::ORI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::ORI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::ORI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::ORI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADINC_PA_xx,   3,23,23,L0|L1}, {&upd7810_device::ADINC_PB_xx,   3,23,23,L0|L1},
	{&upd7810_device::ADINC_PC_xx,   3,23,23,L0|L1}, {&upd7810_device::ADINC_MKL_xx,  3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::GTI_PA_xx,     3,20,20,L0|L1}, {&upd7810_device::GTI_PB_xx,     3,20,20,L0|L1},
	{&upd7810_device::GTI_PC_xx,     3,20,20,L0|L1}, {&upd7810_device::GTI_MKL_xx,    3,20,20,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::SUINB_PA_xx,   3,23,23,L0|L1}, {&upd7810_device::SUINB_PB_xx,   3,23,23,L0|L1},
	{&upd7810_device::SUINB_PC_xx,   3,23,23,L0|L1}, {&upd7810_device::SUINB_MKL_xx,  3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::LTI_PA_xx,     3,20,20,L0|L1}, {&upd7810_device::LTI_PB_xx,     3,20,20,L0|L1},
	{&upd7810_device::LTI_PC_xx,     3,20,20,L0|L1}, {&upd7810_device::LTI_MKL_xx,    3,20,20,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::ADI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::ADI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::ADI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::ONI_PA_xx,     3,20,20,L0|L1}, {&upd7810_device::ONI_PB_xx,     3,20,20,L0|L1},
	{&upd7810_device::ONI_PC_xx,     3,20,20,L0|L1}, {&upd7810_device::ONI_MKL_xx,    3,20,20,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::ACI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::ACI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::ACI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::ACI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::OFFI_PA_xx,    3,20,20,L0|L1}, {&upd7810_device::OFFI_PB_xx,    3,20,20,L0|L1},
	{&upd7810_device::OFFI_PC_xx,    3,20,20,L0|L1}, {&upd7810_device::OFFI_MKL_xx,   3,20,20,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::SUI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::SUI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::SUI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::NEI_PA_xx,     3,20,20,L0|L1}, {&upd7810_device::NEI_PB_xx,     3,20,20,L0|L1},
	{&upd7810_device::NEI_PC_xx,     3,20,20,L0|L1}, {&upd7810_device::NEI_MKL_xx,    3,20,20,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::SBI_PA_xx,     3,23,23,L0|L1}, {&upd7810_device::SBI_PB_xx,     3,23,23,L0|L1},
	{&upd7810_device::SBI_PC_xx,     3,23,23,L0|L1}, {&upd7810_device::SBI_MKL_xx,    3,23,23,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::EQI_PA_xx,     3,20,20,L0|L1}, {&upd7810_device::EQI_PB_xx,     3,20,20,L0|L1},
	{&upd7810_device::EQI_PC_xx,     3,20,20,L0|L1}, {&upd7810_device::EQI_MKL_xx,    3,20,20,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1}
};

/* prefix 70 */
const struct upd7810_device::opcode_s upd7810_device::s_op70_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SSPD_w,        4,28,28,L0|L1}, {&upd7810_device::LSPD_w,        4,28,28,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SBCD_w,        4,28,28,L0|L1}, {&upd7810_device::LBCD_w,        4,28,28,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SDED_w,        4,28,28,L0|L1}, {&upd7810_device::LDED_w,        4,28,28,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::SHLD_w,        4,28,28,L0|L1}, {&upd7810_device::LHLD_w,        4,28,28,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::MOV_A_w,       4,25,25,L0|L1},
	{&upd7810_device::MOV_B_w,       4,25,25,L0|L1}, {&upd7810_device::MOV_C_w,       4,25,25,L0|L1},
	{&upd7810_device::MOV_D_w,       4,25,25,L0|L1}, {&upd7810_device::MOV_E_w,       4,25,25,L0|L1},
	{&upd7810_device::MOV_H_w,       4,25,25,L0|L1}, {&upd7810_device::MOV_L_w,       4,25,25,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::MOV_w_A,       4,25,25,L0|L1},
	{&upd7810_device::MOV_w_B,       4,25,25,L0|L1}, {&upd7810_device::MOV_w_C,       4,25,25,L0|L1},
	{&upd7810_device::MOV_w_D,       4,25,25,L0|L1}, {&upd7810_device::MOV_w_E,       4,25,25,L0|L1},
	{&upd7810_device::MOV_w_H,       4,25,25,L0|L1}, {&upd7810_device::MOV_w_L,       4,25,25,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ANAX_B,        2,15,15,L0|L1},
	{&upd7810_device::ANAX_D,        2,15,15,L0|L1}, {&upd7810_device::ANAX_H,        2,15,15,L0|L1},
	{&upd7810_device::ANAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::ANAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::ANAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::ANAX_Hm,       2,15,15,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::XRAX_B,        2,15,15,L0|L1},
	{&upd7810_device::XRAX_D,        2,15,15,L0|L1}, {&upd7810_device::XRAX_H,        2,15,15,L0|L1},
	{&upd7810_device::XRAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::XRAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::XRAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::XRAX_Hm,       2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ORAX_B,        2,15,15,L0|L1},
	{&upd7810_device::ORAX_D,        2,15,15,L0|L1}, {&upd7810_device::ORAX_H,        2,15,15,L0|L1},
	{&upd7810_device::ORAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::ORAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::ORAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::ORAX_Hm,       2,15,15,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADDNCX_B,      2,15,15,L0|L1},
	{&upd7810_device::ADDNCX_D,      2,15,15,L0|L1}, {&upd7810_device::ADDNCX_H,      2,15,15,L0|L1},
	{&upd7810_device::ADDNCX_Dp,     2,15,15,L0|L1}, {&upd7810_device::ADDNCX_Hp,     2,15,15,L0|L1},
	{&upd7810_device::ADDNCX_Dm,     2,15,15,L0|L1}, {&upd7810_device::ADDNCX_Hm,     2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::GTAX_B,        2,15,15,L0|L1},
	{&upd7810_device::GTAX_D,        2,15,15,L0|L1}, {&upd7810_device::GTAX_H,        2,15,15,L0|L1},
	{&upd7810_device::GTAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::GTAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::GTAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::GTAX_Hm,       2,15,15,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUBNBX_B,      2,15,15,L0|L1},
	{&upd7810_device::SUBNBX_D,      2,15,15,L0|L1}, {&upd7810_device::SUBNBX_H,      2,15,15,L0|L1},
	{&upd7810_device::SUBNBX_Dp,     2,15,15,L0|L1}, {&upd7810_device::SUBNBX_Hp,     2,15,15,L0|L1},
	{&upd7810_device::SUBNBX_Dm,     2,15,15,L0|L1}, {&upd7810_device::SUBNBX_Hm,     2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::LTAX_B,        2,15,15,L0|L1},
	{&upd7810_device::LTAX_D,        2,15,15,L0|L1}, {&upd7810_device::LTAX_H,        2,15,15,L0|L1},
	{&upd7810_device::LTAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::LTAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::LTAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::LTAX_Hm,       2,15,15,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADDX_B,        2,15,15,L0|L1},
	{&upd7810_device::ADDX_D,        2,15,15,L0|L1}, {&upd7810_device::ADDX_H,        2,15,15,L0|L1},
	{&upd7810_device::ADDX_Dp,       2,15,15,L0|L1}, {&upd7810_device::ADDX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::ADDX_Dm,       2,15,15,L0|L1}, {&upd7810_device::ADDX_Hm,       2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ONAX_B,        2,15,15,L0|L1},
	{&upd7810_device::ONAX_D,        2,15,15,L0|L1}, {&upd7810_device::ONAX_H,        2,15,15,L0|L1},
	{&upd7810_device::ONAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::ONAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::ONAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::ONAX_Hm,       2,15,15,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::ADCX_B,        2,15,15,L0|L1},
	{&upd7810_device::ADCX_D,        2,15,15,L0|L1}, {&upd7810_device::ADCX_H,        2,15,15,L0|L1},
	{&upd7810_device::ADCX_Dp,       2,15,15,L0|L1}, {&upd7810_device::ADCX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::ADCX_Dm,       2,15,15,L0|L1}, {&upd7810_device::ADCX_Hm,       2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::OFFAX_B,       2,15,15,L0|L1},
	{&upd7810_device::OFFAX_D,       2,15,15,L0|L1}, {&upd7810_device::OFFAX_H,       2,15,15,L0|L1},
	{&upd7810_device::OFFAX_Dp,      2,15,15,L0|L1}, {&upd7810_device::OFFAX_Hp,      2,15,15,L0|L1},
	{&upd7810_device::OFFAX_Dm,      2,15,15,L0|L1}, {&upd7810_device::OFFAX_Hm,      2,15,15,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SUBX_B,        2,15,15,L0|L1},
	{&upd7810_device::SUBX_D,        2,15,15,L0|L1}, {&upd7810_device::SUBX_H,        2,15,15,L0|L1},
	{&upd7810_device::SUBX_Dp,       2,15,15,L0|L1}, {&upd7810_device::SUBX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::SUBX_Dm,       2,15,15,L0|L1}, {&upd7810_device::SUBX_Hm,       2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::NEAX_B,        2,15,15,L0|L1},
	{&upd7810_device::NEAX_D,        2,15,15,L0|L1}, {&upd7810_device::NEAX_H,        2,15,15,L0|L1},
	{&upd7810_device::NEAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::NEAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::NEAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::NEAX_Hm,       2,15,15,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::SBBX_B,        2,15,15,L0|L1},
	{&upd7810_device::SBBX_D,        2,15,15,L0|L1}, {&upd7810_device::SBBX_H,        2,15,15,L0|L1},
	{&upd7810_device::SBBX_Dp,       2,15,15,L0|L1}, {&upd7810_device::SBBX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::SBBX_Dm,       2,15,15,L0|L1}, {&upd7810_device::SBBX_Hm,       2,15,15,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::EQAX_B,        2,15,15,L0|L1},
	{&upd7810_device::EQAX_D,        2,15,15,L0|L1}, {&upd7810_device::EQAX_H,        2,15,15,L0|L1},
	{&upd7810_device::EQAX_Dp,       2,15,15,L0|L1}, {&upd7810_device::EQAX_Hp,       2,15,15,L0|L1},
	{&upd7810_device::EQAX_Dm,       2,15,15,L0|L1}, {&upd7810_device::EQAX_Hm,       2,15,15,L0|L1}
};

/* prefix 74 */
const struct upd7810_device::opcode_s upd7810_device::s_op74_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::ANAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::XRAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::ORAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::ADDNCW_wa,     3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::GTAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::SUBNBW_wa,     3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::LTAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::ADDW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::ONAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::ADCW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::OFFAW_wa,      3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::SUBW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::NEAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},

	{&upd7810_device::SBBW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::EQAW_wa,       3,14,14,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1},
	{&upd7810_device::illegal2,      2,12,12,L0|L1}, {&upd7810_device::illegal2,      2,12,12,L0|L1}
};

const struct upd7810_device::opcode_s upd7810_device::s_opXX_78c06[256] =
{
	/* 0x00 - 0x1F */
	{&upd7810_device::NOP,           1, 6, 6,L0|L1}, {&upd7810_device::HALT,          1, 6, 6,L0|L1},
	{&upd7810_device::INX_SP,        1, 9, 9,L0|L1}, {&upd7810_device::DCX_SP,        1, 9, 9,L0|L1},
	{&upd7810_device::LXI_S_w,       3,16,16,L0|L1}, {&upd7810_device::ANIW_wa_xx,    3,22,22,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::ANI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::RET,           1,12,12,L0|L1}, {&upd7810_device::SIO,           1, 6, 6,L0|L1},
	{&upd7810_device::MOV_A_B,       1, 6, 6,L0|L1}, {&upd7810_device::MOV_A_C,       1, 6, 6,L0|L1},
	{&upd7810_device::MOV_A_D,       1, 6, 6,L0|L1}, {&upd7810_device::MOV_A_E,       1, 6, 6,L0|L1},
	{&upd7810_device::MOV_A_H,       1, 6, 6,L0|L1}, {&upd7810_device::MOV_A_L,       1, 6, 6,L0|L1},

	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},
	{&upd7810_device::INX_BC,        1, 9, 9,L0|L1}, {&upd7810_device::DCX_BC,        1, 9, 9,L0|L1},
	{&upd7810_device::LXI_B_w,       3,16,16,L0|L1}, {&upd7810_device::ORIW_wa_xx,    3,22,2,L0|L1},
	{&upd7810_device::XRI_A_xx,      2,11,11,L0|L1}, {&upd7810_device::ORI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::RETS,          1,12,12,L0|L1}, {&upd7810_device::STM,           1, 6, 6,L0|L1},
	{&upd7810_device::MOV_B_A,       1, 6, 6,L0|L1}, {&upd7810_device::MOV_C_A,       1, 6, 6,L0|L1},
	{&upd7810_device::MOV_D_A,       1, 6, 6,L0|L1}, {&upd7810_device::MOV_E_A,       1, 6, 6,L0|L1},
	{&upd7810_device::MOV_H_A,       1, 6, 6,L0|L1}, {&upd7810_device::MOV_L_A,       1, 6, 6,L0|L1},

	/* 0x20 - 0x3F */
	{&upd7810_device::INRW_wa,       2,17,17,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::INX_DE,        1, 9, 9,L0|L1}, {&upd7810_device::DCX_DE,        1, 9, 9,L0|L1},
	{&upd7810_device::LXI_D_w,       3,16,16,L0|L1}, {&upd7810_device::GTIW_wa_xx,    3,19,19,L0|L1},
	{&upd7810_device::ADINC_A_xx,    2,11,11,L0|L1}, {&upd7810_device::GTI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::LDAW_wa,       2,14,14,L0|L1}, {&upd7810_device::LDAX_B,        1, 9, 9,L0|L1},
	{&upd7810_device::LDAX_D,        1, 9, 9,L0|L1}, {&upd7810_device::LDAX_H,        1, 9, 9,L0|L1},
	{&upd7810_device::LDAX_Dp,       1, 9, 9,L0|L1}, {&upd7810_device::LDAX_Hp,       1, 9, 9,L0|L1},
	{&upd7810_device::LDAX_Dm,       1, 9, 9,L0|L1}, {&upd7810_device::LDAX_Hm,       1, 9, 9,L0|L1},

	{&upd7810_device::DCRW_wa,       2,17,17,L0|L1}, {&upd7810_device::illegal,       1, 4, 4,L0|L1},
	{&upd7810_device::INX_HL,        1, 9, 9,L0|L1}, {&upd7810_device::DCX_HL,        1, 9, 9,L0|L1},
	{&upd7810_device::LXI_H_w,       3,16,16,   L1}, {&upd7810_device::LTIW_wa_xx,    3,19,19,L0|L1},
	{&upd7810_device::SUINB_A_xx,    2,11,11,L0|L1}, {&upd7810_device::LTI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::STAW_wa,       2,14,14,L0|L1}, {&upd7810_device::STAX_B,        1, 9, 9,L0|L1},
	{&upd7810_device::STAX_D,        1, 9, 9,L0|L1}, {&upd7810_device::STAX_H,        1, 9, 9,L0|L1},
	{&upd7810_device::STAX_Dp,       1, 9, 9,L0|L1}, {&upd7810_device::STAX_Hp,       1, 9, 9,L0|L1},
	{&upd7810_device::STAX_Dm,       1, 9, 9,L0|L1}, {&upd7810_device::STAX_Hm,       1, 9, 9,L0|L1},

	/* 0x40 - 0x5F */
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::INR_A,         1, 6, 6,L0|L1},
	{&upd7810_device::INR_B,         1, 6, 6,L0|L1}, {&upd7810_device::INR_C,         1, 6, 6,L0|L1},
	{&upd7810_device::CALL_w,        3,22,22,L0|L1}, {&upd7810_device::ONIW_wa_xx,    3,19,19,L0|L1},
	{&upd7810_device::ADI_A_xx,      2,11,11,L0|L1}, {&upd7810_device::ONI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::PRE_48,        1, 0, 0,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},
	{&upd7810_device::PRE_4C,        1, 0, 0,L0|L1}, {&upd7810_device::PRE_4D,        1, 0, 0,L0|L1},
	{&upd7810_device::JRE,           2,17,17,L0|L1}, {&upd7810_device::JRE,           2,17,17,L0|L1},

	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::DCR_A,         1, 6, 6,L0|L1},
	{&upd7810_device::DCR_B,         1, 6, 6,L0|L1}, {&upd7810_device::DCR_C,         1, 6, 6,L0|L1},
	{&upd7810_device::JMP_w,         3,16,16,L0|L1}, {&upd7810_device::OFFIW_wa_xx,   3,19,19,L0|L1},
	{&upd7810_device::ACI_A_xx,      2,11,11,L0|L1}, {&upd7810_device::OFFI_A_xx,     2,11,11,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::illegal,       1, 6, 6,L0|L1},

	/* 0x60 - 0x7F */
	{&upd7810_device::PRE_60,        1, 0, 0,L0|L1}, {&upd7810_device::DAA,           1, 6, 6,L0|L1},
	{&upd7810_device::RETI,          1,15,15,L0|L1}, {&upd7810_device::CALB,          2,13,13,L0|L1},
	{&upd7810_device::PRE_64,        1, 0, 0,L0|L1}, {&upd7810_device::NEIW_wa_xx,    3,19,19,L0|L1},
	{&upd7810_device::SUI_A_xx,      2,11,11,L0|L1}, {&upd7810_device::NEI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::illegal,       1, 6, 6,L0|L1}, {&upd7810_device::MVI_A_xx,      2,11,11,L0   },
	{&upd7810_device::MVI_B_xx,      2,11,11,L0|L1}, {&upd7810_device::MVI_C_xx,      2,11,11,L0|L1},
	{&upd7810_device::MVI_D_xx,      2,11,11,L0|L1}, {&upd7810_device::MVI_E_xx,      2,11,11,L0|L1},
	{&upd7810_device::MVI_H_xx,      2,11,11,L0|L1}, {&upd7810_device::MVI_L_xx,      2,11,11,   L1},

	{&upd7810_device::PRE_70,        1, 0, 0,L0|L1}, {&upd7810_device::MVIW_wa_xx,    3,13,13,L0|L1},
	{&upd7810_device::SOFTI,         1,19,19,L0|L1}, {&upd7810_device::JB,            1, 6, 6,L0|L1},
	{&upd7810_device::PRE_74,        1, 0, 0,L0|L1}, {&upd7810_device::EQIW_wa_xx,    3,19,19,L0|L1},
	{&upd7810_device::SBI_A_xx,      2,11,11,L0|L1}, {&upd7810_device::EQI_A_xx,      2,11,11,L0|L1},
	{&upd7810_device::CALF,          2,17,17,L0|L1}, {&upd7810_device::CALF,          2,17,17,L0|L1},
	{&upd7810_device::CALF,          2,17,17,L0|L1}, {&upd7810_device::CALF,          2,17,17,L0|L1},
	{&upd7810_device::CALF,          2,17,17,L0|L1}, {&upd7810_device::CALF,          2,17,17,L0|L1},
	{&upd7810_device::CALF,          2,17,17,L0|L1}, {&upd7810_device::CALF,          2,17,17,L0|L1},

	/* 0x80 - 0x9F */
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	/* 0xA0 - 0xBF */
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},
	{&upd7810_device::CALT_7801,     1,19,19,L0|L1}, {&upd7810_device::CALT_7801,     1,19,19,L0|L1},

	/* 0xC0 - 0xDF */
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},

	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},

	/* 0xE0 - 0xFF */
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},

	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1},
	{&upd7810_device::JR,            1,12,12,L0|L1}, {&upd7810_device::JR,            1,12,12,L0|L1}
};
