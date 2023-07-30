/*****************************************************************************
Program Name: Giving Desired Value by Using a Variable

Program Purpose: To easily change the delay that we repeated 16 times with the desired value using a variable

Written by: Kamil Bala
       kamilbala42@gmail.com
       lnk:https://www.linkedin.com/in/kamil-bala-b4a100b6/
       tw: @tek_elo   

The Arduino and Tinkercad simulation version of the circuit can be found at:

https://www.tinkercad.com/things/kZ4Qno60xDy-121sekiz-ledi-yakip-sondurme-degisken-kullanimi/editel

******************************************************************************/

int iTime=500; // Define the Time variable that sets the delay

void setup()
{
  // Set D0 pin as output
  pinMode(D0, OUTPUT);
  // Set D1 pin as output  
  pinMode(D1, OUTPUT);
  // Set D2 pin as output  
  pinMode(D2, OUTPUT);
  // Set D3 pin as output  
  pinMode(D3, OUTPUT);
  // Set D4 pin as output  
  pinMode(D4, OUTPUT);
  // Set D5 pin as output  
  pinMode(D5, OUTPUT);    
  // Set D6 pin as output  
  pinMode(D6, OUTPUT);
  // Set D7 pin as output  
  pinMode(D7, OUTPUT);  
}

void loop()
{
  digitalWrite(D0, HIGH); // Set D0 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D0, LOW); // Set D0 pin to LOW
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D1, HIGH); // Set D1 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D1, LOW); // Set D1 pin to LOW
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D2, HIGH); // Set D2 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D2, LOW); // Set D2 pin to LOW
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D3, HIGH); // Set D3 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D3, LOW); // Set D3 pin to LOW
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D4, HIGH); // Set D4 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D4, LOW); // Set D4 pin to LOW
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D5, HIGH); // Set D5 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D5, LOW); // Set D5 pin to LOW
  delay(iTime); // Adds a delay of 500 ms  
  digitalWrite(D6, HIGH); // Set D6 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D6, LOW); // Set D6 pin to LOW
  delay(iTime); // Adds a delay of 500 ms  
  digitalWrite(D7, HIGH); // Set D7 pin to HIGH
  delay(iTime); // Adds a delay of 500 ms
  digitalWrite(D7, LOW); // Set D7 pin to LOW
  delay(iTime); // Adds a delay of 500 ms  
}
