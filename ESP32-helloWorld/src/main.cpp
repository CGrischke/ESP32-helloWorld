#include<Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println("ESP32 Hello World!");
  Serial.println("Project: ESP32-helloWorld");
}

void loop() {
  Serial.println("Hello from ESP32 ");
  delay(1000);
}