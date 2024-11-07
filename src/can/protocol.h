#ifndef C66_PROTOCOL_H
#define C66_PROTOCOL_H

#define MASK_FUNC               0x0700

#define FUNC_EMCY               0x0100
#define FUNC_SENSOR             0x0200
#define FUNC_ACTUATOR           0x0300
#define FUNC_CONFIG_SET         0x0400
#define FUNC_CONFIG_GET         0x0500
#define FUNC_HBEAT              0x0700

#define MASK_STOCK              0x00C0

#define STOCK_LOCO1             0x0000
#define STOCK_LOCO2             0x0040
#define STOCK_CARRIAGE          0x0080
#define STOCK_BROADCAST         0x00C0

#define MASK_NODE               0x003F

#define NODE_CORE_CONTROLLERS   0x0000
#define NODE_BATTERY            0x0004
#define NODE_LOCO               0x0008
#define NODE_SENSORS            0x0010
#define NODE_CONTROLLERS        0x0020
#define NODE_PROGRAMMING        0x003F

#endif //C66_PROTOCOL_H