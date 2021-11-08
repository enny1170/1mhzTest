#include <Arduino.h>
#define LED 9
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  Serial.print("Setup");
  // put your setup code here, to run once:
}

void loop() {
  
  Serial.print("loop\n");
  uint8_t current=digitalRead(LED);
  digitalWrite(LED,!current);
  delay(1000);
  // put your main code here, to run repeatedly:
}