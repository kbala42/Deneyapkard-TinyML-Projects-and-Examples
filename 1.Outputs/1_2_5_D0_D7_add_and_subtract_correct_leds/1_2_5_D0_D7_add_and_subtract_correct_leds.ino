/*****************************************************************************
Program Name: Program that sequentially lights up LEDs from D0-D7, then turns them off from D7-D0

Program Purpose: We enable the LEDs to light up and turn off in the following order
                 D0
                 D0 D1
                 D0 D1 D2
                 D0 D1 D2 D3
                 D0 D1 D2 D3 D4
                 D0 D1 D2 D3 D4 D5
                 D0 D1 D2 D3 D4 D5 D6
                 D0 D1 D2 D3 D4 D5 D6 D7
                 D0 D1 D2 D3 D4 D5 D6
                 D0 D1 D2 D3 D4 D5
                 D0 D1 D2 D3 D4
                 D0 D1 D2 D3
                 D0 D1 D2
                 D0 D1
                 D0

Author: Kamil Bala
        kamilbala42@gmail.com
        tw: @tek_elo   
        Yalova Deneyap Workshop / 2022 

Arduino and Tinkercad simulation version of the circuit:

https://www.tinkercad.com/things/jZzmKzxjqVq-125-6-13-ledleri-toplayip-cikartan-program/editel

******************************************************************************/

#include "deneyap.h"
			   
void setup()
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array
  
  // We execute the function by increasing the pins from D0 to D7
  for(int i = 0; i<8; i++)
  {
    // We assign the current value of iPin as an output pin
    pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  int delayTime=500;// Variable delayTime defining the delay

  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array
  
  // We execute the function by increasing the pins from D0 to D7
  // We sequentially light up all LEDs from D0 to D7
  for(int i=0; i<8; i++)
  {
    digitalWrite(pins[i], HIGH);// We make the current iPin value logically HIGH
    delay(delayTime); // We provide a delay as long as delayTime
  }
  // We execute the function by decreasing the pins from D7 to D0
  // We turn off all LEDs from D7 to D0
  for(int i=7; i>=0; i--)
  {
    digitalWrite(pins[i], LOW);// We make the current iPin value logically LOW
    delay(delayTime); // We provide a delay as long as delayTime    
   } 
}
