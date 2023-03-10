/*
blink
The goal of this program is to use the 
digitalWrite command to make the LED blink in
the way that it will turn on for a second 
and turn the LED off for a second, this 
action will be repeated
*/
int redLed=11;   //red LED number pin (11)

void setup() {
  // initialize digital pin redLed as an output.
  pinMode(redLed, OUTPUT);
}

void loop() {
  digitalWrite(redLed, HIGH);// turn the red LED on 
  delay(500);  // wait for half second
  digitalWrite(redLed, LOW); // turn the red LED off 
  delay(500);  // wait for half second
}
