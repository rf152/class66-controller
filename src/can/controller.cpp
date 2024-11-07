/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#include "src/can/controller.h"

#include <stdio.h>

#include "src/can/parser.h"
#include "mcp2515/can.h"
#include "mcp2515/mcp2515.h"


MCP2515 can0;

void canbus_init() {
    can0 = MCP2515(spi0, 17, 19, 16, 18);
    printf("Reset: %d\n", can0.reset());
    printf("Bitrate: %d\n", can0.setBitrate(CAN_500KBPS, MCP_8MHZ));
    printf("Normal Mode: %d\n", can0.setNormalMode());
}

void canbus_check_for_messages() {
    struct can_frame canMsg;
    if (can0.readMessage(&canMsg) == MCP2515::ERROR_OK) {
        parse_frame(&canMsg);
    }
}
