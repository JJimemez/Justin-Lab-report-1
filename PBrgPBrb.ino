/*
PB off RG on PB on RB on
This program involves three LED’s and a push button. The way the program 
works is when the push button is not pressed the red and green LED will be 
on. When the push button is pressed the green LED will turn off, the blue LED 
will turn on and the red LED will stay on. The goal of the program will be to 
use the if /if else commands as well as the digitaleRead/Write.
*/
int pushButton =8; //push button pin
const int redLed = 9;  //Red Led pin
int greenLed = 10;  //green Led pin
int blueLed = 11;   //Blue Led pin

void setup() {
  pinMode(redLed, OUTPUT); //making red LED as output
  pinMode(greenLed, OUTPUT); //making green LED as output
  pinMode(blueLed, OUTPUT); //making blue LED as output
 pinMode(pushButton, INPUT_PULLUP);
 //making the push button as an input with the use of the built in resistor
}

void loop() {
int buttonState = digitalRead(pushButton); //reading the value of the push button
digitalWrite(redLed,HIGH); //turning red LED on
if (buttonState==HIGH){ //if statement to check if the buttonState value is HIGH
digitalWrite(greenLed,HIGH); //turning green LED on
digitalWrite(blueLed,LOW); //turning blue LED off
} 
else{     //else statement, if the if statement is false this happens
digitalWrite(greenLed,LOW); //turning green LED off
digitalWrite(blueLed,HIGH); //turning blue LED on
}
}
