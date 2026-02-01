#include <Arduino.h>
#include "main.h"

void setup() {
    Serial.begin(115200);
    while (!Serial) { delay(50); }
}

void loop() {

ButtonPress();
 
}
