#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
 
  analogReference(DEFAULT);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0);
  float T=(100*(5/1024.0))*x;

  lcd.setCursor(0,0);
  lcd.print(T);
  delay(1000);

}
