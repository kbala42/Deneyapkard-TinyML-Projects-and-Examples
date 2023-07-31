/*****************************************************************************
Program Name: Program showing how RGB LEDs work separately

Program Purpose: Understand how the LEDs that make up the structure of RGB LEDs work


Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelier / 2022

The simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/2VLBEUFsKNB-141-rgb-temel-ayri-uc-ledi-yakip-sondurme/editel 

******************************************************************************/

#include "deneyap.h"

// We make variable assignment for the pins where the LEDs are connected.
int redPin=D0, greenPin=D1, bluePin=D2;

void setup() {
  pinMode(redPin, OUTPUT);// Assign redPin as output
  pinMode(greenPin, OUTPUT);// Assign greenPin as output
  pinMode(bluePin, OUTPUT); // Assign bluePin as output 
}

void loop() {
  //  Light up Red
  digitalWrite(redPin, HIGH);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, LOW);  
  delay(1000);  
  
  // Turn off all
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, LOW);  
  delay(1000);  
  
  // Light up Green
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, HIGH);  
  digitalWrite(bluePin, LOW);  
  delay(1000);  
  
  // Turn off all 
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, LOW);  
  delay(1000); 
  
  // Light up Blue
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, HIGH);  
  delay(1000);  
  
  // Turn off all  
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, LOW);  
  delay(1000);  
  
  // Light up White
  digitalWrite(redPin, HIGH);  
  digitalWrite(greenPin, HIGH);  
  digitalWrite(bluePin, HIGH);  
  delay(1000);   

  // Turn off all 
  digitalWrite(redPin, LOW);  
  digitalWrite(greenPin, LOW);  
  digitalWrite(bluePin, LOW);  
  delay(1000);     
     
}
