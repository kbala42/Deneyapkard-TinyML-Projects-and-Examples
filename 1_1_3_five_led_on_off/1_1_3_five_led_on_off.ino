/*****************************************************************************
Program Name: Sequentially Blinking Five LEDs

Program Purpose: To make five LEDs blink in sequence

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

The Arduino and Tinkercad simulation version of the circuit can be found at:

https://www.tinkercad.com/things/g4pYs6HYXp2-114-bes-led-yakip-sondurme/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  // D0 pin is set as output
  pinMode(D0, OUTPUT);
  // D1 pin is set as output  
  pinMode(D1, OUTPUT);
  // D2 pin is set as output  
  pinMode(D2, OUTPUT);
  // D3 pin is set as output  
  pinMode(D3, OUTPUT);
  // D4 pin is set as output  
  pinMode(D4, OUTPUT);
}

void loop()
{
  digitalWrite(D0, HIGH); // D0 pin is set to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D0, LOW); // D0 pin is set to LOW
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D1, HIGH); // D1 pin is set to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D1, LOW); // D1 pin is set to LOW
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D2, HIGH); // D2 pin is set to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D2, LOW); // D2 pin is set to LOW
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D3, HIGH); // D3 pin is set to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D3, LOW); // D3 pin is set to LOW
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D4, HIGH); // D4 pin is set to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D4, LOW); // D4 pin is set to LOW
  delay(300); // Adds a delay of 300 ms
}
