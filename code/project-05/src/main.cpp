/*
 * RGB LED
 *
 * SPDX-License-Identifier: GPL-3.0-only
 */

#include <Arduino.h>

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

/**
 * Set the colour of a RGB LED
 */
void colorRGB(int red, int green, int blue) {
  analogWrite(redPin, constrain(red, 0, 255));
  analogWrite(greenPin, constrain(green, 0, 255));
  analogWrite(bluePin, constrain(blue, 0, 255));
}

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // set the LED to a random colour
  colorRGB(random(0, 255), random(0, 255), random(0, 255));
  delay(1000);
}
