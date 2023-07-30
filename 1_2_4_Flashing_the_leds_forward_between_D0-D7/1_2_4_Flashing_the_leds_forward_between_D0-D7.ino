/*****************************************************************************
Program Name: Program to sequentially turn on and off LEDs from D7-D0, then D0-D7

Program Purpose: To sequentially turn on and off LEDs in descending order from D7-D0, 
				then in ascending order from D0-D7.

*****************************************************************************/

#include "deneyap.h" // The header file necessary for the Deneyap board program to run

// The setup function is the main function that runs when the circuit is first powered up
// The Deneyap board learns to identify itself and understand which pin will be used for what purpose			   
void setup()
{
  // We define the pins in an array
  // This way, we can access the pin we want
  // for example, pins[0] corresponds to pin D0, pins[5] corresponds to pin D4
  // In computer programming languages, the count starts from 0
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; 

  // We execute the function by decreasing the pins by 1 from D7 to D0
  for(int i=7; i>=0;i--)
  {
    // We assign the current value of iPin as an output pin
    pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  // We define the pins in an array
  // It is defined independently from the previous function
  // Each variable definition stays within the function in which it is defined
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; 

  int delayTime=100;// Variable delayTime defining the delay

  // We execute the function by decreasing the pins by 1 from D7 to D0
  for(int i=7;i>=0;i--)
  {
    digitalWrite(pins[i], HIGH);// We make the current iPin value logically HIGH
    delay(delayTime); // We provide a delay as long as delayTime
    digitalWrite(pins[i], LOW);// We make the current iPin value logically LOW
    delay(delayTime); // We provide a delay as long as delayTime
  }
  
  //delay(1000);// We provide a 1000 ms (1 sec) delay. Optional	
  
  // We execute the function by increasing the pins by 1 from D0 to D7
  for(int i=0;i<8;i++)
  {
    digitalWrite(pins[i], HIGH);// We make the current iPin value logically HIGH
    delay(delayTime); // We provide a delay as long as delayTime
    digitalWrite(pins[i], LOW);// We make the current iPin value logically LOW
    delay(delayTime); // We provide a delay as long as delayTime
  }
  
  //delay(1000);// We provide a 1000 ms (1 sec) delay. Optional	
}
