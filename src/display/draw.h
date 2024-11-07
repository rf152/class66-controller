#ifndef C66_DRAW_H
#define C66_DRAW_H
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

#endif //C66_DRAW_H