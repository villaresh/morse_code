/*  Created on 2022
 *  Last modification: 25th April 2022
 *  This code permits to execute the SOS both on the LED and Buzzer at the same time
 */

const int ledPin = 5;            // LED connected to pin number 5 (D1)
const int pinBuzzer = 4;         // Buzzer connected to pin number 4 (D2)

void setup() {
pinMode(pinBuzzer,OUTPUT);
pinMode(ledPin, OUTPUT);
}

void SOS(int n) {
  tone(pinBuzzer, 440);          // turn the Buzzer on at a frequency of 440 Hz
  digitalWrite(ledPin, HIGH);    // turn the LED on (HIGH is the voltage level)
   delay(n);                     // wait for n seconds
  noTone(pinBuzzer);             // turn the Buzzer off
  digitalWrite(ledPin, LOW);     // turn the LED off by making the voltage LOW
   delay(500);                   // wait for 0.5 seconds
  tone(pinBuzzer, 440);
  digitalWrite(ledPin, HIGH); 
   delay(n);
  noTone(pinBuzzer);
  digitalWrite(ledPin, LOW); 
   delay(500); 
  tone(pinBuzzer, 440);
  digitalWrite(ledPin, HIGH); 
   delay(n);
  noTone(pinBuzzer);
  digitalWrite(ledPin, LOW); 
   delay(500); 
}

void silence (){
  noTone(pinBuzzer);
  digitalWrite(ledPin, LOW); 
   delay(3000);
}
void loop() {
  SOS(500);
  SOS(1500);
  SOS(500);
  silence();
}
