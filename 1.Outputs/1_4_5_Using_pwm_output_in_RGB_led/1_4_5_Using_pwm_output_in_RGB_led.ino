/*****************************************************************************
Program Name: Primary RGB Colors with Analog Output

Program Purpose: Obtain different colors using analog output


Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelier / 2022

The simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/cqCpD0SaXUF-145rgb-led-analog/editel

******************************************************************************/

#include "deneyap.h"
#include "analogWrite.h"

void setup()
{
  // D0 -> Connected to the red LED leg of the RGB LED
  // D1 -> Connected to the green LED leg of the RGB LED
  // D2 -> Connected to the blue LED leg of the RGB LED

  analogWriteChannel(D0);
  analogWriteChannel(D1);
  analogWriteChannel(D2);
  
}

void loop()
{
  // Analog outputs give values 0-255
  
  analogWrite(D0, 255); // Red color
  analogWrite(D1, 0);
  analogWrite(D2, 0);
  delay(1000); // Wait for 1000 millisecond(s)

  analogWrite(D0, 153);
  analogWrite(D1, 153);
  analogWrite(D2, 255);
  delay(1000); // Wait for 1000 millisecond(s)
}
