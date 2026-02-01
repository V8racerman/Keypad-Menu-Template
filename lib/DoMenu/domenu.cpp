#include <Arduino.h>
#include "domenu.h"

void Do_PowerLoss(void ) {
    Serial.println("Powerloss function executed");
}

void Do_ShowClock(byte cmd) {
    Serial.println("Showclock function executed");
}

void Do_Alarm(byte cmd) {
    Serial.println("Alarm function executed");
}

void Do_EditClock(byte cmd) {
    Serial.println("EditClock function executed");
}

void Do_EditAlarm(byte alarm, byte cmd) {
    Serial.println("EditAlarm1 function executed");
}


void ButtonPress(void) {
 byte cmd;

  cmd = acd_key_press();
    
    if (cmd != NOTPRESSED) {
    //PowerLoss,ShowClock, Alarm, EditClock, EditAlarm1, EditAlarm2
    switch (ClockState) {
        case PowerLoss:
            Do_PowerLoss();
            break;
        case ShowClock:
            Do_ShowClock(cmd);
            break; 
        case Alarm:
            Do_Alarm(cmd);
            break;
        case EditClock:
            Do_EditClock(cmd);         
            break;
        case EditAlarm1:
            Do_EditAlarm(alarm1, cmd);
            break;
        case EditAlarm2:
            Do_EditAlarm(alarm2, cmd);  
            break;
        default:
            break;
        }
    }
}
