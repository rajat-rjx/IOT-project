// CODE__BY__rajat_rjx
const int irSensorPin = 7;  
const int ledPin = 4;     

void setup() {
  pinMode(irSensorPin, INPUT);   
  pinMode(ledPin, OUTPUT);      
  Serial.begin(9600);           
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);  
  if (sensorValue == LOW) {
    
    digitalWrite(ledPin, HIGH);
    Serial.println("Obstacle detected!");
  } else {
 
    digitalWrite(ledPin, LOW); 
    Serial.println("No obstacle.");
  }

  delay(100);
}
