int RedLED = D6;     // Red leg connected to D6 pin
int GreenLED = D5;     // Green leg connected to D5 pin
int BlueLED = D3; // Blue leg connected to D3 pin
// RGB LED uses 3 outputs to control 3 basic colours
int pinLDR = A0;     // LDR connected to A0 pin

void setup(){    // the setup routine runs once when you press reset
    pinMode(RedLED, OUTPUT);     // Configures RedLED pin to behave as an output
    pinMode(GreenLED, OUTPUT);     // Configures GreenLED pin to behave as an output
    pinMode(BlueLED, OUTPUT);    // Configures BlueLED pin to behave as an output
    analogReference(EXTERNAL);     // the voltage applied to the AREF pin (0 to 5V only) is used as the reference
}

void loop(){     // the loop routine runs over and over again forever
  int LDRvalue = analogRead(pinLDR);
  if(LDRvalue >= 1023) {
    digitalWrite(RedLED, 128);    // between the brackets of this function there are: the Arduino pin number and the value which corresponds to Colour Intensity
    digitalWrite(GreenLED, 0);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 959) & (LDRvalue < 1023)) {
    digitalWrite(RedLED, 255);
    digitalWrite(GreenLED, 0);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 895) & (LDRvalue < 959)) {
    digitalWrite(RedLED, 255);
    digitalWrite(GreenLED, 128);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 831) & (LDRvalue < 895)) {
    digitalWrite(RedLED, 255);
    digitalWrite(GreenLED, 255);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 767) & (LDRvalue < 831)) {
    digitalWrite(RedLED, 255);
    digitalWrite(GreenLED, 255);
  digitalWrite(BlueLED, 128);
  }
  else if((LDRvalue >= 703) & (LDRvalue < 767)) {
    digitalWrite(RedLED, 128);
    digitalWrite(GreenLED, 255);
    digitalWrite(BlueLED, 255);
  }
  else if((LDRvalue >= 639) & (LDRvalue < 703)) {
    digitalWrite(RedLED, 128);
    digitalWrite(GreenLED, 128);
    digitalWrite(BlueLED, 255);
  }
  else if((LDRvalue >= 575) & (LDRvalue < 639)) {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 128);
    digitalWrite(BlueLED, 255);
  }
  else if((LDRvalue >= 511) & (LDRvalue < 575)) {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 0);
    digitalWrite(BlueLED, 255);
  }
  else if((LDRvalue >= 447) & (LDRvalue < 511)) {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 0);
    digitalWrite(BlueLED, 128);
  }
  else if((LDRvalue >= 383) & (LDRvalue < 447)) {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 128);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 319) & (LDRvalue < 383)) {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 255);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 255) & (LDRvalue < 319)) {
    digitalWrite(RedLED, 128);
    digitalWrite(GreenLED, 255);
    digitalWrite(BlueLED, 0);
  }
  else if((LDRvalue >= 191) & (LDRvalue < 255)) {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 255);
    digitalWrite(BlueLED, 128);
  }
  else if((LDRvalue >= 127) & (LDRvalue < 191)) {
    digitalWrite(RedLED, 128);
    digitalWrite(GreenLED, 255);
    digitalWrite(BlueLED, 128);
  }
  else if((LDRvalue >= 63) & (LDRvalue < 127)) {
    digitalWrite(RedLED, 128);
    digitalWrite(GreenLED, 128);
    digitalWrite(BlueLED, 128);
  }
  else if((LDRvalue >=0) & (LDRvalue < 63)) {
    digitalWrite(RedLED, 55);
    digitalWrite(GreenLED, 55);
    digitalWrite(BlueLED, 55);
  }
  else {
    digitalWrite(RedLED, 0);
    digitalWrite(GreenLED, 0);
    digitalWrite(BlueLED, 0);
  }
}

void color(int red, int green, int blue) {
    analogWrite(RedLED, 255-red);
    analogWrite(GreenLED, 255-green);
    analogWrite(BlueLED, 255-blue);
// The conditional if-else structure controls colour corresponding to light intensity.
}
