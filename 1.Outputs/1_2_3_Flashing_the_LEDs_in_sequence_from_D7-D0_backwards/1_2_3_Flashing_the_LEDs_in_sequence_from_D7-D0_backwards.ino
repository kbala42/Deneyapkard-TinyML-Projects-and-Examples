/*****************************************************************************
Program Name: Program to light up and turn off LEDs in descending order from D7 to D0

Program Purpose: To light up and turn off LEDs in descending order from D7 to D0.

        To get rid of compiler warnings from the previous application,
        the pins array was defined locally

Author: Kamil Bala
        kamilbala42@gmail.com
        tw: @tek_elo   
        Yalova Deneyap Atelier / 2022

Simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/4TanJR2Zo6B-123-13-6-backward-lighting-up-and-turning-off-program/editel

*****************************************************************************/
#include "deneyap.h"
       
void setup()
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // defining the pins as an array

  //From D7 to D0, executing the function by decreasing the pins by 1
  for(int i=7; i >= 0; i--)
  {
    //Setting the current content of iPin as an output pin
    pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // defining the pins as an array

  int iTime=100;// Variable iTime defining the delay

  //From D7 to D0, executing the function by decreasing the pins by 1     
  for(int i=7; i >= 0; i--)
  {
    digitalWrite(pins[i], HIGH);// Making the current iPin value logically HIGH
    delay(iTime); // Providing delay as much as iTime
    digitalWrite(pins[i], LOW);// Making the current iPin value logically LOW
    delay(iTime); // Providing delay as much as iTime   
  }
}
