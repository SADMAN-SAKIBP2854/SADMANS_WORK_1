#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();


}

void loop() {
  // put your main code here, to run repeatedly:


  for (int t = 1; t <= 2; t++)
  {
    if (t ==1)
    {
      for (int i =0, j = 12; i<=4, j >= 8; i++ , j--)
      {
        lcd.setCursor(i, 0);
        lcd.print("AUST");
        lcd.setCursor(j, 0);
        lcd.print("EEEE");
        delay(500);
        lcd.clear();
        
        
      }
    }

    else if (t >1)
    {
      for (int i = 4, j = 8; i >= 0, j <= 13; i-- , j++)
      {
        lcd.setCursor(i, 0);
        lcd.print("AUST");
        lcd.setCursor(j, 0);
        lcd.print("EEEE");
        delay(500);
        lcd.clear();
        
       
      }
    }

  }

}
