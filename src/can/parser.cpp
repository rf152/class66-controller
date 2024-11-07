/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#include "src/can/parser.h"

#include <stdio.h>
#include "pico/stdlib.h"

#include "src/can/protocol.h"
#include "src/display/display.h"

#define MY_ID 0x20


void parse_frame(struct can_frame *canMsg) {
    canid_t id = canMsg->can_id;
    uint16_t node = id & MASK_NODE;
    printf("New frame from ID: %10x\n", id);

    if (node == NODE_CONTROLLERS) {
        uint16_t function = (id & MASK_FUNC);
        if (function == FUNC_SENSOR) {
            printf("Sensor");
            // this is a sensor
            uint8_t offset = 0;
            bool cont = true;
            while (cont) {
                cont = _extract_sensor(canMsg->data, &offset);
            }
        }
    }
}

bool _extract_sensor(uint8_t data[8], uint8_t *offset) {
    uint8_t sensorId;
    uint8_t base = *offset;

    sensorId = data[base];
    *offset += 1;

    if (sensorId == 0x00) return false;

    if (sensorId == 0x51) {
        printf("Sensor 0x51 - Speed\n");
        *offset += 1;
        // This is a capacity
        uint8_t speed = data[base + 1];

        printf("%d\n", speed);
        update_speed(speed);
    }
    if (sensorId == 0x61) {
        printf("Sensor 0x61 - battery capcity\n");
        *offset += 1;
        // This is a capacity
        uint8_t batteryLevel = data[base + 1];

        printf("%d\n", batteryLevel);
        update_locomotive_battery(batteryLevel);
    }
    if (sensorId == 0x30) {
        printf("Sensor 0x30 - main loco brake pressure\n");
        *offset += 1;
        uint8_t pressure = data[base + 1];
        printf("%d \n", pressure);
        update_pressure(pressure);
    }

    if (sensorId == 0xC6) {
        printf("Sensor 0xC6 - direction\n");
        *offset += 1;
        uint8_t direction = data[base + 1];
        printf("%d \n", direction);
        update_direction(direction);
    }
    return true;
}
