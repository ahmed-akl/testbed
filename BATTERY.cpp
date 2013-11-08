/*
Battery.cpp Library for calculating the voltage supplied by a battery or simply measuring analog voltage
Created by Nour Eldin Ali, November 4,2013
modified 8/11/2013
*/

#include "Arduino.h" // if you are NOT using Arduino 1.0 then change "Arduino.h" to "WProgram.h"
#include "BATTERY.h"

BATTERY::BATTERY(int pin, float maxVolt) // constructor that accepts the pin to be read from and the battery's max voltage for calculation 
{
	_pin = pin;  // assignning the pin to the private variable
	_max = maxVolt; // assignning the battery's max output to the private variable
}

float BATTERY::voltageRead(void)
{
	
	return(analogRead(_pin) * (_max/1023.0));  // returning the read value
}
