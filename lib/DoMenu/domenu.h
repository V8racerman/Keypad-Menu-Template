#ifndef domenu_h
#define domenu_h

#include <Arduino.h>
#include "/home/alan/PlatformIO/Projects/Development/ESP32/Menu template/include/clock_constants.h"
#include "/home/alan/PlatformIO/Projects/Development/ESP32/Menu template/include/external_variables.h"
#include "GenUtils.h"

void Do_PowerLoss(void);
void Do_ShowClock(byte cmd);
void Do_Alarm(byte cmd);
void Do_EditClock(byte cmd);
void Do_EditAlarm(byte alarm, byte cmd);
void ButtonPress(void);

#endif