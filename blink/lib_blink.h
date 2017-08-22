#ifndef BLINK_H
#define BLINK_H

void blink(int pin, int del){
  digitalWrite(pin, HIGH);
  delay(del);
  digitalWrite(pin, LOW);
  delay(del);
}

void blink_pwm(int pin, int value, int del){
  
}

#endif