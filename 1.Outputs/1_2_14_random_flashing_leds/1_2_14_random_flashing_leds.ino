/*****************************************************************************
Program Name: Randomly Blinking LEDs

Program Purpose: We enable the LEDs to blink randomly

Author: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelier / 2022

Arduino and Tinkercad simulation version of the circuit:

https://www.tinkercad.com/things/4FPy90bot5P-1214-rastgele-yanip-sonen-ledler/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array

  // We execute the function by increasing the pins from D0 to D7
  for(int i=0;i<8;i++)
  {
    // We assign the current value of iPin as an output pin
    pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  int delayTime=300; // Variable delayTime defining the delay

  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array
  
  int i = random(0,8); // Get a random index in the range of available pins
  
  digitalWrite(pins[i], HIGH); // We make the selected pin logically HIGH
  delay(delayTime); // We provide a delay as long as delayTime

  digitalWrite(pins[i], LOW); // We make the selected pin logically LOW
  delay(delayTime); // We provide a delay as long as delayTime
}
