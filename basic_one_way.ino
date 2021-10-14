/* 
TRAFFIC LIGHTS

This first version is the simplest way to make a traffic lights simulation but will help us to start to know the components of our project. 
Consists in 3 leds, one for each color (green, yellow, red).
We simply procede to switch on and off each led with a 5 seconds pause in between.
It starts with the green led, then the yellow led and finally the red led.
The loop runs forever. 

*/

int greenLed = 9;
int yellowLed = 10;
int redLed = 11;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(greenLed, HIGH);   // turn the green LED on (HIGH is the voltage level)
  delay(5000);                       // wait for five seconds
  digitalWrite(greenLed, LOW);    // turn the green LED off by making the voltage LOW
  delay(100);                       // wait for a millisecond
  digitalWrite(yellowLed, HIGH);   // turn the yellow LED on (HIGH is the voltage level)
  delay(3000);                       // wait for three seconds
  digitalWrite(yellowLed, LOW);    // turn the yellow LED off by making the voltage LOW
  delay(100);                       // wait for a millisecond
  digitalWrite(redLed, HIGH);   // turn the red LED on (HIGH is the voltage level)
  delay(5000);                       // wait for five seconds
  digitalWrite(redLed, LOW);    // turn the red LED off by making the voltage LOW
}

