/*
Battery.h is a header file for the Battery measurement code
Created by Nour Eldin Ali, November 4, 2013

*/

#ifndef Battery_h
#define Battery_h

#include "Arduino.h" // if you are NOT using Arduino 1.0 then change Arduino.h to WProgram.h

class Battery
{
	public: 
	 Battery(int pin); // Constructor, used when creating an instance of the class
	 void voltageRead(float* variable); // function #1 
	 float batteryVoltage(float r1, float r2, float variable); // function #2
	 
	 private: 
	 int _pin;
	 float _rSum;
	 float *_variable;
	 float _bVoltage;
	 
};

#endif;
