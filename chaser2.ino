/*
Light chaser back and forth
The goal of this program will be to make three 
LED’s turn on and off in two directions. The red, green, blue
LED’s will turn on one after the other and then go in reverse
 order. This should look like a back-and-forth motion. This 
 shall be done with the use of the digitalWrite command.  
*/
int redlight= 9;    //red LED on pin 2
int greenlight= 10;  //green LED on pin 3
int bluelight= 11;   //blue LED on pin 4
int yellowLight=12;   //yellow LED on pin 12

void setup() {
  pinMode(redlight, OUTPUT);    //making red LED as output
  pinMode(greenlight, OUTPUT);  //making green LED as output
  pinMode(bluelight, OUTPUT);   //making blue LED as output
  pinMode(yellowLight, OUTPUT); //making yellow LED as output  
}

void loop() {  
digitalWrite(redlight,HIGH);   //turning red LED on
delay(100);  //delay of half second
digitalWrite(redlight,LOW);    //turning red LED off
delay(100);  //delay of half second
/*****************************************/
  digitalWrite(greenlight,HIGH); //turning green LED on
delay(100);  //delay of half second
  digitalWrite(greenlight,LOW);  //turning green LED off
delay(100);  //delay of half second
/*****************************************/
  digitalWrite(bluelight,HIGH); //turning blue LED on
delay(100);  //delay of half second
  digitalWrite(bluelight,LOW);  //turning blue LED off
delay(100); //delay of half second
/*****************************************/
digitalWrite(yellowLight,HIGH); //turning yellow LED on
delay(100);  //delay 
digitalWrite(yellowLight,LOW);  //turning yellow LED off
delay(100);  //delay of half second
/*****************************************/
digitalWrite(bluelight,HIGH); //turning blue LED on
delay(100);  //delay of half second
digitalWrite(bluelight,LOW);  //turning blue LED off
delay(100);  //delay of half second
/*****************************************/
digitalWrite(greenlight,HIGH); //turning green LED on
delay(100);  //delay of half second
digitalWrite(greenlight,LOW);  //turning green LED off
delay(100);  //delay of half second
}
