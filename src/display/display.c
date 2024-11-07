#include <ili9341/ili9341.h>
#include <gfx/gfx.h>
#include "display.h"
#include "draw.h"

uint8_t _speed = 0;
enum direction _direction = STOPPED;
uint8_t _vacuum = 0;
uint8_t _mainBattery = 255;
uint8_t _controllerBattery = 255;

void display_init()
{
    LCD_setPins(7, 9, 12, 18, 19);
    LCD_setSPIperiph(spi0);
    LCD_initDisplay();
    LCD_setRotation(0);
    GFX_createFramebuf();
    GFX_setClearColor(BG_COLOUR);
    GFX_clearScreen();
    GFX_flush();
    display_refresh();
}

void display_refresh()
{
    drawSpeed(_speed);
    drawDirection(_direction);
    drawVacuum(_vacuum);
    drawControllerBattery(_controllerBattery);
    drawLocomotiveBattery(_mainBattery);
    GFX_flush();
}

void update_speed(uint8_t speed)
{
    _speed = speed;
}

void update_locomotive_battery(uint8_t percent)
{
    printf("Update capacity: %d", percent);
    _mainBattery = percent;
}

void update_pressure(uint8_t pressure)
{
    _vacuum = pressure;
}

void update_direction(uint8_t direction)
{
    _direction = direction;
}