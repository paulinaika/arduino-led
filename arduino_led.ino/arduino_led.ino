int ledGreenPin = 0;
int ledYellowPin = 1;
int ledRedPin = 2;

void setup() {
  // setup code here, to run once:
pinMode(ledGreenPin, OUTPUT);
pinMode(ledYellowPin, OUTPUT);
pinMode(ledRedPin, OUTPUT);
}

void loop() {
  // main code here, to run repeatedly:

  //Green light
  digitalWrite(ledGreenPin, HIGH);         // turn the LED on (HIGH is the voltage level)
  delay(500);                             // delay time
  digitalWrite(ledGreenPin, LOW);        // turn the LED off by making the voltage LOW
  delay(500);


  //Yellow light
  digitalWrite(ledYellowPin, HIGH);     // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledYellowPin, LOW);       // turn the LED off by making the voltage LOW
  delay(500);                          // delay time


  //Red light
  digitalWrite(ledRedPin, HIGH);      // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledRedPin, LOW);      // turn the LED off by making the voltage LOW
  delay(500);                       // delay time
}
