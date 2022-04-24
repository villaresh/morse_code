const int pinBuzzer = 5;

void setup() {
pinMode(pinBuzzer,OUTPUT);
}

void SOS(int n) {
  tone(pinBuzzer, 440);
   delay(n);
  noTone(pinBuzzer);
   delay(500);
  tone(pinBuzzer, 440);
   delay(n);
  noTone(pinBuzzer);
   delay(500); 
  tone(pinBuzzer, 440);
   delay(n);
  noTone(pinBuzzer);
   delay(500); 
}

void silence (){
  noTone(pinBuzzer);
   delay(3500);
}

void loop() {
  SOS(500);
  SOS(1500);
  SOS(500);
  silence();
}
