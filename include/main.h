#ifndef main_h
#define main_h
#include "clock_constants.h"
#include "external_variables.h"
#include "keypad.h"
#include "setgpio.h"
#include "domenu.h"
#include "GenUtils.h"

const int flashInterval = 500;         // Alarm flashing interval

char *mode_str[] = {"Daily", "Weekday", "Weekend", "Once"};
char *dow_str[] = {"--", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

States ClockState = ShowClock;
States PrevState = PowerLoss;

#endif