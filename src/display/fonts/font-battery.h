/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once
#include <gfx/gfx.h>

const uint8_t BatteryFontBitmaps[] = {
    // '0', 32x16px
    0x7f, 0xff, 0xff, 0xf0, 0xc0, 0x00, 0x00, 0x18, 0x80, 0x00, 0x00, 0x08,
    0x80, 0x00, 0x00, 0x0e, 0x80, 0x00, 0x00, 0x0b, 0x80, 0x00, 0x00, 0x09,
    0x80, 0x00, 0x00, 0x09, 0x80, 0x00, 0x00, 0x09, 0x80, 0x00, 0x00, 0x09,
    0x80, 0x00, 0x00, 0x09, 0x80, 0x00, 0x00, 0x0b, 0x80, 0x00, 0x00, 0x0e,
    0x80, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x08, 0xc0, 0x00, 0x00, 0x18,
    0x7f, 0xff, 0xff, 0xf0,

    // '1', 32x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // '2', 32x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x40, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00,
    0x14, 0xa0, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00,
    0x14, 0xa0, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00, 0x14, 0xa0, 0x00, 0x00,
    0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // '3', 32x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x42, 0x00, 0x00, 0x14, 0xa5, 0x00, 0x00, 0x14, 0xa5, 0x00, 0x00,
    0x14, 0xa5, 0x00, 0x00, 0x14, 0xa5, 0x00, 0x00, 0x14, 0xa5, 0x00, 0x00,
    0x14, 0xa5, 0x00, 0x00, 0x14, 0xa5, 0x00, 0x00, 0x14, 0xa5, 0x00, 0x00,
    0x08, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // '4', 32x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x42, 0x10, 0x00, 0x14, 0xa5, 0x28, 0x00, 0x14, 0xa5, 0x28, 0x00,
    0x14, 0xa5, 0x28, 0x00, 0x14, 0xa5, 0x28, 0x00, 0x14, 0xa5, 0x28, 0x00,
    0x14, 0xa5, 0x28, 0x00, 0x14, 0xa5, 0x28, 0x00, 0x14, 0xa5, 0x28, 0x00,
    0x08, 0x42, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // '5', 32x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x42, 0x10, 0x80, 0x14, 0xa5, 0x29, 0x40, 0x14, 0xa5, 0x29, 0x40,
    0x14, 0xa5, 0x29, 0x40, 0x14, 0xa5, 0x29, 0x40, 0x14, 0xa5, 0x29, 0x40,
    0x14, 0xa5, 0x29, 0x40, 0x14, 0xa5, 0x29, 0x40, 0x14, 0xa5, 0x29, 0x40,
    0x08, 0x42, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    // '6', 32x16px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x80, 0x00,
    0x00, 0x7f, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00,
    0x00, 0x07, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};


const GFXglyph BatteryFontGlyphs[] = {
    {0, 32, 16, 32, 0, 0},         // 0x30 '0'
    {64, 32, 16, 32, 0, 0},         // 0x31 '1'
    {128, 32, 16, 32, 0, 0},         // 0x32 '2'
    {192, 32, 16, 32, 0, 0},         // 0x33 '3'
    {256, 32, 16, 32, 0, 0},         // 0x34 '4'
    {320, 32, 16, 32, 0, 0},         // 0x35 '5'
    {384, 32, 16, 32, 0, 0},         // 0x36 '6'
};

const GFXfont BatteryFont = {(uint8_t *)BatteryFontBitmaps,
                                        (GFXglyph *)BatteryFontGlyphs, 0x30,
                                        0x36, 32};
