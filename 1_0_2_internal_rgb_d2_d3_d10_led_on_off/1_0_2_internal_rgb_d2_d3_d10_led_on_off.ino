/******************************************************************************
Program Name:  Controlling All Inputs of the Internal RGB LED

Program Purpose: To control the common cathode RGB LED by changing the electrical signal levels of 
                 the D2, D3, D10 inputs. We obtain the primary colors.

                 The internal RGB LED is connected to 3.3V in the main card.
                 The LED needs to be set to low at the cathode input to turn on.
                 If the cathode is set to logic high, the LED will turn off.

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo 

******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(D2, OUTPUT); // Assigning D2 pin as output
  pinMode(D3, OUTPUT); // Assigning D3 pin as output
  pinMode(D10, OUTPUT); // Assigning D10 pin as output
}

void loop()
{
  digitalWrite(D2, LOW); // Setting D2 pin to low, which turns on the LED
  delay(1000); // Wait for 1000 ms, which equals to 1s
  digitalWrite(D2, HIGH); // Setting D2 pin to digital high, which turns off the LED
  delay(1000); // Wait for 1000 ms, which equals to 1s

  digitalWrite(D3, LOW); // Setting D3 pin to low, which turns on the LED
  delay(1000); // Wait for 1000 ms, which equals to 1s
  digitalWrite(D3, HIGH); // Setting D3 pin to digital high, which turns off the LED
  delay(1000); // Wait for 1000 ms, which equals to 1s

  digitalWrite(D10, LOW); // Setting D10 pin to low, which turns on the LED
  delay(1000); // Wait for 1000 ms, which equals to 1s
  digitalWrite(D10, HIGH); // Setting D10 pin to digital high, which turns off the LED
  delay(1000); // Wait for 1000 ms, which equals to 1s
}
