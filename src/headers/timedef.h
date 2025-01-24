#pragma once

#include <stdint.h>

// Add more here at any point!
#define SecondsPerDay   86400
#define SecondsPerHour  3600

/// @brief 2 32-Bit signed integers. 
// one for time the other for date beginning on 
// Wednesday January 1st 2020 at 00:00 Europe/London
typedef struct{
    int time;
    int date;
}lunartime_t;