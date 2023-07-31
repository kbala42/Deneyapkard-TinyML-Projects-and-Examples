/*****************************************************************************
Program Name: Lighting a random LED when a button is pressed

Program Purpose: To learn how to perform random operations when a button is connected

Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelier / 2022

The simulation version of the circuit on arduino and tinkercad:

https://www.tinkercad.com/things/hZh3KGYb39M-133bir-tusa-basinca-rastgele-led-yanip-sondurme/editel 

******************************************************************************/

#include "deneyap.h"
int delayTime=300;

void setup()
{
  pinMode(5, INPUT);
  for(int pin=8; pin<14; pin++)
  {
    pinMode(pin, OUTPUT);
  }

}

void loop()
{
  int pin=random(8,14);
    if(digitalRead(5)==HIGH)
    {// If this is not done, only the first line is included. The others are not seen
  		digitalWrite(pin, HIGH);
      	delay(delayTime);

     	digitalWrite(pin, LOW);
      	delay(delayTime);
    }

}
