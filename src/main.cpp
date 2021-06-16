#include <Arduino.h>

void setup() {
  // pinMode(13, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(13, HIGH);
  // delay(1000);
  // digitalWrite(13, LOW);
  // delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(2, LOW);
  delay(1000);
}