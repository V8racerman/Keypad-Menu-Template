#include <Arduino.h>
#include "setgpio.h"
#include "main.h"
#include "external_variables.h"

void setup() {

    pinMode(DOWN_SW, INPUT);
    pinMode(SELECT_SW, INPUT);
    pinMode(UP_SW, INPUT);
    pinMode(EDIT_SW, INPUT);

    Serial.begin(115200);
    while (!Serial) { delay(50); }
    Serial.println("Setup Complete.");
    Serial.println();
}

void loop() {

ButtonPress();
 
}
