/*
Battery.h is a header file for the Battery measurement code
Created by Nour Eldin Ali, November 4, 2013
modified : 8/11/2013 
*/

#ifndef BATTERY_h
#define BATTERY_h

#include "Arduino.h" // if you are NOT using Arduino 1.0 then change Arduino.h to WProgram.h

class BATTERY
{
	public: 
	 BATTERY(int pin, float maxVolt); // Constructor, used when creating an instance of the class specifying which pin to read from and the max output of the battery required for the calculation
	 float voltageRead(void); // function to read the voltage and return result
	 
	 private: 
	 int _pin; // this will hold the pin to be read from
	 float _max; // this will hold the max output of the used battery(Not Fixed) 
	 
};

#endif;
