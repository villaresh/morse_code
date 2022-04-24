/*  Created on 2022
 *  Last modification: 23st April 2022
 *  This code permits to write dots and dashes in a Serial Monitor and it is executed on the LED
 */
int lightPin = 5;           // LED connected to pin number 5

void setup() {
  pinMode(lightPin, OUTPUT);
  digitalWrite(lightPin, LOW);
  Serial.begin(9600);       // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // main code, to run repeatedly
  if (Serial.available()) {
    String input = Serial.readString();
    String morse = filterMorse(input);
    showMorse(morse);
  }
}

String filterMorse(String input) {
  int inputLength = input.length();
  String outputString = "";
// for loop is a control structure used to repeat certain instructions a certain number of times
  for (int i = 0; i < inputLength; i++) {
    char c = input[i];
    if (c == '-' || c == '.') {
      outputString += c;
    }
  }

  return outputString;
}

void showMorse(String morse) {
  int morseLength = morse.length();

  for (int i = 0; i < morseLength; i++) {
    char c = morse[i];

    digitalWrite(lightPin, HIGH);

    if (c == '-') {
      // dash
      delay(1500);
    } else {
      // dot
      delay(500);
    }
    
    digitalWrite(lightPin, LOW);
    delay(500);
  }
}
