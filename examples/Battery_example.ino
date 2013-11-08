#include <BATTERY.h> // our new library

float readVal; // variable to hold the calculated value



BATTERY bat(0,7.5); // constructor, passing it the desired pin (A0)  and the max output of the battery
void setup ()
{
  analogReference(INTERNAL); // reference to 1.1 Volts
}

void loop ()
{
  readVal = bat.voltageRead( ); // calling the function to read the voltage from the specified pin
  
  /*
  NOTE 
  you can display the result either on a LCD display or the serial monitor, keep in mind if you .. 
  choose the serial monitor option, you have to cut the wires of the USB that supply power to the arduino after uploading
  the sketch; in order not to mess up the readings of the battery itself,and keep..
  only the wires needed for communication .. 
  Refer to : <put the link to final documentation of the library and the code here> for more explanation
  */
  
  delay(2000);
  
}
