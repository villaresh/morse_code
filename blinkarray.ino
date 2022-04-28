unsigned int led_pin = 5;    // Assign a name to the digital pin 5
 
// Declare an array named letters that holds addresses of string literals 
char *letters[] = {
  // The letters from A to Z in Morse code  
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",    
  ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",  
  "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."         
};
 
char *numbers[] = {
  // The numbers from 0 to 9 in Morse code  
  "-----", ".----", "..---", "...--", "....-", ".....", "-....", 
  "--...", "---..", "----."
};
 
unsigned int dot_duration = 500;
bool done = false;
 
// Function runs only once, after each powerup or reset of the Arduino
void setup() {
  // Set the LED to output
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600); // Open the serial port and set the data transmission rate to 9600 bps (bits per second)
}
 
// Main function that drives the system
void loop() {
  char ch;
   
  // This loop waits for a string, displays it in Morse code, and only exits 
  // the loop if the sentinel is entered. 
  while (!done) {
   
    // Check to see if there are letters or numbers available to be read
    if (Serial.available()) {     
   
      // Read one letter or number at a time
      // Serial.read() returns the first (oldest) character in the buffer 
      // and removes that byte of data from the buffer
      ch = Serial.read();    
   
      // Check for uppercase letters
      if (ch >= 'A' && ch <= 'Z') {
        Serial.println(ch);
        flash_morse_code(letters[ch - 'A']);        
      }
      // Check for lowercase letters
      else  if (ch >= 'a' && ch <= 'z') {
        Serial.println(ch);
        flash_morse_code(letters[ch - 'a']);
      }
      // Check for numbers
      else if (ch >= '0' && ch <= '9') {
        Serial.println(ch);
        flash_morse_code(numbers[ch - '0']);
      }
      // Check for space between words
      else if (ch == ' ') {
       
        // Put space between two words in a message...equal to seven dots
        delay(dot_duration * 7);       
      }
      // Check for sentinel value
      else if (ch == '!') {
        done = true;  
        Serial.println("Thank you! Your messages were sent successfully.");
        Serial.println("Goodbye.");
      }
    }     
  }  
  // Do nothing
  while(true) {}
}
 
void flash_morse_code(char *morse_code) {
    
  unsigned int i = 0;
    
  // Read the dots and dashes and flash accordingly
  while (morse_code[i] != NULL) {
    flash_dot_or_dash(morse_code[i]);
    i++;
  }
    
  // Space between two letters is equal to three dots
  delay(dot_duration * 3);    
}
 
void flash_dot_or_dash(char dot_or_dash) {
   
  // Make the LED shine
  digitalWrite(led_pin, HIGH);
   
  if (dot_or_dash == '.') { // If it is a dot
    delay(dot_duration);           
  }
  else { // Has to be a dash...equal to three dots
    delay(dot_duration * 3);           
  }
   
  // Turn the LED off
  digitalWrite(led_pin, LOW);
 
  // Give space between parts of the same letter...equal to one dot
  delay(dot_duration); 
}
