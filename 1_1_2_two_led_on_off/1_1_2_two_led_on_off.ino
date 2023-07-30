/*****************************************************************************
Program Name: Sequentially Blinking Two LEDs

Program Purpose: Make two LEDs blink in sequence

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

The Arduino and Tinkercad simulation version of the circuit can be found at:

https://www.tinkercad.com/things/1i670W7r2GX-113iki-ledi-yakip-sondurme/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  // D0 pin is set as output
  pinMode(D0, OUTPUT);
  // D1 pin is set as output
  pinMode(D1, OUTPUT);  
}

void loop()
{
  digitalWrite(D0, HIGH); // D0 pin is set to HIGH
  delay(1000); // Adds a delay of 1000 ms
  digitalWrite(D0, LOW); // D0 pin is set to LOW
  delay(1000); // Adds a delay of 1000 ms
  digitalWrite(D1, HIGH); // D1 pin is set to HIGH
  delay(1000); // Adds a delay of 1000 ms
  digitalWrite(D1, LOW); // D1 pin is set to LOW
  delay(1000); // Adds a delay of 1000 ms
}
