/*
RGB chaser one direction
The goal of this program will be to use a RGB 
LED, creating a program to turn it on with different colors 
in a forward motion. The RGB LED will be able to demonstarte 
more colours then just red, green, blue and then 
repeat them. This program will help with the 
digitalWrite command, but it will help with getting to 
know the RGB LED .  
*/
int redLight = 2;    //red RGB on pin 2
int greenLight = 3;  //green RGB on pin 3
int blueLight = 4;   //blue RGB on pin 4

void setup() {
  pinMode(redLight, OUTPUT);    //making red RGB as output
  pinMode(greenLight, OUTPUT);  //making green RGB as output
  pinMode(blueLight, OUTPUT);   //making blue RGB as output
}

void loop() {
digitalWrite(redLight,HIGH);   //turning red LED on
digitalWrite(greenLight,HIGH); //turning green LED on
//makes yellow
delay(100);  //delay milli seconds
digitalWrite(redLight,LOW);    //turning red LED off
digitalWrite(greenLight,LOW);  //turning green LED off
delay(100);  //delay milli seconds
/****************************************************/
digitalWrite(greenLight,HIGH); //turning green LED on
digitalWrite(blueLight,HIGH); //turning blue LED on
//makes turquoise
delay(100);  //delay milli seconds
digitalWrite(greenLight,LOW);  //turning green LED off
digitalWrite(blueLight,LOW);  //turning blue LED off
delay(100);  //delay milli seconds
/***************************************************/
digitalWrite(blueLight,HIGH); //turning blue LED on
digitalWrite(redLight,HIGH);   //turning red LED on
//makes purple
delay(100);  //delay milli seconds
digitalWrite(blueLight,LOW);  //turning blue LED off
digitalWrite(redLight,LOW);    //turning red LED off
delay(100); //delay milli seconds
}