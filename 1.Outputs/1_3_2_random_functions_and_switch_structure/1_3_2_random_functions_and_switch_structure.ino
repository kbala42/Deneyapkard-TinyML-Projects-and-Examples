/*****************************************************************************
Program Name: Using switch structure with random functions

Program Purpose: To learn how to use the switch structure with randomly
                 generated numbers

Written by: Kamil Bala
            kamilbala42@gmail.com
            tw: @tek_elo   
            Yalova Deneyap Atelier / 2022

The simulation version of the circuit on arduino and tinkercad:

https://www.tinkercad.com/things/dd3GX8Fs6Ut-132rastgele-fonksiyonlar-ve-switch-yapisi/editel

******************************************************************************/
int time=200;
int interval=500;


void setup() {
  
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array

  for(int i=7; i>=0; i--)
  {
  	pinMode(pins[i],OUTPUT);
  }

}

void loop() 
{
  int pins[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // We define the pins in an array

	int randomNumber = random (1,12);// We specify a random number between 1 and 12
  
  	switch (randomNumber) // We call the function according to what the random number is
    {
    	case 1:
      		outsideInLightOff(); 
      		delay(interval);
      		break;

        case 2:
      		outsideInLight();// we call the function
  			turnOffAtOnce(); 
      		delay(interval);
      		break;

    	case 3:
 			insideOutLightOff(); 
      		delay(interval);
      		break;

        case 4:
  			insideOutLight();
      		turnOffAtOnce();
      		delay(interval);
      		break;
 
    	case 5:
  			rightToLeftLight(); 
  			turnOffAtOnce(); 
      		delay(interval);
      		break;

        case 6:
			rightToLeftLightOff();  
      		delay(interval);
      		break;

    	case 7:
  			leftToRightLight(); 
  			turnOffAtOnce();  
      		delay(interval);
      		break;

        case 8:
            leftToRightLightOff(); // we call the function
            delay(interval);
      		break;

        case 9:
            rightToLeftLight();// we call the function
            leftToRightTurnOff();// we call the function
            delay(interval);
      		break;
  
        case 10:
      		leftToRightLight();// we call the function
  			rightToLeftTurnOff();// we call the function
  			delay(interval);
      		break;

        case 11:
            insideOutLight();// we call the function
            outsideInTurnOff();// we call the function
            delay(interval);
      		break;
  
        case 12:
            outsideInLight();// we call the function
            insideOutTurnOff();// we call the function
            delay(interval);      		  
      		break;
       
    }

}

// The rest of the functions would be translated in a similar way
