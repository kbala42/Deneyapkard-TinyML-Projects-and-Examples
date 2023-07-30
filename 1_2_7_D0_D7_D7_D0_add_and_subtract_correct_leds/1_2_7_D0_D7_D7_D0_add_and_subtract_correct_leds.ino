/*****************************************************************************
Program Name: Program that sequentially lights up LEDs from D0-D7, turns them off from D7-D0,
              then lights up LEDs from D7-D0, and turns them off from D0-D7

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

                                      D7
                                   D6 D7
                                D5 D6 D7
                             D4 D5 D6 D7
                          D3 D4 D5 D6 D7
                       D2 D3 D4 D5 D6 D7
                    D1 D2 D3 D4 D5 D6 D7
                 D0 D1 D2 D3 D4 D5 D6 D7 
                    D1 D2 D3 D4 D5 D6 D7
                       D2 D3 D4 D5 D6 D7
                          D3 D4 D5 D6 D7
                             D4 D5 D6 D7
                                D5 D6 D7
                                   D6 D7
                                      D7


Arduino and Tinkercad simulation version of the circuit:

https://www.tinkercad.com/things/lOVFpNXBg2E-127-6-13-13-6-ledleri-toplayip-cikartan-program/editel

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
  int delayTime=200;// Variable delayTime defining the delay

  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array

  // We sequentially light up all LEDs from D0 to D7
  for(int i=0;i<8;i++)
  {
    digitalWrite(pins[i], HIGH);// We make the current iPin value logically HIGH
    delay(delayTime); // We provide a delay as long as delayTime
  }

  // We turn off all LEDs from D7 to D0
  for(int i=7;i>=0;i--)
  {
    digitalWrite(pins[i], LOW);// We make the current iPin value logically LOW
    delay(delayTime); // We provide a delay as long as delayTime    
  } 

  // We provide a delay between the two functions
  delay(2*delayTime); // We provide a delay as long as 2*delayTime
  
  // We sequentially light up all LEDs from D7 to D0
  for(int i=7;i>=0;i--)
  {
    digitalWrite(pins[i], HIGH);// We make the current iPin value logically HIGH
    delay(delayTime); // We provide a delay as long as delayTime
  }

  // We turn off all LEDs from D0 to D7
  for(int i=0;i<8;i++)
  {
    digitalWrite(pins[i], LOW);// We make the current iPin value logically LOW
    delay(delayTime); // We provide a delay as long as delayTime    
  }  
}
