/*****************************************************************************
Program Name:  Controlling All Inputs of the Internal RGB LED

Program Purpose: The aim of the program is to control the electrical signal level 
                of the D2, D3, D10 inputs of the internal Common Cathode RGB LED. 
                We're getting the primary colors.

                The internal RGB LED is connected to 3.3V in the motherboard.
                In order for the LED to light up, the cathode must be made low.
                If the cathode is made logically high, the LED turns off.

Written by: Kamil Bala
       kamilbala42@gmail.com       
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(D2, OUTPUT); // D2 pin is set as output
  pinMode(D3, OUTPUT); // D3 pin is set as output
  pinMode(D10, OUTPUT); // D10 pin is set as output
}

void loop()
{
    
  digitalWrite(D2, LOW); 
  digitalWrite(D3, HIGH); 
  digitalWrite(D10, HIGH); 
  delay(1000);  

  digitalWrite(D2, HIGH); 
  digitalWrite(D3, LOW); 
  digitalWrite(D10, HIGH); 
  delay(1000);  

  digitalWrite(D2, HIGH); 
  digitalWrite(D3, HIGH); 
  digitalWrite(D10, LOW); 
  delay(1000);  

  digitalWrite(D2, LOW); 
  digitalWrite(D3, LOW); 
  digitalWrite(D10, HIGH); 
  delay(1000);  

  digitalWrite(D2, HIGH); 
  digitalWrite(D3, LOW); 
  digitalWrite(D10, LOW); 
  delay(1000);  

  digitalWrite(D2, LOW); 
  digitalWrite(D3, HIGH); 
  digitalWrite(D10, LOW); 
  delay(1000);  
  
  digitalWrite(D2, LOW); 
  digitalWrite(D3, LOW); 
  digitalWrite(D10, LOW); 
  delay(1000);  
}
