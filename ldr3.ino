/* Created on 2022
 * Last modification: 1st May 2022
 * This code permits to make a LDR blink (which depends on the light) with a Buzzer
 */
const int buzzPin = 4;    // Buzzer connected to pin 4 (D2)
const int ldrPin = A0;    // LDR connected to pin A0

void setup() {    // the setup routine runs once when you press reset
  Serial.begin(9600);       // Open the serial port and set the data transmission rate to 9600 bps (bits per second)
  pinMode(buzzPin, OUTPUT);    // Configures BUZZER pin to behave as an output
  pinMode(ldrPin, INPUT);     // Configures LDR pin to behave as an input
}

void loop() {     // the loop routine runs over and over again forever

int ldrStatus = analogRead(ldrPin);   // Reads the value from the LDR analog pin

  if (ldrStatus > 900) {    // if statement checks for a condition and executes the proceeding statement
    tone(buzzPin, 440);   // turn the Buzzer on at a frequency of 440 Hz
    Serial.print(ldrStatus);    // prints the data to the serial port
    Serial.println("LDR is DARK, BUZZER is ON");   // This text is seen when opening the Serial Monitor, it's only to make sure that the LDR is working-> this line can be deleted
  }

  else {    // it is executed in any situation which do not meet the if condition
    noTone(buzzPin);      // turn the Buzzer off
    Serial.println("BUZZER is OFF");   // Prints data to the serial port as human-readable ASCII text (this line can also be deleted)
  }
  delay(100);   // LDR status is checked every 100ms
}
