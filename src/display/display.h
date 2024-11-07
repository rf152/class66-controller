/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#ifndef BG_COLOUR
#define BG_COLOUR ILI9341_WHITE
#endif
#ifndef FG_COLOUR
#define FG_COLOUR ILI9341_BLACK
#endif

void display_init();
void display_refresh();
bool display_timer_tick(__unused struct repeating_timer *t);

void update_speed(uint8_t speed);
void update_locomotive_battery(uint8_t percent);
void update_pressure(uint8_t pressure);
void update_direction(uint8_t direction);

#ifdef __cplusplus
}
#endif
