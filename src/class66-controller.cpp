#include "pico/stdlib.h"
#include <stdio.h>
#include "display/display.h"
#include "can/parser.h"

#include <mcp2515/mcp2515.h>

struct repeating_timer displayTimer;

bool timerTick(__unused struct repeating_timer *t)
{
    display_refresh();
    return true;
}

int main()
{
    stdio_init_all();

    MCP2515 can0(spi0, 17, 19, 16, 18);
    printf("init\n");
    
    printf("Reset: %d\n", can0.reset());
    printf("Bitrate: %d\n", can0.setBitrate(CAN_500KBPS, MCP_8MHZ));
    printf("Normal Mode: %d\n", can0.setNormalMode());

    display_init();

    add_repeating_timer_ms(-200, timerTick, NULL, &displayTimer);

    while (1) {
        struct can_frame canMsg;    
        if(can0.readMessage(&canMsg) == MCP2515::ERROR_OK) {
            parseFrame(&canMsg);
        }
        sleep_ms(10);
    }
}