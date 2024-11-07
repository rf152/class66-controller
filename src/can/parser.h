#ifndef C66_CAN_PARSER_H
#define C66_CAN_PARSER_H

#include <mcp2515/can.h>


void parseFrame(struct can_frame *canMsg);
void parseBatteryFrame(struct can_frame *frame);


bool _extractSensor(uint8_t data[8], uint8_t *offset);


#endif //C66_CAN_PARSER_H