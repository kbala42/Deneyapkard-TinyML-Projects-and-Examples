/*****************************************************************************
Program Name: User-defined functions

Purpose of the Program: To use the programs we used before within user
                         defined functions. Thus, we will see how much
                         flexibility function usage brings to programming.

Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelyesi / 2022

Simulation version of the circuit on Arduino and Tinkercad:

https://www.tinkercad.com/things/4nuzdfuWXex-131fonksiyonlar/editel

******************************************************************************/

int time=300;
int timeInterval=1000;

void setup() {
  
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins as an array

  for(int i=7; i>=0; i--)
  {
  	pinMode(pins[i],OUTPUT);
  }

}

void loop() 
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins as an array

  lightUpFromOutsideToInsideThenTurnOff(); // We call the function
  
  delay(timeInterval);
  
  lightUpFromOutsideToInside();
  turnOffAtTheSameTime();
  
  delay(timeInterval);
  
  lightUpFromInsideToOutsideThenTurnOff();// We call the function
  
  delay(timeInterval);
  
  lightUpFromInsideToOutside();// We call the function
  turnOffAtTheSameTime();// We call the function
  
  delay(timeInterval);
  
  lightUpFromRightToLeft();// We call the function
  turnOffAtTheSameTime();// We call the function
  
  timeInterval=500;
  
  lightUpFromRightToLeftThenTurnOff(); // We call the function
  
  timeInterval=500;
  
  lightUpFromLeftToRight();// We call the function
  turnOffAtTheSameTime();// We call the function
  
  delay(timeInterval);
  
  lightUpFromLeftToRightThenTurnOff(); // We call the function
  
  delay(timeInterval);
  
  lightUpFromRightToLeft();// We call the function
  turnOffFromLeftToRight();// We call the function
  
  delay(timeInterval);
  
  lightUpFromLeftToRight();// We call the function
  turnOffFromRightToLeft();// We call the function
  
  delay(timeInterval);
  
  lightUpFromInsideToOutside();// We call the function
  turnOffFromOutsideToInside();// We call the function
  
  delay(timeInterval);
  
  lightUpFromOutsideToInside();// We call the function
  turnOffFromInsideToOutside();// We call the function
  
  delay(timeInterval);
}

void lightUpFromOutsideToInsideThenTurnOff() // We define a function that does not return any value
{  
  int j=7;
  for(int i=0; i<4;i++)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(time);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    j--;
  }
  delay(time);
  
}

void lightUpFromOutsideToInside() // We define a function that does not return any value
{
  int j=7;
  for(int i=0; i<4;i++)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(time);
    j--;
  }
}

void lightUpAtTheSameTime() // We define a function that does not return any value
{
  for(int i=7; i>=0; i--)
  {
  	digitalWrite(i,HIGH);
  }
  delay(time);
}

void turnOffAtTheSameTime() // We define a function that does not return any value
{
  for(int i=7; i>=0; i--)
  {
  	digitalWrite(i,LOW);
  }
  delay(time);
}

void lightUpFromInsideToOutsideThenTurnOff() // We define a function that does not return any value
{
  int j=4;
  for(int i=3; i>=0;i--)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(time);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    j++;
  }
}

void lightUpFromInsideToOutside() // We define a function that does not return any value
{
  int j=4;
  for(int i=3; i>=0;i--)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(time);
    j++;
  }
}

void lightUpFromRightToLeft() // We define a function that does not return any value                                                                 
{
  for(int i=7; i>=0; i--)
  {
    
    digitalWrite(i, HIGH);
    delay(time);
  }
}

void lightUpFromRightToLeftThenTurnOff() // We define a function that does not return any value                                                                
{
  for(int i=7; i>=0; i--)
  {    
    digitalWrite(i, HIGH);
    delay(time);
    digitalWrite(i, LOW);
    delay(time);
  }
}

void lightUpFromLeftToRight() // We define a function that does not return any value                                                                
{
  for(int i=0; i<8; i++)
  {
    
    digitalWrite(i, HIGH);
    delay(time);
  }
}

void lightUpFromLeftToRightThenTurnOff() // We define a function that does not return any value                                                                
{
  for(int i=0; i<8; i++)
  {    
    digitalWrite(i, HIGH);
    delay(time);
    digitalWrite(i, LOW);
    delay(time);
  }
}

void turnOffFromLeftToRight() // We define a function that does not return any value                                                                 
{
  for(int i=0; i<8; i++)
  {
    
    digitalWrite(i, LOW);
    delay(time);
  }
}

void turnOffFromRightToLeft() // We define a function that does not return any value                                                                 
{
  for(int i=7; i>=0;i--)
  {
    
    digitalWrite(i, LOW);
    delay(time);
  }
}

void turnOffFromOutsideToInside() // We define a function that does not return any value
{
  int j=7;
  for(int i=0; i<4; i++)
  {
    
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(time);
    j--;
  }
}

void turnOffFromInsideToOutside() // We define a function that does not return any value
{
  int j=4;
  for(int i=3; i>=0; i--)
  {
    
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(time);
    j++;
  }
}
