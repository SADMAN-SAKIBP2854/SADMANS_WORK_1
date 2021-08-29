#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

byte sum =0x00;


void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);


  //byte x1=0x21;
  //byte x2=0x86;
  //sum=x1+x2;

  lcd.print("BANGLADESH");

}

void loop() {
  // put your main code here, to run repeatedly:

}
