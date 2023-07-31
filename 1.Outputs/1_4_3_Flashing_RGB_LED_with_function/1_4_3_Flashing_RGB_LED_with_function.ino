/*****************************************************************************
Program Name: Use of function to switch RGB LEDs on and off

Program Purpose: Simplify the digital operation of RGB LEDs 
				with functions


Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelier / 2022

The simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/gKGFkIG87j4-143-rgb-di-yakip-sondurme-fonksiyon/editel

******************************************************************************/
#include "deneyap.h"

// We assign variables for the pins where the LEDs are connected.
int redPin=D0, greenPin=D1, bluePin=D2, time=500;

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop() 
{

  // Call the red led lighting function
  lightRed();  
  delay(time);  
  
  // Call the function to turn off all LEDs
  turnOffRgb();
  delay(time);  
  
  // Call the green led lighting function
  lightGreen();  
  delay(time);   
  
  // Call the function to turn off all LEDs
  turnOffRgb();
  delay(time);
 
  // Call the blue led lighting function
  lightBlue();  
  delay(time);   
  
  // Call the function to turn off all LEDs
  turnOffRgb();
  delay(time); 
  
  // Call the white led lighting function
  lightWhite();  
  delay(time);    

  // Call the function to turn off all LEDs
  turnOffRgb();
  delay(time);  
  
  lightPurple();
  delay(time);
  
  lightTurquoise();
  delay(time);
 
  lightYellow();
  delay(time);  
     
}

  // Function to turn off all LEDs
  void turnOffRgb()
  {
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, LOW);  
    digitalWrite(bluePin, LOW); 
  }
  // Red led lighting function
  void lightRed()
  {
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, LOW);  
    digitalWrite(bluePin, LOW);   
  }
  // Green led lighting function
  void lightGreen()
  {
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, HIGH);  
    digitalWrite(bluePin, LOW);  
  }
  // Blue led lighting function
  void lightBlue()
  {
     // Blue
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin,LOW);  
    digitalWrite(bluePin, HIGH);  
  }
  // White led lighting function
  void lightWhite()
  {
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, HIGH);  
    digitalWrite(bluePin, HIGH);  
  }

void lightYellow()
{  
  // Orange
  digitalWrite(redPin, HIGH);  
  digitalWrite(greenPin, HIGH);  
  digitalWrite(bluePin, LOW);  
}   

void lightPurple()
{
  // Light up PURPLE
  digitalWrite(redPin, HIGH);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, HIGH);  
}

void lightTurquoise()
{
  // Light up Yellow
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, HIGH);  
  digitalWrite(bluePin, HIGH);  
  delay(1000);
}
