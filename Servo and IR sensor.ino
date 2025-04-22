//code by rajat_rjx
#include <Servo.h>
int ir=7;
int sensorValue = 0;                
int servoPin = 2;
int ang = 0;

Servo servo;

void setup() {
 pinMode(5, OUTPUT); 
 pinMode(A0, INPUT);
 servo.attach(2);
 servo.attach(2, 500, 2500);
}

void loop() {
  
  int sensorValue = digitalRead(ir);             
   if(analogRead(A0) < 200) {
    digitalWrite(5, LOW);
  }
  if(sensorValue==LOW)
    {
    servo.write(0);
  
   }
   else{

  servo.write(90);  
      digitalWrite(5, HIGH);                
}}
