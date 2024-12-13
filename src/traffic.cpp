/*
#include <Arduino.h>

// put function declarations here:
#define swits 15
#define green1 23
#define oreng1 19
#define red1 18
#define green2 5
#define oreng2 17
#define red2 16
void LED(){
  //GREEN1 ON
  digitalWrite(green1,HIGH);
  digitalWrite(green2,LOW);
  digitalWrite(oreng1,LOW);
  digitalWrite(oreng2,LOW);
  digitalWrite(red1,LOW);
  digitalWrite(red2,HIGH);
  delay(2000);
  //ORENG1 ON 
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(oreng1,HIGH);
  digitalWrite(oreng2,LOW);
  digitalWrite(red1,LOW);
  digitalWrite(red2,HIGH);
  delay(500);
  //GREEN2 ON
  digitalWrite(green1,LOW);
  digitalWrite(green2,HIGH);
  digitalWrite(oreng1,LOW);
  digitalWrite(oreng2,LOW);
  digitalWrite(red1,HIGH);
  digitalWrite(red2,LOW);
  delay(2000);
  //ORENG2 ON
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(oreng1,LOW);
  digitalWrite(oreng2,HIGH);
  digitalWrite(red1,HIGH);
  digitalWrite(red2,LOW);
  delay(500);
}
void swit() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(green1, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(oreng1, HIGH);
    digitalWrite(oreng2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(red2, HIGH);
    delay(500);
        
    digitalWrite(green1, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(oreng1, LOW);
    digitalWrite(oreng2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    delay(500);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode( swits , INPUT );
  pinMode( green1 , OUTPUT );
  pinMode( oreng1 , OUTPUT );
  pinMode( red1 , OUTPUT );
  pinMode( green2 , OUTPUT );
  pinMode( oreng2 , OUTPUT );
  pinMode( red2 , OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(swits);

  if (a == HIGH) { // If switch is pressed
    swit(); // Flash all LEDs
  } else {
      LED(); // Run LED sequence
  }
  
}

// put function definitions here:
*/
