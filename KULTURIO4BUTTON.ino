//KULTURIO KIOSK 4 BUTTON CONTROL
//FOR ARDUINO LEONARDO
//JON AB 2024 VESTFOLDMUSEENE IKS
//FOR 1920 x 1080 resolution

#include <Keyboard.h>
#include <Mouse.h>

#define BUTTON_1 1
#define BUTTON_2 2
#define BUTTON_3 3
#define BUTTON_4 4
#define BUTTON_5 5

int state = 1;


void setup()
{
  	pinMode(LED_BUILTIN, OUTPUT);
  	pinMode(1, INPUT);
  	pinMode(2, INPUT);
  	pinMode(3, INPUT);
  	pinMode(4, INPUT);
  	pinMode(5, INPUT);

  	digitalWrite(1, HIGH);
  	digitalWrite(2, HIGH);
  	digitalWrite(3, HIGH);
  	digitalWrite(4, HIGH);
  	digitalWrite(5, HIGH);

  	Keyboard.begin();
  	Mouse.begin();

  	delay(120000); //2 min delay for windows boot and KIO startup
 	digitalWrite(LED_BUILTIN, HIGH);
 
  
//start position
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	Mouse.move(100,100,0);
	delay(1000);
}
 
void loop()
{
  digitalWrite(LED_BUILTIN, LOW);
 
 
/////

//Down right
state = digitalRead(BUTTON_1); //sett "state" variabel til bryter 1
  if(state !=1) //hvis 1...
  {
    digitalWrite(LED_BUILTIN, HIGH);
      //click position
      Mouse.move(-80,-50,0);
      Mouse.move(0,-100,0);
      Mouse.click();
      //returposisjon
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
  }

/////

//Up right
state = digitalRead(BUTTON_2);
  if(state !=1)
  {
    digitalWrite(12, HIGH);
      //click position
      Mouse.move(-80,-50,0);
      Mouse.move(0,-100,0);
      Mouse.move(0,-100,0);
      Mouse.move(0,-100,0);
      Mouse.click();
      //return position
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
  }
 
///// 

//down left
state = digitalRead(BUTTON_3);
  if(state !=1)
  {
    digitalWrite(12, HIGH);
      //click position
      Mouse.move(-80,-50,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(0,-100,0);
      Mouse.click();
      //return position
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
  }
 
/////

//up left  
state = digitalRead(BUTTON_4);
  if(state !=1)
  {
    digitalWrite(12, HIGH);
 
      //click position
      Mouse.move(-80,-50,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(-100,0,0);
      Mouse.move(0,-100,0);
      Mouse.move(0,-100,0);
      Mouse.move(0,-100,0);
      Mouse.click();
      //return position
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
      Mouse.move(100,100,0);
  }

/////

//return/cancel video
state = digitalRead(BUTTON_5);
  if(state !=1)
  {
    digitalWrite(12, HIGH);
    Keyboard.println ("1"); 
  }
 
//////////  
delay(100);  
 
}
