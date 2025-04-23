//code by rajat_rjx

#include <Servo.h>
#include <LiquidCrystal_I2C.h>
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
#define buzzer 1
#define servoPin 2

String UID = "20 9A 29 59";//Enter your card ID
byte lock = 0;

Servo servo;
LiquidCrystal_I2C lcd(0x27, 16, 2);
MFRC522 rfid(SS_PIN, RST_PIN);


void setup() {
  Serial.begin(9600);
  servo.write(70);

  lcd.backlight();
  servo.attach(servoPin);
  SPI.begin();
  rfid.PCD_Init();
  pinMode(buzzer, OUTPUT);
}

void loop() {
  lcd.setCursor(4, 0);
  lcd.print("Welcome!");
  lcd.setCursor(1, 1);
  lcd.print("Put your card");

  if ( ! rfid.PICC_IsNewCardPresent())
    return;
  if ( ! rfid.PICC_ReadCardSerial())
    return;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Scanning");
  Serial.println("NUID tag is :");
  String ID = "";
  for (byte i = 0; i < rfid.uid.size; i++) {
    lcd.print(".");
    ID.concat(String(rfid.uid.uidByte[i] < 0x10 ? " 0" : " "));
    ID.concat(String(rfid.uid.uidByte[i], HEX));
    delay(300);
  }
  ID.toUpperCase();

  if (ID.substring(1) == UID && lock == 0 ) {
    
    servo.write(90);
    delay(100);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Locked");
     Serial.println("Gate is locked");
    delay(100);
    lcd.clear();
    lock = 1;
  } else if (ID.substring(1) == UID && lock == 1 ) {
   

    servo.write(0);
    delay(100);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Unlocked");
     Serial.println("Gate is unlocked");
    delay(100);
    lcd.clear();
    lock = 0;
  } else {
    Serial.println("Wrong card!");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Wrong card!");
   
    lcd.clear();
  }
}
