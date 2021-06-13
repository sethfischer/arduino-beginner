/*
 * Blink
 *
 * Turns on an LED on for one second, then off for one second, repeatedly.
 *
 * SPDX-License-Identifier: GPL-3.0-only
 */

#include <Arduino.h>

int ledPin = 10; // pin the LED is attached to

void setup() {
  pinMode(ledPin, OUTPUT); // declare LED pin to be an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn LED on by setting the pin HIGH
  delay(1000);                // wait for one second
  digitalWrite(ledPin, LOW);  // turn LED off by setting the pin LOW
  delay(1000);                // wait for one second
}
