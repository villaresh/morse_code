/* Created on 2022
 * Last modification: 28 April 2022
 * This code permits to write latin letters and arabic numbers on a Serial Monitor and it is translated to Morse Code and executed in a LED.
 */
int t=500,pin=5;  //LED connected to pin number 5

void morse(char ch)
{
  if(ch=='a')
  {
    digitalWrite(pin,HIGH);
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='b')  {
    digitalWrite(pin,HIGH);   //turn the LED on (HIGH is the voltage level)
    delay(3*t);   //wait for 1500 ms (dash)-> t has been defined for 500 ms!!
    digitalWrite(pin,LOW);    // turn the LED off by making the voltage LOW
    delay(t);    //wait for 500 ms (space between parts of the same letter)
    
    digitalWrite(pin,HIGH);  
    delay(t);    //wait for 500 ms (dot)
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);    //wait for 500 ms (dot)
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH); 
    delay(t);    //wait for 500 ms (dot)
    digitalWrite(pin,LOW);
    delay(3*t);  //wait for 1500 ms (space between letters is 3 units)
  }
  // Following this pattern, all the 26 basic Latin letters (a through z) and the Arabic numbers are defined
  else if(ch=='c')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='d')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='e')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='f')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='g')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='h')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='i')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='j')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='k')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='l')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='m')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='n')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='o')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='p')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='q')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='r')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='s')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='t')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='u')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='v')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='w')  {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='x')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='y')  {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='z') {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='0') {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='1') {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='2') {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='3') {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='4') {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='5') {
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='6') {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='7') {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='8') {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch=='9') {
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(3*t);
    digitalWrite(pin,LOW);
    delay(t);
    
    digitalWrite(pin,HIGH);  
    delay(t);
    digitalWrite(pin,LOW);
    delay(3*t);
  }
  else if(ch==' ')
  {
    delay(4*t);   // Space between words is 7 units
  }
}
void setup() 
{
  Serial.begin(9600);   // starts serial communication (Arduino can send out commands through the USB connection). The value 9600 is how fast the data is sent
  pinMode(pin,OUTPUT);
}

void loop() 
{
  String input="";
  if(Serial.available()>0)
  {
    input=Serial.readString();
    Serial.println(input);
    int i=0;
    char ip='a';
    while(ip != '\0')
    {
      ip=input.charAt(i);       // This code gets the character at a particular location in the string.
      Serial.println(ip);
      morse(ip);
      i++;
    }
  }
}
