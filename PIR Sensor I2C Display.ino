//_______CODE BY RAJAT_RJx_______
#include <Adafruit_LiquidCrystal.h> 
Adafruit_LiquidCrystal lcd_1(0);

int pir=5;
int led=8;
int buzz=7;
int PIR_STATE=LOW;
int val=0;

void setup(){
  lcd_1.begin(16, 2);
  pinMode(led, OUTPUT);
  pinMode(pir,INPUT);
  pinMode(buzz, OUTPUT);
}

void loop(){
  val=digitalRead(pir);
  
  if (val==HIGH){     
    digitalWrite(led,HIGH);
    digitalWrite(buzz,HIGH);
    digitalWrite(led,LOW);
    digitalWrite(buzz,HIGH);
    tone(buzz, 1500); 
    delay(500);
    noTone(buzz);
    lcd_1.setCursor(0,1); 
    lcd_1.print("Object detected.");
    delay(1000);
    lcd_1.clear();
  }
  
  else{
  digitalWrite(led,LOW);
  digitalWrite(buzz,LOW);
  lcd_1.setCursor(1,0); 
  lcd_1.print("No object.");
  delay(1000);
    lcd_1.clear();
  }
}//_______CODE BY RAJAT_RJx_______