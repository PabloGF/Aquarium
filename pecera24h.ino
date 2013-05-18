/* Pines PWM usados.Cuidado al conectarlos -> 3 5 9 11 */
 

// nombres:
int ledA = 3;
int ledB = 6;
int ledC = 9;
int ledD = 11;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
}

void loop() {

  // Amanecer (dura 1h)
  
  analogWrite(ledA,4);   
  delay(300000);
  analogWrite(ledA,12);   
  delay(300000);
  analogWrite(ledA,33);  
  analogWrite(ledB,4);  
  delay(300000);
  analogWrite(ledA,64);
  analogWrite(ledB,12);  
  delay(300000);
  analogWrite(ledA,127);
  analogWrite(ledB,33);
  analogWrite(ledC,4);  
  delay(300000);
  analogWrite(ledA,191);
  analogWrite(ledB,64);
  analogWrite(ledC,12);  
  delay(300000);
  analogWrite(ledA,255);
  analogWrite(ledB,127);
  analogWrite(ledC,33);
  analogWrite(ledD,4);
  delay(300000);
  analogWrite(ledB,191);
  analogWrite(ledC,64);
  analogWrite(ledD,12);
  delay(300000);
  analogWrite(ledB,255);
  analogWrite(ledC,127);
  analogWrite(ledD,33);
  delay(300000);
  analogWrite(ledC,191);
  analogWrite(ledD,64);
  delay(300000);
  analogWrite(ledC,255);
  analogWrite(ledD,127);
  delay(300000);
  analogWrite(ledD,191);
  delay(300000);
  analogWrite(ledD,255);
  
  
  delay(36000000); //Tiempo de luz con todos los LEDs al 100%
                  // (milisegundos) (10h)
                   

  // Anochecer (dura 1h)

  analogWrite(ledA,191);
  delay(300000);
  analogWrite(ledA,127);   
  delay(300000);
  analogWrite(ledA,64);  
  analogWrite(ledB,191);  
  delay(300000);
  analogWrite(ledA,33);
  analogWrite(ledB,127);  
  delay(300000);
  analogWrite(ledA,12);
  analogWrite(ledB,64);
  analogWrite(ledC,191);  
  delay(300000);
  analogWrite(ledA,4);
  analogWrite(ledB,33);
  analogWrite(ledC,127);  
  delay(300000);
  analogWrite(ledA,0);
  analogWrite(ledB,12);
  analogWrite(ledC,64);
  analogWrite(ledD,191);
  delay(300000);
  analogWrite(ledB,4);
  analogWrite(ledC,33);
  analogWrite(ledD,127);
  delay(300000);
  analogWrite(ledB,0);
  analogWrite(ledC,12);
  analogWrite(ledD,64);
  delay(300000);
  analogWrite(ledC,4);
  analogWrite(ledD,33);
  delay(300000);
  analogWrite(ledC,0);
  analogWrite(ledD,12);
  delay(300000);
  analogWrite(ledD,4);
  delay(300000);
  analogWrite(ledD,0);
 
 
  delay(43200000);  //tiempo de oscuridad 


}
