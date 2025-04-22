#include <Adafruit_LiquidCrystal.h> 
Adafruit_LiquidCrystal lcd_1(0);

void setup(){
  
  lcd_1.begin(16, 2); 
  
}



void loop()
{
  
  for (int text = 0; text <16; text++) {
   lcd_1.scrollDisplayLeft();
     lcd_1.setCursor(16,0); 
  delay(0.5);
  lcd_1.print("Rajat is using Arduino.");
    
  }
}
