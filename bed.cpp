/*
  bed.cpp - Library for flashing Morse code.
  Created by ....(Actual contributors)...... , November 15, 2013.
  Released into the public domain.
*/

#include "Arduino.h"
#include "bed.h"

bed::bed(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

