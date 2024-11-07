#include "draw.h"
#include "fonts/FreeSans24pt7b.h"
#include "fonts/FreeSans12pt7b.h"
#include "fonts/font-battery.h"
#include "fonts/font-icons.h"

#include <gfx/gfx.h>
#include <ili9341/ili9341.h>
#include "display.h"
// #define DRAW_BOUNDING


void drawControllerBattery(uint8_t percent) {
    GFX_setFont(&BatteryFont);
    GFX_fillRect(320-37, 5, 32, 16, BG_COLOUR);
    uint16_t colour;
    uint8_t state;
    if (percent == 255)
    {
        state = 6;
    } else if (percent > 80) {
        state = 5;
    } else if (percent > 60) {
        state = 4;
    } else if (percent > 40) {
        state = 3;
    } else if (percent > 20) {
        state = 2;
    } else {
        state = 1;
    }
    if (state == 6) {
         colour = GFX_RGB565(0, 0x99, 0);
    } else if (state == 1) {
         colour = GFX_RGB565(0, 0, 0xFF);
    } else {
         colour = FG_COLOUR;
    }
    GFX_setTextColor(FG_COLOUR);
    GFX_setCursor(320-37, 5);
    GFX_printf("0");
    GFX_setTextColor(colour);
    GFX_setCursor(320-37, 5);
    GFX_printf("%1d", state);
}

void drawLocomotiveBattery(uint8_t percent) {
    GFX_drawRect(20, 50, 60, 170, FG_COLOUR);
    GFX_drawRect(35, 40, 30, 11, FG_COLOUR);
    GFX_fillRect(25, 55, 50, 155, BG_COLOUR);

    uint8_t state;
    if (percent == 255)
    {
        state = 0;
    } else if (percent > 80) {
        state = 5;
    } else if (percent > 60) {
        state = 4;
    } else if (percent > 40) {
        state = 3;
    } else if (percent > 20) {
        state = 2;
    } else {
        state = 1;
    }

    uint16_t colours[] = {
        GFX_RGB565(0, 0, 0xFF),
        GFX_RGB565(0x09, 0xc2, 0xe8),
        GFX_RGB565(0x09, 0xc2, 0xe8),
        GFX_RGB565(0, 0x99, 0),
        GFX_RGB565(0, 0x99, 0),
    };

    for (int i = 0; i < state; i++ )
    {
        GFX_fillRect(25, 220 - (33 * (i + 1)), 50, 28, colours[i]);
    }
}

void drawSpeed(uint8_t speed) {
    GFX_fillRect(100, 70, 220, 100, BG_COLOUR);
    #ifdef DRAW_BOUNDING
    GFX_fillRect(100, 70, 220, 100, GFX_RGB565(0, 0x99, 0));
    #endif
    GFX_setFont(&FreeSans24pt7b);
    GFX_setCursor(110, 130);
    GFX_setTextColor(FG_COLOUR);
    GFX_printf("%d mph", speed);
}

void drawDirection(enum direction direction) {
    GFX_fillRect(100, 180, 20, 30, BG_COLOUR);
    #ifdef DRAW_BOUNDING
    GFX_fillRect(100, 180, 20, 30, GFX_RGB565(0x99, 0, 0));
    #endif
    GFX_setFont(&FreeSans12pt7b);
    GFX_setCursor(100, 200);
    GFX_setTextColor(FG_COLOUR);
    switch (direction)
    {
        case FORWARD:
            GFX_write('F');
            break;
        case REVERSE:
            GFX_write('R');
            break;
        case STOPPED:
            GFX_write('P');
            break;
    }
}

void drawVacuum(uint8_t vacuum) {
    GFX_fillRect(130, 180, 100, 30, BG_COLOUR);
    #ifdef DRAW_BOUNDING
    GFX_fillRect(130, 180, 100, 30, GFX_RGB565(0x99, 0x99, 0));
    #endif
    GFX_setFont(&FreeSans12pt7b);
    GFX_setCursor(130, 200);
    GFX_setTextColor(FG_COLOUR);
    GFX_printf("%d inHg", vacuum);
}