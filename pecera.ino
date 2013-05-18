/*

3 5 9 11

 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledA = 3;
int ledB = 6;
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
//  digitalWrite(ledA, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);      
//  digitalWrite(ledB, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);
  analogWrite(ledA,4);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,12);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,33);   // turn the LED on (HIGH is the voltage level)
  analogWrite(ledB,4);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,64);
  analogWrite(ledB,12);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,127);
  analogWrite(ledB,33);
  analogWrite(ledC,4);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,191);
  analogWrite(ledB,64);
  analogWrite(ledC,12);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,255);
  analogWrite(ledB,127);
  analogWrite(ledC,33);
  analogWrite(ledD,4);
  delay(1000);
  analogWrite(ledB,191);
  analogWrite(ledC,64);
  analogWrite(ledD,12);
  delay(1000);
  analogWrite(ledB,255);
  analogWrite(ledC,127);
  analogWrite(ledD,33);
  delay(1000);
  analogWrite(ledC,191);
  analogWrite(ledD,64);
  delay(1000);
  analogWrite(ledC,255);
  analogWrite(ledD,127);
  delay(1000);
  analogWrite(ledD,191);
  delay(1000);
  analogWrite(ledD,255);
  // turn the LED on (HIGH is the voltage level)
  delay(10000);  



  analogWrite(ledA,191);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,127);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,64);   // turn the LED on (HIGH is the voltage level)
  analogWrite(ledB,191);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,33);
  analogWrite(ledB,127);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,12);
  analogWrite(ledB,64);
  analogWrite(ledC,191);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,4);
  analogWrite(ledB,33);
  analogWrite(ledC,127);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  analogWrite(ledA,0);
  analogWrite(ledB,12);
  analogWrite(ledC,64);
  analogWrite(ledD,191);
  delay(1000);
  analogWrite(ledB,4);
  analogWrite(ledC,33);
  analogWrite(ledD,127);
  delay(1000);
  analogWrite(ledB,0);
  analogWrite(ledC,12);
  analogWrite(ledD,64);
  delay(1000);
  analogWrite(ledC,4);
  analogWrite(ledD,33);
  delay(1000);
  analogWrite(ledC,0);
  analogWrite(ledD,12);
  delay(1000);
  analogWrite(ledD,4);
  delay(1000);
  analogWrite(ledD,0);
  // turn the LED on (HIGH is the voltage level)
  delay(10000);  


}
