/*
PB white RGB
This program will be focusing on the working with analogRead and the 
workings of the RGB LED. The program will be to make and RGB LED glow white 
when a push button is not pressed  and then when the push button is pressed the RGB 
LED will turn off.
*/
int pushButton =8; //push button pin
int redLed = 9;    //Red Led pin
int greenLed = 10;  //green Led pin
int blueLed = 11;   //Blue Led pin

void setup() {
  pinMode(redLed, OUTPUT);   //making red LED as output
  pinMode(greenLed, OUTPUT); //making green LED as output
  pinMode(blueLed, OUTPUT); //making blue LED as output
 pinMode(pushButton, INPUT_PULLUP);  
 //making the push button as an input with the use of the built in resistor
}

void loop() {
int buttonState = digitalRead(pushButton); //reading the value of the push button
if (buttonState==HIGH){   //if statement to check if the buttonState value is HIGH
analogWrite(redLed, 250);    //red part of RGB setting set to max, turning on
analogWrite(greenLed, 250);  //green part of RGB setting set to max, turning on
analogWrite(blueLed, 250);  //blue part of RGB setting set to max, turning on
}   //making white colour come up
else{   //else statement, if the if statement is false this happens
analogWrite(redLed, 0);    //red part of RGB setting set to minimum, turning off
analogWrite(greenLed, 0); //green part of RGB setting set to minimum, turning off
analogWrite(blueLed, 0); //blue part of RGB setting set to minimum, turning off
}
}
