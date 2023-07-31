/*****************************************************************************
Program Name: Traffic Light Simulation Program

Program Purpose: To simulate the daily usage of traffic lights

Author: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelier / 2022

Arduino and Tinkercad simulation version of the circuit:

https://www.tinkercad.com/things/0atyq61E0pH-13trafik-isiklari/editel

******************************************************************************/

#include "deneyap.h"

void setup() 
{             
  int pins[] = {D0, D1, D2, D3, D4};

  for(int i=0;i<5;i++)
  {
      pinMode(pins[i], OUTPUT); // Assigning current pin as an output
  }  
}
 
void loop() {

  int pins[] = {D0, D1, D2, D3, D4};

  // Assigning pin variables for pedestrians
  int pedestrianGreen=pins[D0], pedestrianRed=pins[D1];

  // Assigning pin variables for vehicles
  int vehicleGreen=pins[D2], vehicleYellow=pins[D3], vehicleRed=pins[D4];
  
  // Green for pedestrians
  
  digitalWrite(vehicleRed, HIGH); // Ignite red for vehicles   
  digitalWrite(pedestrianGreen, HIGH); // Ignite green for pedestrians  
  digitalWrite(pedestrianRed, LOW); // Switch off red for pedestrians  
  digitalWrite(vehicleYellow, LOW); // Switch off yellow for vehicles    
  delay(5000); // Delay for 5 seconds (5000ms)
  
  // Red for pedestrians, Yellow for vehicles
  
  digitalWrite(vehicleRed, LOW); // Switch off red for vehicles    
  digitalWrite(pedestrianGreen, LOW); // Switch off green for pedestrians      
  digitalWrite(vehicleYellow, HIGH); // Ignite yellow for vehicles   
  digitalWrite(pedestrianRed, HIGH); // Ignite red for pedestrians   
  delay(2000); // Delay for 2 seconds (2000ms)
  
  // Free pass for vehicles
  
  digitalWrite(vehicleYellow, LOW); // Switch off yellow for vehicles   
  digitalWrite(vehicleGreen, HIGH); // Ignite green for vehicles
  delay(10000); // Delay for 10 seconds (10000ms)
  
  // Yellow for vehicles to stop 
  
  digitalWrite(vehicleGreen, LOW); // Switch off green for vehicles
  digitalWrite(vehicleYellow, HIGH); // Ignite yellow for vehicles  
  delay(2000); // Delay for 2 seconds (2000ms)
}
