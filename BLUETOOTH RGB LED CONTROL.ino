// CODE__BY__ RAJAT, ANSH___
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3); // TX = 2, RX = 3

int gr = 5; 
int r= 9;
int b= 6;

void setup() {
  pinMode(gr, OUTPUT);
	pinMode(r, OUTPUT);
	pinMode(b, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);  
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read();

    if (command == '1') {
			  digitalWrite(r, HIGH);}
				if (command == '2') {
			  digitalWrite(gr, HIGH);}
				if (command == '3') {
			  digitalWrite(b, HIGH);
    } 
		
		else if (command == '0') {
      digitalWrite(gr, LOW);
			digitalWrite(r, LOW);
			digitalWrite(b, LOW);
    }
  }
}
// CODE__BY__ RAJAT, ANSH___
