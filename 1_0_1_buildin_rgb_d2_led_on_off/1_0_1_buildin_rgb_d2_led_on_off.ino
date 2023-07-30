/******************************************************************************
Program Name:  Turning the Internal RGB LED On and Off

Program Purpose: Turning the common cathode RGB LED on and off by setting the D2 input to LOW, HIGH
                 We will also be conducting a robustness test of the card.

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
}

void loop()
{
  digitalWrite(D2, LOW); // Setting D2 pin to low. This turns on the LED.
  delay(1000); // Wait for 1000 ms. 1000ms = 1s wait
  digitalWrite(D2, HIGH); // Setting D2 pin to digital high, thus turning off the LED
  delay(1000); // Wait for 1000 ms. 1000ms = 1s wait
}
