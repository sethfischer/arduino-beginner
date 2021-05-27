/*
 * Interactive traffic lights
 *
 * McRoberts, M. (2010). Beginning Arduino. Apress.
 * Freeware License, some rights reserved. See `project-03/LICENSE`.
 */

#include <Arduino.h>

// assign car light pins
int carRed = 12;
int carYellow = 11;
int carGreen = 10;

// assign pedestrian light pins
int pedRed = 8;
int pedGreen = 7;

int button = 9; // button pin

int crossTime = 5000;     // time allowed to cross
unsigned long changeTime; // time since button pressed

/**
 * Control lights
 */
void changeLights() {
  digitalWrite(carGreen, LOW);   // car green off
  digitalWrite(carYellow, HIGH); // car yellow on
  delay(2000);                   // wait 2s

  digitalWrite(carYellow, LOW); // car yellow off
  digitalWrite(carRed, HIGH);   // car red on
  delay(1000);                  // wait 1s until it's safe

  digitalWrite(pedRed, LOW);    // pedestrian red off
  digitalWrite(pedGreen, HIGH); // pedestrian green on
  delay(crossTime);             // wait for preset time period

  // flash the pedestrian green
  for (int x = 0; x < 10; x++) {
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }

  digitalWrite(pedRed, HIGH); // pedestrian red on
  delay(500);

  digitalWrite(carYellow, HIGH); // car yellow on
  digitalWrite(carRed, LOW);     // car red off
  delay(1000);
  digitalWrite(carGreen, HIGH); // car green on
  digitalWrite(carYellow, LOW); // car yellow off

  changeTime = millis(); // record time since last change of lights
}

void setup() {
  // declare LED pins as outputs
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);

  // declare button pin as input
  pinMode(button, INPUT);

  // set initial state of lights
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);
}

void loop() {
  int state = digitalRead(button);
  // if button is pressed and it is over 5s since last button press
  // then change lights
  if (state == HIGH && (millis() - changeTime) > 5000) {
    changeLights();
  }
}
