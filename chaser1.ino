/*
Light Chaser one direction
The goal of this program will be to
make three LED’s turn on and off in a singular 
direction. The red, green, blue LED’s will turn 
on one after the other and repeat at the
end. This shall be done with the knowledge of the 
digitalWrite command.  
*/
int redLight = 9;    //red LED on pin 9
int greenLight = 10;  //green LED on pin 10
int blueLight = 11;   //blue LED on pin 11
int yellowLight=12;   //yellow LED on pin 12

void setup() {
  pinMode(redLight, OUTPUT);    //making red LED as output
  pinMode(greenLight, OUTPUT);  //making green LED as output
  pinMode(blueLight, OUTPUT);   //making blue LED as output
  pinMode(yellowLight, OUTPUT); //making yellow LED as output

void loop() { 
digitalWrite(redLight,HIGH);   //turning red LED on
delay(100);  //delay 
digitalWrite(redLight,LOW);    //turning red LED off
delay(100);  //delay 
/*******************************************************/
digitalWrite(greenLight,HIGH); //turning green LED on
delay(100);  //delay 
  digitalWrite(greenLight,LOW);  //turning green LED off
delay(100);  //delay 
/*******************************************************/
digitalWrite(blueLight,HIGH); //turning blue LED on
delay(100);  //delay 
  digitalWrite(blueLight,LOW);  //turning blue LED off
delay(100);  //delay
/*******************************************************/
digitalWrite(yellowLight,HIGH); //turning yellow LED on
delay(100);  //delay 
  digitalWrite(yellowLight,LOW);  //turning yellow LED off
delay(100);  //delay
}
