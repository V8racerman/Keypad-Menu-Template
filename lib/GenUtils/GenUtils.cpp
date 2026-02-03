  char *key_str[] = {"NOT PRESSED", "DOWN", "UP", "EDIT", "SELECT" };

  #include "GenUtils.h"
  
  void toggleLED(bool ledON = true, byte my_led = 2){
    bool ledState;

    ledState = digitalRead(my_led);                //get the state of LED
    if (ledON == true) {
        digitalWrite(my_led, !ledState);           //do the opposite
    } else {
        digitalWrite(my_led, LOW);
    }
}

byte acd_key_press(void) {

byte key = NOTPRESSED;
byte selected_switch = NOTPRESSED;

  if (digitalRead(SELECT_SW) == LOW) {
    key = SELECT;
    selected_switch = SELECT_SW;
    }
  else if (digitalRead(UP_SW) == LOW){
    key =  UP;
    selected_switch = UP_SW;
    }
  else if (digitalRead(DOWN_SW) == LOW) {
    key = DOWN;
    selected_switch = DOWN_SW;
    }
  else if (digitalRead(EDIT_SW) == LOW){ 
    key = EDIT; 
    selected_switch = EDIT_SW;
    }
  delay(30);
  if (key != NOTPRESSED) { 
    Serial.print("GPIO: "); 
    Serial.print(selected_switch); 
    Serial.print(" Key: "); 
    Serial.println(key_str[key]); 
  }
  while (digitalRead(selected_switch) == LOW) {delay(DebouceTime);}
  
    return (key);
}