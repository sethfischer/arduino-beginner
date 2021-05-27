/*
 * SOS beacon
 *
 * SPDX-License-Identifier: GPL-3.0-only
 */

#include <Arduino.h>

int ledPin = 10; // pin the LED is attached to

void setup() {
  pinMode(ledPin, OUTPUT); // declare LED pin to be an output
}

void loop() {
  // S (...) three dots represents "S"
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPin, HIGH); // turn LED on by setting the pin HIGH
    delay(150);                 // wait for 150ms
    digitalWrite(ledPin, LOW);  // turn LED off by setting the pin LOW
    delay(100);                 // wait for 100ms
  }

  delay(100); // wait for 100ms

  // O(---) three dashes represents "O"
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPin, HIGH); // turn LED on by setting the pin HIGH
    delay(400);                 // wait for 400ms
    digitalWrite(ledPin, LOW);  // turn LED off by setting the pin LOW
    delay(100);                 // wait for 100ms
  }

  delay(100); // wait for 100ms

  // S (...) three dots represents "S"
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPin, HIGH); // turn LED on by setting the pin HIGH
    delay(150);                 // wait for 150ms
    digitalWrite(ledPin, LOW);  // turn LED off by setting the pin LOW
    delay(100);                 // wait for 100ms
  }

  delay(5000); // wait for 5s
}
