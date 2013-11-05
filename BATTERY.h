/*
BATTERY.h is a header file for the Battery measurement code
Created by Nour Eldin Ali, November 4, 2013

*/

#ifndef BATTERY_h
#define BATTERY_h

#include "Arduino.h" // if you are NOT using Arduino 1.0 then change Arduino.h to WProgram.h

class Battery
{
	public: 
	 Battery(int pin); // Constructor, used when creating an instance of the class
	 void voltageRead(float* variable); // function #1 "write a description for this function"
	 float batteryVoltage(float r1, float r2, float variable); // function #2  "write a description for this function"
	 
	 private: 
	 int _pin;
	 float _rSum;   // what is the purpose of this variable?
	 float *_variable;   // what is the purpose of this variable?
	 float _bVoltage;   // what is the purpose of this variable?
	 
};

#endif;
