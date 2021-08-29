#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
for(int i=0;i<=15;i++)
{
  lcd.setCursor(i,0);
  lcd.print("AUST");
  delay(500);
  lcd.clear();
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
