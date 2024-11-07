/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */
#include <stdio.h>
#include <cstdio>

#include "pico/stdlib.h"
#include "display/display.h"
#include "can/controller.h"

struct repeating_timer displayTimer;

int main() {
    stdio_init_all();

    printf("init\n");


    display_init();
    canbus_init();

    while (1) {
        canbus_check_for_messages();
        display_refresh();
        sleep_ms(10);
    }
}
