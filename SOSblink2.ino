/* Created on 2022
 *  Last modification: 21st April 2022
 */
const int ledPin = 5;           // LED connected to pin number 5

void setup() {
  pinMode(ledPin, OUTPUT);
}

void S() {
  digitalWrite(ledPin, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(500);       // wait for 0.5 seconds
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);      // wait for 0.5 seconds
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(1500); 
}

void O() {
  digitalWrite(ledPin, HIGH);
  delay(1500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(1500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(1500);
  digitalWrite(ledPin, LOW);
  delay(1500);
}

void silence() {
  digitalWrite(ledPin, LOW);
  delay(2000);
}

void loop() {
  S();
  O();
  S();
  silence();
  }
