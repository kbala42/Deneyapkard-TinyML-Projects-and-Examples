/*****************************************************************************
Program Name: Program that Turns an External LED On and Off

Program Purpose: The program makes the LEDs turn on and off in the order below.

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

The Arduino and Tinkercad simulation version of the circuit can be found at:

https://www.tinkercad.com/things/lzEem5usgcI-112tek-ledi-yakip-sondurme/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(D0, OUTPUT); // D0 pin is set as output
}

void loop()
{
  digitalWrite(D0, HIGH); // D0 pin is set to high, which turns the LED on
  delay(1000); // Waits for 1000 ms, which equals 1 second
  digitalWrite(D0, LOW); // D0 pin is set to low, which turns the LED off
  delay(1000); // Waits for 1000 ms, which equals 1 second
}
