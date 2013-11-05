/*
Battery.cpp Library for calculating the voltage supplied by a battery or simply measuring analog voltage
Created by Nour Eldin Ali, November 4,2013

*/

#include "Arduino.h" // if you are NOT using Arduino 1.0 then change "Arduino.h" to "WProgram.h"
#include "Battery.h"

Battery::Battery(int pin)
{
	_pin = pin;
}

void Battery::voltageRead(float* variable)
{
	_variable = variable;
	*_variable = analogRead(_pin) * (5.0/1023.0);
}

float Battery::batteryVoltage(float r1, float r2, float variable)
{
	_rSum = r1 + r2;
	_bVoltage = (_rSum/(r2)) * variable;
	return (_bVoltage);
}
