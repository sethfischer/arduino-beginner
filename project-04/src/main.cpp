/*
 * Fading light
 *
 * This example shows how to fade an LED using analogWrite().
 *
 * SPDX-License-Identifier: GPL-3.0-only
 */

#include <Arduino.h>

int ledPin = 10; // pin the LED is attached to

/**
 * Increase brightness
 */
void fadeOn(unsigned int time, int increament) {
  for (byte value = 0; value < 255; value += increament) {
    Serial.println(value);      // print out the brightness value
    analogWrite(ledPin, value); // set the brightness of the LED
    delay(time / (255 / 5));
  }
}

/**
 * Decrease brightness
 */
void fadeOff(unsigned int time, int decreament) {
  for (byte value = 255; value > 0; value -= decreament) {
    Serial.println(value);      // print out the brightness value
    analogWrite(ledPin, value); // set the brightness of the LED
    delay(time / (255 / 5));
  }
}

void setup() {
  pinMode(ledPin, OUTPUT); // declare LED pin to be an output
  Serial.begin(9600);      // initialize serial communication
}

void loop() {
  fadeOn(1000, 3);
  fadeOff(1000, 3);
}
