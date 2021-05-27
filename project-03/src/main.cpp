/*
 * Interactive traffic lights
 *
 * McRoberts, M. (2010). Beginning Arduino. Apress.
 * Freeware License, some rights reserved. See `project-03/LICENSE`.
 */

#include <Arduino.h>

int carRed = 12; // assign the car lights
int carYellow = 11;
int carGreen = 10;
int pedRed = 8; // assign the pedestrian lights
int pedGreen = 7;
int button = 9;           // button pin
int crossTime = 5000;     // time allowed to cross
unsigned long changeTime; // time since button pressed

void setup() {
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT);       // button on pin 2
  digitalWrite(carGreen, HIGH); // turn on the green light
  digitalWrite(pedRed, HIGH);
}

void changeLights() {
  digitalWrite(carGreen, LOW);   // green off
  digitalWrite(carYellow, HIGH); // yellow on
  delay(2000);                   // wait 2 seconds

  digitalWrite(carYellow, LOW); // yellow off
  digitalWrite(carRed, HIGH);   // red on
  delay(1000);                  // wait 1 second till its safe

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

  digitalWrite(pedRed, HIGH); // turn pedestrian red on
  delay(500);

  digitalWrite(carYellow, HIGH); // yellow on
  digitalWrite(carRed, LOW);     // red off
  delay(1000);
  digitalWrite(carGreen, HIGH);
  digitalWrite(carYellow, LOW); // yellow off

  changeTime = millis(); // record the time since last change of lights
  // then return to the main program loop
}

void loop() {
  int state = digitalRead(button);
  // check if button is pressed and it is over 5 seconds since last button press
  if (state == HIGH && (millis() - changeTime) > 5000) {
    changeLights(); // call the function to change the lights
  }
}
