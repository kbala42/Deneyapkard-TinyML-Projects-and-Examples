/*****************************************************************************
Program Name: Program demonstrating all possible combinations 
              that can be formed in digital operation of RGB LED

Program Purpose: Display colors with all different combinations 
                 to be applied to the legs of RGB LEDs


Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelier / 2022

The simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/b88rjbaLgzf-144-rgb-dijital-tum-renkler/editel

******************************************************************************/
#include "deneyap.h"
// We assign variables for the pins where the LEDs are connected.
int redPin=D0, greenPin=D1, bluePin=D2;

int delayTime=100;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop() {

  // Call the red LED lighting function
  lightRed();  
  delay(delayTime);  
  
  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime);  
  
  // Call the green LED lighting function
  lightGreen();  
  delay(delayTime);  
  
  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime);
 
  // Call the blue LED lighting function
  lightBlue();  
  delay(delayTime);   
  
  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime); 
  
  // Call the white LED lighting function
  lightWhite();  
  delay(1000);    

  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime); 
  
  // Call the purple LED lighting function
  lightPurple();  
  delay(delayTime);   

  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime);
  
  // Call the turquoise LED lighting function
  lightTurquoise();  
  delay(delayTime);

  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime);
  
  // Call the yellow LED lighting function
  lightYellow();  
  delay(delayTime);  

  // Call the function to turn off all LEDs 
  turnOffRgb();
  delay(delayTime);
}

  // Function to turn off all LEDs
  void turnOffRgb()
  {
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, LOW);  
    digitalWrite(bluePin, LOW); 
  }
  // Red LED lighting function
  void lightRed()
  {
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, LOW);  
    digitalWrite(bluePin, LOW);   
  }
  // Green LED lighting function
  void lightGreen()
  {
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, HIGH);  
    digitalWrite(bluePin, LOW);  
  }
  // Blue LED lighting function
  void lightBlue()
  {
     // Blue
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, LOW);  
    digitalWrite(bluePin, HIGH);  
  }
  // White LED lighting function
  void lightWhite()
  {
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, HIGH);  
    digitalWrite(bluePin, HIGH);  
  }

  // Purple LED lighting function
  void lightPurple()
  {
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, LOW);  
    digitalWrite(bluePin, HIGH);  
  }

  // Turquoise LED lighting function
  void lightTurquoise()
  {
    digitalWrite(redPin, LOW);  
    digitalWrite(greenPin, HIGH);  
    digitalWrite(bluePin, HIGH);  
  }
  // Yellow LED lighting function
  void lightYellow()
  {
    digitalWrite(redPin, HIGH);  
    digitalWrite(greenPin, HIGH);  
    digitalWrite(bluePin, LOW);  
  }
