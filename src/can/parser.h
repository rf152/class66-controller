/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once

#include <mcp2515/can.h>


void parse_frame(struct can_frame *canMsg);


bool _extract_sensor(uint8_t data[8], uint8_t *offset);
