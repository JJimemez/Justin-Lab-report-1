/*
Pull Up resister PB
The program will help with the understanding of the serial 
commands (begin, print, println) and the digitalRead 
command. Using an external push button with a pull up resistor 
as an input, use the digital read command to be able to send this 
information to the serial monitor where using Serial.Print or 
Serial.println to display the results. 
*/
int pushButton=10;   //location of pin number for Push button

void setup() {
Serial.begin(9600);  //set the Arduino speed for serial
pinMode(pushButton, INPUT); //setting the pushButton into an input
}

void loop() {
int buttonState =digitalRead(pushButton); 
//creating a variable to be able to read the information from the push button
Serial.print("button value="); //this will print the word "button value" in the serial monitor
Serial.println(!buttonState); 
//this will print the inverted value of the push button on the serial monitor
}
