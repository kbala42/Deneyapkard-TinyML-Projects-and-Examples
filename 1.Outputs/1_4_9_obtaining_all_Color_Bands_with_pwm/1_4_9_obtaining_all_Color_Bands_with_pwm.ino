/*****************************************************************************
Program Name: Program Obtaining All Color Bands with Analog Output                                                                                                                                                                                                                                                                                                                                       
Program Purpose: Obtaining all color bands with RGB led using analog output

Written By: Kamil Bala
       Email: kamilbala42@gmail.com
       Twitter: @tek_elo   
       Yalova Deneyap Workshop / 2022

Simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/f0dKQcMfoh4-149-rgb-tum-renk-bantlari/editel

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
    for(int iGreen=0;iGreen<256;iGreen++)
    {
      for(int iRed=0;iRed<256;iRed++)
      {
        // Obtaining the light in all combinations
        analogWrite(D0, iRed);
        analogWrite(D1, iGreen);
        analogWrite(D2, iBlue);
        delay(1);// Provide 1 ms delay
      }
    }
  }
  delay(1000);// Provide 1000 ms delay 
}
