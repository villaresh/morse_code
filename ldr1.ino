/* Created on 2022
 * Last modification: 1st May 2022
 * This code permits to make a LDR blink (depends on the light) with the built in LED (of the ESP-8266-MOD with a ESP-12e module)
 */
const int ledPin = D0;    // builtin LED
const int ldrPin = A0;    // LDR connected to pin A0

void setup() {    // the setup routine runs once when you press reset

Serial.begin(9600);       // Open the serial port and set the data transmission rate to 9600 bps (bits per second)
  pinMode(ledPin, OUTPUT);    // Configures LED pin to behave as output
  pinMode(ldrPin, INPUT);     // Configures LDR pin to behave as an input
}
void loop() {     // the loop routine runs over and over again forever

int ldrStatus = analogRead(ldrPin);   // Reads the value from the LDR analog pin

  if (ldrStatus < 900) {
    digitalWrite(ledPin, HIGH);   // The pin has been defined as an OUTPUT, so voltage will be set to the corresponding value (5V or 3.3V)
    Serial.print(ldrStatus);    // prints the data to the serial port
    Serial.println("LDR is DARK, LED is ON");   // This text is seen when opening the Serial Monitor, it's only to make sure that the LDR is working-> this line can be deleted
  }

  else {
    digitalWrite(ledPin, LOW);
    Serial.println("LED is OFF");   // Prints data to the serial port as human-readable ASCII text (this line can also be deleted)
  }
  delay(100);   // LDR status is checked every 100ms
}
