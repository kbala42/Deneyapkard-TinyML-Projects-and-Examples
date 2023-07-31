/*****************************************************************************
Program Name: Program Obtaining Blue Color Band with Analog Output                                                                                                                                                                                                                                                                              
Program Purpose: Obtaining blue color band with RGB led using analog output

Simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/fODJwAKuHvu-148-rgb-mavi-renk-bandi/editel

******************************************************************************/

#include "deneyap.h"
#include "analogWrite.h"

// Assigning the pins we will use as analog output
void setup() {
  
  // D0 -> Connected to the red LED leg of the RGB LED
  // D1 -> Connected to the green LED leg of the RGB LED
  // D2 -> Connected to the blue LED leg of the RGB LED

  analogWriteChannel(D0);
  analogWriteChannel(D1);
  analogWriteChannel(D2); 

}

void loop() {
  
  for(int iBlue=0;iBlue<256;iBlue++)
  {
    // Obtaining the blue light band
    analogWrite(D0, 0);
    analogWrite(D1, 0);
    analogWrite(D2, iBlue);
    delay(10);// Provide 10 ms delay     
  }
}
