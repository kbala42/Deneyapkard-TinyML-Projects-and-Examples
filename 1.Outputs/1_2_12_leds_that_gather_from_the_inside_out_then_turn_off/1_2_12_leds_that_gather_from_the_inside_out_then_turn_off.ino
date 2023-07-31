/*****************************************************************************
Program Name: Program that lights up LEDs by adding from inside to outside and then extinguishes from outside to inside

Program Purpose: We enable the LEDs to light up and turn off in the following order
                         D3 D4  
                      D2 D3 D4 D5  
                   D1 D2 D3 D4 D5 D6 
                D0 D1 D2 D3 D4 D5 D6 D7 
                   D1 D2 D3 D4 D5 D6    
                      D2 D3 D4 D5 
                         D3 D4               

Author: Kamil Bala
        kamilbala42@gmail.com
        tw: @tek_elo   
        Yalova Deneyap Atelier / 2022

Arduino and Tinkercad simulation version of the circuit:

https://www.tinkercad.com/things/ayTvYngCHEl-1212-icten-disa-dogru-toplayip-distan-iceri-sonen-ledler/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array

  // We execute the function by increasing the pins from D0 to D7
  for(int i=0;i<8;i++)
  {
    // We assign the current value of iPin as an output pin
    pinMode(pins[i], OUTPUT);
  }

}

void loop()
{
  int delayTime=200;// Variable delayTime defining the delay

  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array

  int j=3; // We define the starting value for the second LED

  for(int i=4;i<8;i++)
  {
    digitalWrite(pins[i], HIGH);// We make the current iPin value logically HIGH
    digitalWrite(pins[j], HIGH);// We make the current iPinTwo value logically HIGH
    delay(delayTime); // We provide a delay as long as delayTime
    j--;// We decrease the current value of iPinTwo by one
  }
  
  delay(2*delayTime); // We provide a delay as long as delayTime  
  
  j=3;
  for(int i=7;i>3;i--)
  {
    digitalWrite(pins[i], LOW);// We make the current iPin value logically LOW
    digitalWrite(pins[j], LOW);// We make the current iPinTwo value logically LOW
    delay(delayTime); // We provide a delay as long as delayTime
    j++;// We increase the current value of iPinTwo by one
  } 
  delay(2*delayTime); // We provide a delay as long as delayTime
}
