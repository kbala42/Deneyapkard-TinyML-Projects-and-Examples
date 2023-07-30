/*****************************************************************************
Program Name: Sequentially Blinking Eight LEDs

Program Purpose: To make eight LEDs blink in sequence

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

The Arduino and Tinkercad simulation version of the circuit can be found at:

https://www.tinkercad.com/things/hNevPVMkzQI-115-sekiz-ledi-yakip-sondurme/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  
  // Set D0 pin as output
  pinMode(D0, OUTPUT);
  // Set D1 pin as output  
  pinMode(D1, OUTPUT);
  // Set D2 pin as output  
  pinMode(D2, OUTPUT);
  // Set D3 pin as output  
  pinMode(D3, OUTPUT);
  // Set D4 pin as output  
  pinMode(D4, OUTPUT);
  // Set D5 pin as output  
  pinMode(D5, OUTPUT);    
  // Set D6 pin as output  
  pinMode(D6, OUTPUT);
  // Set D7 pin as output  
  pinMode(D7, OUTPUT);  

}

void loop()
{
  
  digitalWrite(D0, HIGH); // Set D0 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D0, LOW); // Set D0 pin to LOW
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D1, HIGH); // Set D1 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D1, LOW); // Set D1 pin to LOW
  delay(300); // Adds a delay of 300 ms

  digitalWrite(D2, HIGH); // Set D2 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D2, LOW); // Set D2 pin to LOW
  delay(300); // Adds a delay of 300 ms

  digitalWrite(D3, HIGH); // Set D3 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D3, LOW); // Set D3 pin to LOW
  delay(300); // Adds a delay of 300 ms

  digitalWrite(D4, HIGH); // Set D4 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D4, LOW); // Set D4 pin to LOW
  delay(300); // Adds a delay of 300 ms
  
  digitalWrite(D5, HIGH); // Set D5 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D5, LOW); // Set D5 pin to LOW
  delay(300); // Adds a delay of 300 ms  

  digitalWrite(D6, HIGH); // Set D6 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D6, LOW); // Set D6 pin to LOW
  delay(300); // Adds a delay of 300 ms  
  
  digitalWrite(D7, HIGH); // Set D7 pin to HIGH
  delay(300); // Adds a delay of 300 ms
  digitalWrite(D7, LOW); // Set D7 pin to LOW
  delay(300); // Adds a delay of 300 ms  

}
