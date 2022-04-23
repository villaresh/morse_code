/* Created on 2022
 *  Last modification: 21st April 2022
 */
const int ledPin = 5;           // LED connected to pin number 5

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //S -> ... (3 dots)
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
  delay(500);
  //O -> --- (3 dashes)
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
  delay(500);
  //S -> ... (3 dots)
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  }
