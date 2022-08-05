/*To read the analog values and print it on the Serial monitor*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 
void setup() // set the LCD address to 0x27 for a 16 chars and 2 line display
{
  // put your setup code here, to run once:
  lcd.init();
    lcd.backlight();
    lcd.clear();
    lcd.home();
    lcd.setCursor(0, 0);
    lcd.print("ADC");
}

void loop()
{
  // put your main code here, to run repeatedly:
  String adc_val;

  adc_val = String (analogRead(A0));

    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(adc_val);
    
  delay(1000);
}
