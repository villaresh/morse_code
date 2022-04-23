/* Created on 2022
 *  Last modification: 21st April 2022
 */
const int ledPin = 5;
void setup() {                
 pinMode(ledPin, OUTPUT);     
}

void SOS(int n){
 digitalWrite(ledPin, HIGH);   
 delay(n);               
 digitalWrite(ledPin, LOW);   
 delay(500);
 digitalWrite(ledPin, HIGH);   
 delay(n);               
 digitalWrite(ledPin, LOW);   
 delay(500);
 digitalWrite(ledPin, HIGH);   
 delay(n);               
 digitalWrite(ledPin, LOW);   
 delay(1500);
}

void silence(){
  digitalWrite(ledPin, LOW);   
 delay(2000);
}

void loop() {
  SOS(500);
  SOS(1500);
  SOS(500);
  silence();
}
