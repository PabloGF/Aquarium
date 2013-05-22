/* NO ELIMINE ESTA NOTA / DO NOT REMOVE THIS HEADER

Aviso de licencia de Copyright (C). 2013. Pablo Giménez Fandiño

Castellano
----------

Lo que más te interesa lo contaré en castellano. Este programa, como todos los que escribo, es software libre. Esto quiere decir que puedes usarlo para lo que quieras y modificarlo todo lo que quieras. Puedes venderlo, puedes regalarlo, puedes intentar ligar con él. Haz lo que quieras; Eres libre de CASI todo. 

¿Qué no puedes hacer? a.k.a. ¿Qué infringe el Copyright?
- No digas que es tuyo. Sé que está muy de moda, pero sería feo e ilegal.
- Si lo modificas y lo distribuyes, esa modificación ha de seguir la licencia GPLv3. Esto es imprescincible para que el mundo siga siendo un mundo en el que merezca la pena estar y, sobre todo, para que no te denuncie.
- Si decides modificarlo y/o ampliarlo, especifica cuál es el original -o, al menos, dónde encontrarlo- --> https://github.com/PabloGF/Aquarium 

Si quieres contactar conmigo, no lo dudes: pablo.gim.fan@gmail.com <- lo más probable es que pase de ti. Recibo demasiados e-mails, pero puedes intentarlo.

Si pretendes acostarte conmigo y estás buena, siento decepcionarte, pero mi novia es de Burela y te mataría.

¿Acaso no es la licencia de Copyright más divertida que has leído?

Pues en la traducción a inglés está lo serio:

English
-------

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>. 


PLEASE, DO NOT REMOVE THIS HEADER */





/* Programa de simulación de amanecer/anochecer para Arduino o Arduino-Compatible */




/* Pines PWM usados. Cuidado al conectarlos -> 3 6 9 11 */

//NOTA IMPORTANTE: En el esquema de la electrónica, 'LedPecera_bb.png' está conectado al 5, pero por cuestiones de montaje, en mi Arduino Micro elegí el 6. Esto es para que seas coherente a la hora de conectar los cables a tu Arduino. Si usas un Arduino -o Arduino compatible- diferente, fíjate en que todos los que uses sean pines PWM o no funcionará. ¡Y cambia los números de los pines por los tuyos! Cualquier mandril entiende esto, no?
 

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
