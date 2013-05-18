/*

3 5 9 11

 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledA = 3;
int ledB = 5;
int ledC = 9;
int ledD = 11;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(ledA, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);      
  digitalWrite(ledB, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(ledC, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);   
  digitalWrite(ledD, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);     
  // wait for a second
  digitalWrite(ledA, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(ledB, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(ledC, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(ledD, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
