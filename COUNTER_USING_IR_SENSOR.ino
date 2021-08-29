#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define sensorPin1 7
#define sensorPin2 8
#define LED 3

int sensorState1 = 0;
int sensorState2 = 0;
int count = 0;

void setup()
{
  pinMode (sensorPin1,INPUT_PULLUP);
  pinMode (sensorPin2,INPUT_PULLUP);
  pinMode(LED, OUTPUT);

  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("PASSANGER-COUNT");
  lcd.setCursor(0, 1);
  lcd.print("No PASSAN     ");
  delay(200);
}

void loop()
{
  sensorState1 = digitalRead(sensorPin1);
  sensorState2 = digitalRead(sensorPin2);

  if (sensorState1 == LOW) {
    count++;
    delay(500);
  }

  if (sensorState2 == LOW) {
    count--;
    delay(500);
  }


  if (count <= 0)
  {
    digitalWrite(LED, LOW);
    lcd.setCursor(0, 1);
    lcd.print("No PASSAN    ");
  }
  else if (count > 0 && count < 10) {
    digitalWrite(LED, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("PASSAN:   ");
    lcd.setCursor(12, 1);
    lcd.print(count);
    lcd.setCursor(13, 1);
    lcd.print("  ");

  }
  else {
    digitalWrite(LED, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("PASSAN:   ");
    lcd.setCursor(12, 1);
    lcd.print(count);
  }
}
