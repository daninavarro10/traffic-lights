/* 
TRAFFIC LIGHTS

This second version consists in one traffic light for the pedestrian and another one for the vehicles.
Both traffic light are treated as different. The pedestrians' has 2 led, green and red while the vehicles' has 3 led, red, yellow, green.
At first, the vehicle green light and the pedestrian red light are up for 10 seconds.
Then, the vehicle light switches to yellow while the pedestrian light keeps red.
After 3 seconds, the vehicles light turn red and the pedestrians' turn green for another 10 seconds.
Finally, the green light for pedestrians blink during 5 seconds and the loop starts again.

*/
int buzzerP = 4;
int greenLedP = 6;   // green led for people
int redLedP = 5;      // red led for people
int greenLedV = 11;    // green led for vehicles
int yellowLedV = 10;  // yellow led for vehicles
int redLedV = 9;     // red led for vehicles

void greenLightV(){
  
  digitalWrite(greenLedV, HIGH);   // turn the green LED on (HIGH is the voltage level)
  digitalWrite(yellowLedV, LOW);    // turn the yellow LED off by making the voltage LOW
  digitalWrite(redLedV, LOW);    // turn the red LED off by making the voltage LOW

  digitalWrite(greenLedP, LOW);   // turn the green LED on (HIGH is the voltage level)
  digitalWrite(redLedP, HIGH);    // turn the red LED off by making the voltage LOW
}

void blinkGreenP() {
  int cicles = 0;
  while (cicles < 5) {
    digitalWrite(greenLedP, HIGH);
    tone(buzzerP, 1000); // Send 1KHz sound signal...
    delay(200);
    digitalWrite(greenLedP, LOW);
    noTone(buzzerP);     // Stop sound...
    delay(200);
    cicles ++;
  }
}

void yellowLightV(){
  digitalWrite(greenLedV, LOW);   // turn the green LED off by making the voltage LOW
  digitalWrite(yellowLedV, HIGH);    // turn the yellow LED ofn (HIGH is the voltage level)
  digitalWrite(redLedV, LOW);    // turn the red LED off by making the voltage LOW

  digitalWrite(greenLedP, LOW);   // turn the green LED on (HIGH is the voltage level)
  digitalWrite(redLedP, HIGH);    // turn the red LED off by making the voltage LOW
}

void redLightV(){
  digitalWrite(greenLedV, LOW);   // turn the green LED off by making the voltage LOW
  digitalWrite(yellowLedV, LOW);    // turn the yellow LED off by making the voltage LOW
  digitalWrite(redLedV, HIGH);    // turn the red LED on (HIGH is the voltage level)

  digitalWrite(greenLedP, HIGH);   // turn the green LED on (HIGH is the voltage level)
  digitalWrite(redLedP, LOW);    // turn the red LED off by making the voltage LOW

}

void setup() {

  pinMode(buzzerP, OUTPUT);
  
  pinMode(greenLedP, OUTPUT);
  pinMode(redLedP, OUTPUT);
  
  pinMode(greenLedV, OUTPUT);
  pinMode(yellowLedV, OUTPUT);
  pinMode(redLedV, OUTPUT);
  
}

void loop() {
  greenLightV();
  delay(10000);
  yellowLightV();
  delay(3000);  
  redLightV();
  delay(10000);
  blinkGreenP();
  delay(500);

}
