/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef __DSP_FM34NE_H__
#define __DSP_FM34NE_H__

struct fm34ne_dsp_devdata {
	const char *model;

	const u8 *input_parameter;
	int input_parameter_length;

	const u8 *enable_noise_suppression;
	int enable_ns_length;

	const u8 *disable_noise_suppression;
	int disable_ns_length;
};

/* Common section */
static const u8 bypass_parameter[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x04
};

static const u8 enable_parameter[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x00
};

/* TF201 section */
static const u8 TF201_input_parameter[] = {
	0xC0,
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x01, 0x82, 0x30, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x02, 0x27, 0x90, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x03, 0x19, 0x00, 0xA0,
	0xFC, 0xF3, 0x0D, 0x10, 0x04, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x05, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x06, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x07, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x08, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x09, 0x19, 0x01, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0A, 0x27, 0x90, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0B, 0x19, 0x01, 0x10,
	0xFC, 0xF3, 0x0D, 0x10, 0x0C, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x0D, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0E, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0F, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x10, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x11, 0x82, 0x2D, 0x20,
	0xFC, 0xF3, 0x0D, 0x10, 0x12, 0x27, 0x98, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x13, 0x19, 0x01, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x14, 0x80, 0x50, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x15, 0x90, 0x50, 0x3A,
	0xFC, 0xF3, 0x0D, 0x10, 0x16, 0x80, 0x50, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x17, 0x90, 0x50, 0x4F,
	0xFC, 0xF3, 0x0D, 0x10, 0x18, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x19, 0x19, 0x00, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1A, 0x80, 0x00, 0xAC,
	0xFC, 0xF3, 0x0D, 0x10, 0x1B, 0x26, 0x7C, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x1D, 0x19, 0x1D, 0x82,
	0xFC, 0xF3, 0x0D, 0x10, 0x1E, 0x19, 0x1C, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x1F, 0x80, 0x53, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x20, 0x93, 0xE2, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x21, 0x80, 0x4F, 0xBA,
	0xFC, 0xF3, 0x0D, 0x10, 0x22, 0x22, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x23, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x24, 0x18, 0x2F, 0xD0,
	0xFC, 0xF3, 0x0D, 0x10, 0x25, 0x94, 0x4F, 0xB6,
	0xFC, 0xF3, 0x0D, 0x10, 0x26, 0x80, 0x4F, 0x6A,
	0xFC, 0xF3, 0x0D, 0x10, 0x27, 0x26, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x28, 0x18, 0x2F, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x29, 0x18, 0x2B, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x2A, 0x95, 0x62, 0x06,
	0xFC, 0xF3, 0x0D, 0x10, 0x2B, 0x95, 0x61, 0x46,
	0xFC, 0xF3, 0x0D, 0x10, 0x2C, 0x40, 0xFA, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x2D, 0x40, 0xE5, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x2E, 0x82, 0x30, 0x14,
	0xFC, 0xF3, 0x0D, 0x10, 0x2F, 0x27, 0x00, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x30, 0x22, 0x78, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x31, 0x83, 0xFD, 0x44,
	0xFC, 0xF3, 0x0D, 0x10, 0x32, 0x26, 0xE2, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x33, 0x19, 0x03, 0x90,
	0xFC, 0xF3, 0x0D, 0x10, 0x34, 0x93, 0xFD, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x35, 0x83, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x36, 0x23, 0xA2, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x37, 0x93, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x38, 0x00, 0x00, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x39, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3A, 0x18, 0x3F, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3B, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3C, 0x19, 0x6C, 0xA4,
	0xFC, 0xF3, 0x0D, 0x10, 0x3D, 0x19, 0x66, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3E, 0x80, 0x79, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x3F, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x40, 0x27, 0x97, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x41, 0x19, 0x04, 0x40,
	0xFC, 0xF3, 0x0D, 0x10, 0x42, 0x94, 0x7B, 0xD6,
	0xFC, 0xF3, 0x0D, 0x10, 0x43, 0x80, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x44, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x45, 0x18, 0x48, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x46, 0x38, 0x00, 0x87,
	0xFC, 0xF3, 0x0D, 0x10, 0x47, 0x09, 0x00, 0x1B,
	0xFC, 0xF3, 0x0D, 0x10, 0x48, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x49, 0x18, 0x2D, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4A, 0x18, 0x21, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4B, 0x88, 0x4F, 0x47,
	0xFC, 0xF3, 0x0D, 0x10, 0x4C, 0x82, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x4D, 0x22, 0x62, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4E, 0x26, 0x62, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4F, 0x19, 0x05, 0x25,
	0xFC, 0xF3, 0x0D, 0x10, 0x50, 0x3B, 0xFF, 0xC7,
	0xFC, 0xF3, 0x0D, 0x10, 0x51, 0x19, 0x05, 0x3F,
	0xFC, 0xF3, 0x0D, 0x10, 0x52, 0x0D, 0x01, 0xA6,
	0xFC, 0xF3, 0x0D, 0x10, 0x53, 0x92, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x54, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x55, 0x18, 0x23, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x56, 0x96, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x57, 0x96, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x58, 0x9A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x59, 0x9A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x5A, 0x96, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x5B, 0x38, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x5C, 0x83, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x5D, 0x3B, 0x20, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x5E, 0x36, 0x2B, 0x01,
	0xFC, 0xF3, 0x0D, 0x10, 0x5F, 0x36, 0x2B, 0x60,
	0xFC, 0xF3, 0x0D, 0x10, 0x60, 0x1C, 0x72, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x61, 0x93, 0xFF, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x62, 0x93, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x63, 0x86, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x64, 0x86, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x65, 0x8A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x66, 0x8A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x67, 0x86, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x68, 0x0D, 0x08, 0x28,
	0xFC, 0xF3, 0x0D, 0x10, 0x69, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x6A, 0x18, 0x24, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x6B, 0x83, 0xFC, 0xFA,
	0xFC, 0xF3, 0x0D, 0x10, 0x6C, 0x23, 0x8A, 0xBF,
	0xFC, 0xF3, 0x0D, 0x10, 0x6D, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x6E, 0x27, 0x97, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x6F, 0x23, 0xAA, 0x91,
	0xFC, 0xF3, 0x0D, 0x10, 0x70, 0x93, 0xFC, 0xFA,
	0xFC, 0xF3, 0x0D, 0x10, 0x71, 0x83, 0x80, 0x30,
	0xFC, 0xF3, 0x0D, 0x10, 0x72, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x73, 0x18, 0x3E, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x74, 0x80, 0x7A, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x75, 0x19, 0x07, 0xE2,
	0xFC, 0xF3, 0x0D, 0x10, 0x76, 0x23, 0x3E, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x77, 0x0D, 0x00, 0xEA,
	0xFC, 0xF3, 0x0D, 0x10, 0x78, 0x80, 0x7B, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x79, 0x38, 0x7E, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x7A, 0x1C, 0x76, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x7B, 0x90, 0x7B, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x7C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x7D, 0x19, 0x75, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x7E, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x7F, 0x19, 0x75, 0x9F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA0, 0x91, 0xCB,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB0, 0x50, 0x1A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0x82, 0xF3,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x02, 0xF5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA2, 0x82, 0xB5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB2, 0x50, 0x1F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA3, 0x83, 0xF4,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB3, 0x50, 0x2A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA4, 0x96, 0x66,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB4, 0x50, 0x3B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA5, 0x82, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB5, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA6, 0xC2, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB6, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA7, 0xC2, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB7, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA8, 0x82, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB8, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA9, 0x82, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB9, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAA, 0xC2, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBA, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAB, 0x82, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBB, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAC, 0xC2, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBC, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAD, 0x83, 0xE8,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBD, 0x50, 0x6B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAE, 0x97, 0x58,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBE, 0x50, 0x74,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x05,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x29,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x5F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x81,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x01, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0xF0, 0xF0,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x44,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x8A, 0x94,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x01, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x06, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x3C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x0A,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xD2, 0x00, 0x32,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

static const u8 TF201_enable_NS[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x01
};

static const u8 TF201_disable_NS[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x00, 0x10
};

/* TF700T section */
static const u8 TF700T_input_parameter[] = {
	0xC0,
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x01, 0x82, 0x30, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x02, 0x27, 0x90, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x03, 0x19, 0x00, 0xA0,
	0xFC, 0xF3, 0x0D, 0x10, 0x04, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x05, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x06, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x07, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x08, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x09, 0x19, 0x01, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0A, 0x27, 0x90, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0B, 0x19, 0x01, 0x10,
	0xFC, 0xF3, 0x0D, 0x10, 0x0C, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x0D, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0E, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0F, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x10, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x11, 0x82, 0x2D, 0x20,
	0xFC, 0xF3, 0x0D, 0x10, 0x12, 0x27, 0x98, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x13, 0x19, 0x01, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x14, 0x80, 0x50, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x15, 0x90, 0x50, 0x3A,
	0xFC, 0xF3, 0x0D, 0x10, 0x16, 0x80, 0x50, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x17, 0x90, 0x50, 0x4F,
	0xFC, 0xF3, 0x0D, 0x10, 0x18, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x19, 0x19, 0x00, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1A, 0x80, 0x00, 0xAC,
	0xFC, 0xF3, 0x0D, 0x10, 0x1B, 0x26, 0x7C, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x1D, 0x19, 0x1D, 0x82,
	0xFC, 0xF3, 0x0D, 0x10, 0x1E, 0x19, 0x1C, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x1F, 0x80, 0x53, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x20, 0x93, 0xE2, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x21, 0x80, 0x4F, 0xBA,
	0xFC, 0xF3, 0x0D, 0x10, 0x22, 0x22, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x23, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x24, 0x18, 0x2F, 0xD0,
	0xFC, 0xF3, 0x0D, 0x10, 0x25, 0x94, 0x4F, 0xB6,
	0xFC, 0xF3, 0x0D, 0x10, 0x26, 0x80, 0x4F, 0x6A,
	0xFC, 0xF3, 0x0D, 0x10, 0x27, 0x26, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x28, 0x18, 0x2F, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x29, 0x18, 0x2B, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x2A, 0x95, 0x62, 0x06,
	0xFC, 0xF3, 0x0D, 0x10, 0x2B, 0x95, 0x61, 0x46,
	0xFC, 0xF3, 0x0D, 0x10, 0x2C, 0x40, 0xFA, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x2D, 0x40, 0xE5, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x2E, 0x82, 0x30, 0x14,
	0xFC, 0xF3, 0x0D, 0x10, 0x2F, 0x27, 0x00, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x30, 0x22, 0x78, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x31, 0x83, 0xFD, 0x44,
	0xFC, 0xF3, 0x0D, 0x10, 0x32, 0x26, 0xE2, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x33, 0x19, 0x03, 0x90,
	0xFC, 0xF3, 0x0D, 0x10, 0x34, 0x93, 0xFD, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x35, 0x83, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x36, 0x23, 0xA2, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x37, 0x93, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x38, 0x00, 0x00, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x39, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3A, 0x18, 0x3F, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3B, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3C, 0x19, 0x6C, 0xA4,
	0xFC, 0xF3, 0x0D, 0x10, 0x3D, 0x19, 0x66, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3E, 0x80, 0x79, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x3F, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x40, 0x27, 0x97, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x41, 0x19, 0x04, 0x40,
	0xFC, 0xF3, 0x0D, 0x10, 0x42, 0x94, 0x7B, 0xD6,
	0xFC, 0xF3, 0x0D, 0x10, 0x43, 0x80, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x44, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x45, 0x18, 0x48, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x46, 0x38, 0x00, 0x87,
	0xFC, 0xF3, 0x0D, 0x10, 0x47, 0x09, 0x00, 0x1B,
	0xFC, 0xF3, 0x0D, 0x10, 0x48, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x49, 0x18, 0x2D, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4A, 0x18, 0x21, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4B, 0x88, 0x4F, 0x47,
	0xFC, 0xF3, 0x0D, 0x10, 0x4C, 0x82, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x4D, 0x22, 0x62, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4E, 0x26, 0x62, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4F, 0x19, 0x05, 0x25,
	0xFC, 0xF3, 0x0D, 0x10, 0x50, 0x3B, 0xFF, 0xC7,
	0xFC, 0xF3, 0x0D, 0x10, 0x51, 0x19, 0x05, 0x3F,
	0xFC, 0xF3, 0x0D, 0x10, 0x52, 0x0D, 0x01, 0xA6,
	0xFC, 0xF3, 0x0D, 0x10, 0x53, 0x92, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x54, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x55, 0x18, 0x23, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x56, 0x96, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x57, 0x96, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x58, 0x9A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x59, 0x9A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x5A, 0x96, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x5B, 0x38, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x5C, 0x83, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x5D, 0x3B, 0x20, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x5E, 0x36, 0x2B, 0x01,
	0xFC, 0xF3, 0x0D, 0x10, 0x5F, 0x36, 0x2B, 0x60,
	0xFC, 0xF3, 0x0D, 0x10, 0x60, 0x1C, 0x72, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x61, 0x93, 0xFF, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x62, 0x93, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x63, 0x86, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x64, 0x86, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x65, 0x8A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x66, 0x8A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x67, 0x86, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x68, 0x0D, 0x08, 0x28,
	0xFC, 0xF3, 0x0D, 0x10, 0x69, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x6A, 0x18, 0x24, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x6B, 0x83, 0xFC, 0xFA,
	0xFC, 0xF3, 0x0D, 0x10, 0x6C, 0x23, 0x8A, 0xBF,
	0xFC, 0xF3, 0x0D, 0x10, 0x6D, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x6E, 0x27, 0x97, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x6F, 0x23, 0xAA, 0x91,
	0xFC, 0xF3, 0x0D, 0x10, 0x70, 0x93, 0xFC, 0xFA,
	0xFC, 0xF3, 0x0D, 0x10, 0x71, 0x83, 0x80, 0x30,
	0xFC, 0xF3, 0x0D, 0x10, 0x72, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x73, 0x18, 0x3E, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x74, 0x80, 0x7A, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x75, 0x19, 0x07, 0xE2,
	0xFC, 0xF3, 0x0D, 0x10, 0x76, 0x23, 0x3E, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x77, 0x0D, 0x00, 0xEA,
	0xFC, 0xF3, 0x0D, 0x10, 0x78, 0x80, 0x7B, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x79, 0x38, 0x7E, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x7A, 0x1C, 0x76, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x7B, 0x90, 0x7B, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x7C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x7D, 0x19, 0x75, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x7E, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x7F, 0x19, 0x75, 0x9F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA0, 0x91, 0xCB,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB0, 0x50, 0x1A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0x82, 0xF3,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x02, 0xF5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA2, 0x82, 0xB5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB2, 0x50, 0x1F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA3, 0x83, 0xF4,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB3, 0x50, 0x2A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA4, 0x96, 0x66,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB4, 0x50, 0x3B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA5, 0x82, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB5, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA6, 0xC2, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB6, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA7, 0xC2, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB7, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA8, 0x82, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB8, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA9, 0x82, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB9, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAA, 0xC2, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBA, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAB, 0x82, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBB, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAC, 0xC2, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBC, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAD, 0x83, 0xE8,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBD, 0x50, 0x6B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAE, 0x97, 0x58,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBE, 0x50, 0x74,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x05,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x29,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x5F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x81,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x01, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0xF0, 0xF0,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x0E, 0x20,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x44,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x8A, 0x94,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x01, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x06, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x3C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x0A,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x94, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x95, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xD2, 0x00, 0x32,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

static const u8 TF700T_enable_NS[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x08, 0x00
};

static const u8 TF700T_disable_NS[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x00, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x15, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x03
};

/* TF300T section */
static const u8 TF300T_input_parameter[] = {
	0xC0,
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x01, 0x82, 0x30, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x02, 0x27, 0x90, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x03, 0x19, 0x00, 0xA0,
	0xFC, 0xF3, 0x0D, 0x10, 0x04, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x05, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x06, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x07, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x08, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x09, 0x19, 0x01, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0A, 0x27, 0x90, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0B, 0x19, 0x01, 0x10,
	0xFC, 0xF3, 0x0D, 0x10, 0x0C, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x0D, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0E, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0F, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x10, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x11, 0x82, 0x2D, 0x20,
	0xFC, 0xF3, 0x0D, 0x10, 0x12, 0x27, 0x98, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x13, 0x19, 0x01, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x14, 0x80, 0x50, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x15, 0x90, 0x50, 0x3A,
	0xFC, 0xF3, 0x0D, 0x10, 0x16, 0x80, 0x50, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x17, 0x90, 0x50, 0x4F,
	0xFC, 0xF3, 0x0D, 0x10, 0x18, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x19, 0x19, 0x00, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1A, 0x80, 0x00, 0xAC,
	0xFC, 0xF3, 0x0D, 0x10, 0x1B, 0x26, 0x7C, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x1D, 0x19, 0x1D, 0x82,
	0xFC, 0xF3, 0x0D, 0x10, 0x1E, 0x19, 0x1C, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x1F, 0x80, 0x53, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x20, 0x93, 0xE2, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x21, 0x80, 0x4F, 0xBA,
	0xFC, 0xF3, 0x0D, 0x10, 0x22, 0x22, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x23, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x24, 0x18, 0x2F, 0xD0,
	0xFC, 0xF3, 0x0D, 0x10, 0x25, 0x94, 0x4F, 0xB6,
	0xFC, 0xF3, 0x0D, 0x10, 0x26, 0x80, 0x4F, 0x6A,
	0xFC, 0xF3, 0x0D, 0x10, 0x27, 0x26, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x28, 0x18, 0x2F, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x29, 0x18, 0x2B, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x2A, 0x95, 0x62, 0x06,
	0xFC, 0xF3, 0x0D, 0x10, 0x2B, 0x95, 0x61, 0x46,
	0xFC, 0xF3, 0x0D, 0x10, 0x2C, 0x40, 0xFA, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x2D, 0x40, 0xE5, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x2E, 0x82, 0x30, 0x14,
	0xFC, 0xF3, 0x0D, 0x10, 0x2F, 0x27, 0x00, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x30, 0x22, 0x78, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x31, 0x83, 0xFD, 0x44,
	0xFC, 0xF3, 0x0D, 0x10, 0x32, 0x26, 0xE2, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x33, 0x19, 0x03, 0x90,
	0xFC, 0xF3, 0x0D, 0x10, 0x34, 0x93, 0xFD, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x35, 0x83, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x36, 0x23, 0xA2, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x37, 0x93, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x38, 0x00, 0x00, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x39, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3A, 0x18, 0x3F, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3B, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3C, 0x19, 0x6C, 0xA4,
	0xFC, 0xF3, 0x0D, 0x10, 0x3D, 0x19, 0x66, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3E, 0x80, 0x79, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x3F, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x40, 0x27, 0x97, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x41, 0x19, 0x04, 0x40,
	0xFC, 0xF3, 0x0D, 0x10, 0x42, 0x94, 0x7B, 0xD6,
	0xFC, 0xF3, 0x0D, 0x10, 0x43, 0x80, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x44, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x45, 0x18, 0x48, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x46, 0x38, 0x00, 0x87,
	0xFC, 0xF3, 0x0D, 0x10, 0x47, 0x09, 0x00, 0x1B,
	0xFC, 0xF3, 0x0D, 0x10, 0x48, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x49, 0x18, 0x2D, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4A, 0x18, 0x21, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4B, 0x88, 0x4F, 0x47,
	0xFC, 0xF3, 0x0D, 0x10, 0x4C, 0x82, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x4D, 0x22, 0x62, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4E, 0x26, 0x62, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4F, 0x19, 0x05, 0x25,
	0xFC, 0xF3, 0x0D, 0x10, 0x50, 0x3B, 0xFF, 0xC7,
	0xFC, 0xF3, 0x0D, 0x10, 0x51, 0x19, 0x05, 0x3F,
	0xFC, 0xF3, 0x0D, 0x10, 0x52, 0x0D, 0x01, 0xA6,
	0xFC, 0xF3, 0x0D, 0x10, 0x53, 0x92, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x54, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x55, 0x18, 0x23, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x56, 0x96, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x57, 0x96, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x58, 0x9A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x59, 0x9A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x5A, 0x96, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x5B, 0x38, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x5C, 0x83, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x5D, 0x3B, 0x20, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x5E, 0x36, 0x2B, 0x01,
	0xFC, 0xF3, 0x0D, 0x10, 0x5F, 0x36, 0x2B, 0x60,
	0xFC, 0xF3, 0x0D, 0x10, 0x60, 0x1C, 0x72, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x61, 0x93, 0xFF, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x62, 0x93, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x63, 0x86, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x64, 0x86, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x65, 0x8A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x66, 0x8A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x67, 0x86, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x68, 0x0D, 0x08, 0x28,
	0xFC, 0xF3, 0x0D, 0x10, 0x69, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x6A, 0x18, 0x24, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x6B, 0x83, 0xFC, 0xFA,
	0xFC, 0xF3, 0x0D, 0x10, 0x6C, 0x23, 0x8A, 0xBF,
	0xFC, 0xF3, 0x0D, 0x10, 0x6D, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x6E, 0x27, 0x97, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x6F, 0x23, 0xAA, 0x91,
	0xFC, 0xF3, 0x0D, 0x10, 0x70, 0x93, 0xFC, 0xFA,
	0xFC, 0xF3, 0x0D, 0x10, 0x71, 0x83, 0x80, 0x30,
	0xFC, 0xF3, 0x0D, 0x10, 0x72, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x73, 0x18, 0x3E, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x74, 0x80, 0x7A, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x75, 0x19, 0x07, 0xE2,
	0xFC, 0xF3, 0x0D, 0x10, 0x76, 0x23, 0x3E, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x77, 0x0D, 0x00, 0xEA,
	0xFC, 0xF3, 0x0D, 0x10, 0x78, 0x80, 0x7B, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x79, 0x38, 0x7E, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x7A, 0x1C, 0x76, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x7B, 0x90, 0x7B, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x7C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x7D, 0x19, 0x75, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x7E, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x7F, 0x19, 0x75, 0x9F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA0, 0x91, 0xCB,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB0, 0x50, 0x1A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0x82, 0xF3,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x02, 0xF5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA2, 0x82, 0xB5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB2, 0x50, 0x1F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA3, 0x83, 0xF4,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB3, 0x50, 0x2A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA4, 0x96, 0x66,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB4, 0x50, 0x3B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA5, 0x82, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB5, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA6, 0xC2, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB6, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA7, 0xC2, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB7, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA8, 0x82, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB8, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA9, 0x82, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB9, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAA, 0xC2, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBA, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAB, 0x82, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBB, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAC, 0xC2, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBC, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAD, 0x83, 0xE8,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBD, 0x50, 0x6B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAE, 0x97, 0x58,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBE, 0x50, 0x74,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x05,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x29,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x5F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x81,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x01, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0xF0, 0xF0,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x0E, 0x20,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x44,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x8A, 0x94,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x01, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x06, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x3C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x0A,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xD2, 0x00, 0x32,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

/* TF101 section */
static const u8 TF101_input_parameter[] = {
	0xC0,
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x01, 0x82, 0x30, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x02, 0x27, 0x90, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x03, 0x19, 0x00, 0xA0,
	0xFC, 0xF3, 0x0D, 0x10, 0x04, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x05, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x06, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x07, 0x1C, 0x5A, 0xAF,
	0xFC, 0xF3, 0x0D, 0x10, 0x08, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x09, 0x19, 0x01, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0A, 0x27, 0x90, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x0B, 0x19, 0x01, 0x10,
	0xFC, 0xF3, 0x0D, 0x10, 0x0C, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x0D, 0x90, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0E, 0x80, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x0F, 0x1C, 0x58, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x10, 0x90, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x11, 0x82, 0x2D, 0x20,
	0xFC, 0xF3, 0x0D, 0x10, 0x12, 0x27, 0x98, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x13, 0x19, 0x01, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x14, 0x80, 0x50, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x15, 0x90, 0x50, 0x3A,
	0xFC, 0xF3, 0x0D, 0x10, 0x16, 0x80, 0x50, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x17, 0x90, 0x50, 0x4F,
	0xFC, 0xF3, 0x0D, 0x10, 0x18, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x19, 0x19, 0x00, 0x6F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1A, 0x80, 0x00, 0xAC,
	0xFC, 0xF3, 0x0D, 0x10, 0x1B, 0x26, 0x7C, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x1C, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x1D, 0x19, 0x1D, 0x82,
	0xFC, 0xF3, 0x0D, 0x10, 0x1E, 0x19, 0x1C, 0xEF,
	0xFC, 0xF3, 0x0D, 0x10, 0x1F, 0x80, 0x53, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x20, 0x93, 0xE2, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x21, 0x80, 0x4F, 0xBA,
	0xFC, 0xF3, 0x0D, 0x10, 0x22, 0x22, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x23, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x24, 0x18, 0x2F, 0xD0,
	0xFC, 0xF3, 0x0D, 0x10, 0x25, 0x94, 0x4F, 0xB6,
	0xFC, 0xF3, 0x0D, 0x10, 0x26, 0x80, 0x4F, 0x6A,
	0xFC, 0xF3, 0x0D, 0x10, 0x27, 0x26, 0x7A, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x28, 0x18, 0x2F, 0x80,
	0xFC, 0xF3, 0x0D, 0x10, 0x29, 0x18, 0x2B, 0xCF,
	0xFC, 0xF3, 0x0D, 0x10, 0x2A, 0x95, 0x62, 0x06,
	0xFC, 0xF3, 0x0D, 0x10, 0x2B, 0x95, 0x61, 0x46,
	0xFC, 0xF3, 0x0D, 0x10, 0x2C, 0x40, 0xFA, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x2D, 0x40, 0xE5, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x2E, 0x82, 0x30, 0x14,
	0xFC, 0xF3, 0x0D, 0x10, 0x2F, 0x27, 0x00, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x30, 0x22, 0x78, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x31, 0x83, 0xFD, 0x44,
	0xFC, 0xF3, 0x0D, 0x10, 0x32, 0x26, 0xE2, 0x0F,
	0xFC, 0xF3, 0x0D, 0x10, 0x33, 0x19, 0x03, 0x90,
	0xFC, 0xF3, 0x0D, 0x10, 0x34, 0x93, 0xFD, 0x4A,
	0xFC, 0xF3, 0x0D, 0x10, 0x35, 0x83, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x36, 0x23, 0xA2, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x37, 0x93, 0xFD, 0x5A,
	0xFC, 0xF3, 0x0D, 0x10, 0x38, 0x00, 0x00, 0x00,
	0xFC, 0xF3, 0x0D, 0x10, 0x39, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3A, 0x18, 0x3F, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3B, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x3C, 0x19, 0x6C, 0xA4,
	0xFC, 0xF3, 0x0D, 0x10, 0x3D, 0x19, 0x66, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x3E, 0x80, 0x79, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x3F, 0x82, 0x2D, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x40, 0x27, 0x97, 0x9F,
	0xFC, 0xF3, 0x0D, 0x10, 0x41, 0x19, 0x04, 0x40,
	0xFC, 0xF3, 0x0D, 0x10, 0x42, 0x94, 0x7B, 0xD6,
	0xFC, 0xF3, 0x0D, 0x10, 0x43, 0x80, 0x00, 0x1A,
	0xFC, 0xF3, 0x0D, 0x10, 0x44, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x45, 0x18, 0x48, 0xDF,
	0xFC, 0xF3, 0x0D, 0x10, 0x46, 0x38, 0x00, 0x87,
	0xFC, 0xF3, 0x0D, 0x10, 0x47, 0x09, 0x00, 0x1B,
	0xFC, 0xF3, 0x0D, 0x10, 0x48, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x49, 0x18, 0x2D, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4A, 0x18, 0x21, 0x5F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4B, 0x88, 0x4F, 0x47,
	0xFC, 0xF3, 0x0D, 0x10, 0x4C, 0x82, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x4D, 0x22, 0x62, 0x1F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4E, 0x26, 0x62, 0x7F,
	0xFC, 0xF3, 0x0D, 0x10, 0x4F, 0x19, 0x05, 0x25,
	0xFC, 0xF3, 0x0D, 0x10, 0x50, 0x3B, 0xFF, 0xC7,
	0xFC, 0xF3, 0x0D, 0x10, 0x51, 0x19, 0x05, 0x3F,
	0xFC, 0xF3, 0x0D, 0x10, 0x52, 0x0D, 0x01, 0xA6,
	0xFC, 0xF3, 0x0D, 0x10, 0x53, 0x92, 0x2A, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x54, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x55, 0x18, 0x23, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x56, 0x96, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x57, 0x96, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x58, 0x9A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x59, 0x9A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x5A, 0x96, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x5B, 0x38, 0x00, 0x0A,
	0xFC, 0xF3, 0x0D, 0x10, 0x5C, 0x83, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x5D, 0x3B, 0x20, 0x02,
	0xFC, 0xF3, 0x0D, 0x10, 0x5E, 0x36, 0x2B, 0x01,
	0xFC, 0xF3, 0x0D, 0x10, 0x5F, 0x36, 0x2B, 0x60,
	0xFC, 0xF3, 0x0D, 0x10, 0x60, 0x1C, 0x72, 0x2F,
	0xFC, 0xF3, 0x0D, 0x10, 0x61, 0x93, 0xFF, 0x9A,
	0xFC, 0xF3, 0x0D, 0x10, 0x62, 0x93, 0xFF, 0xAA,
	0xFC, 0xF3, 0x0D, 0x10, 0x63, 0x86, 0x2A, 0xA1,
	0xFC, 0xF3, 0x0D, 0x10, 0x64, 0x86, 0x2A, 0xB0,
	0xFC, 0xF3, 0x0D, 0x10, 0x65, 0x8A, 0x2A, 0xCA,
	0xFC, 0xF3, 0x0D, 0x10, 0x66, 0x8A, 0x2A, 0xD7,
	0xFC, 0xF3, 0x0D, 0x10, 0x67, 0x86, 0x2A, 0xE8,
	0xFC, 0xF3, 0x0D, 0x10, 0x68, 0x0D, 0x08, 0x28,
	0xFC, 0xF3, 0x0D, 0x10, 0x69, 0x34, 0x00, 0x0E,
	0xFC, 0xF3, 0x0D, 0x10, 0x6A, 0x18, 0x24, 0x0F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA0, 0x90, 0x05,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB0, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0x91, 0xCB,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x1A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA2, 0x82, 0xF3,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB2, 0x02, 0xF5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA3, 0x82, 0xB5,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB3, 0x50, 0x1F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA4, 0x83, 0xF4,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB4, 0x50, 0x2A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA5, 0x96, 0x66,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB5, 0x50, 0x3B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA6, 0x84, 0x8C,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB6, 0x50, 0x3E,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA7, 0xC4, 0x8C,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB7, 0x50, 0x3E,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA8, 0x82, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB8, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA9, 0xC2, 0xCC,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB9, 0x50, 0x46,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAA, 0xC2, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBA, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAB, 0x82, 0x10,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBB, 0x50, 0x4A,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAC, 0x82, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBC, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAD, 0xC2, 0x31,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBD, 0x50, 0x4B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAE, 0x82, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBE, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x3F, 0xAF, 0xC2, 0x3F,
	0xFC, 0xF3, 0x3B, 0x3F, 0xBF, 0x50, 0x56,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x05,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x09,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x5F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x81,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x01, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0xF0, 0xF0,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x0E, 0x20,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x44,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x31,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x50,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x00, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x01, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x06, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x3C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x0A,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xD2, 0x00, 0x32,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

static const u8 TF101_enable_NS[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x23, 0x10
};

static const u8 TF101_disable_NS[] = {
	0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x00, 0x10
};

#endif
