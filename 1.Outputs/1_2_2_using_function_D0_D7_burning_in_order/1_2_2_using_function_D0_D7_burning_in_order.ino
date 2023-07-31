/*****************************************************************************
Program Name: Simplifying operations using the for function

Program Purpose: Simplifying the operations we repeat several times in the code by using a function

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

The Arduino and Tinkercad simulation version of the circuit can be found at:

https://www.tinkercad.com/things/kZ4Qno60xDy-121sekiz-ledi-yakip-sondurme-degisken-kullanimi/editel

******************************************************************************/

#include "deneyap.h"
int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // Defining the pins in an array

			   
void setup()
{
  // Execute the function by increasing pins from 0 to 7
  for(int i = 0; i < 8; i++)
  {
    // Set the current content of iPin as output pin
    pinMode(pins[i], OUTPUT); // pinMode(D0, OUTPUT);
  }
}

void loop()
{
  int iTime=100;// Define the iTime variable that sets the delay
  
  // Execute the function by increasing pins from 0 to 7
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(pins[i], HIGH);// Set the current value of iPin to HIGH
    delay(iTime); // Adds a delay of iTime
    digitalWrite(pins[i], LOW);// Set the current value of iPin to LOW
    delay(iTime); // Adds a delay of iTime    
  }
}
