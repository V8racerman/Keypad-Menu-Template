#ifndef GenUtils_H
#define GenUtils_H
#include <Arduino.h>
#include "/home/alan/PlatformIO/Projects/Development/ESP32/Menu template/include/keypad.h"
#include "/home/alan/PlatformIO/Projects/Development/ESP32/Menu template/include/setgpio.h"

void toggleLED(bool ledON, byte my_led);
byte acd_key_press(void);

#endif