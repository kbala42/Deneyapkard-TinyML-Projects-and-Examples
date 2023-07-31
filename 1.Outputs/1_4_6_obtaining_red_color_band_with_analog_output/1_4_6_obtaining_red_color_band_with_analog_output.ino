/*****************************************************************************
Program Name: Program Obtaining Red Color Band with Analog Output                                                                                                                                               

Program Purpose: Obtaining red color band with RGB led using analog output

Simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/8VyT9WFc7dY-146-analog-cikila-rgb-kirmizi-renk-bant-elde-etmek/editel

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
  
  for(int iRed=0; iRed<256; iRed++)
  {
    // Obtaining the red light band
    analogWrite(D0, iRed);
    analogWrite(D1, 0);
    analogWrite(D2, 0);
    delay(10);// Provide 10 ms delay     
  }
  
}
