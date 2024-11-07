/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once

#include "pico/stdlib.h"

#ifdef __cplusplus
extern "C" {
#endif

enum direction {
    STOPPED,
    FORWARD,
    REVERSE
};

void drawControllerBattery(uint8_t percent);
void drawLocomotiveBattery(uint8_t percent);
void drawSpeed(uint8_t speed);
void drawDirection(enum direction direction);
void drawVacuum(uint8_t vacuum);

#ifdef __cplusplus
}
#endif
