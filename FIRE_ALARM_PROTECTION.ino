#include<Wire.h>
#include <LiquidCrystal.h>
LiquidCrystal_I2C lcd(0x27, 16, 2)

int sensorPin = 8; //
int buzzer = 9;
int Greenled = 10;
int Redled = 11;
int read_value;
int moto = 12

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(moto,OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(Redled, OUTPUT);
  pinMode(Greenled, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("   WELCOME To   ");
  lcd.setCursor(0, 1);
  lcd.print("  Fire Detector ");
  delay(2000);
  lcd.clear();
}

void loop() {
  read_value = digitalRead(sensorPin);

  if (read_value == 1) {
    lcd.setCursor(0, 0);
    lcd.print("***Not  Flame***");
    lcd.setCursor(0, 1);
    lcd.print("____Normal___");
    digitalWrite(buzzer, LOW);
    digitalWrite(Redled, LOW);
    digitalWrite(Greenled, HIGH);

  }
  else { // check if the Fire variable is Low
    lcd.setCursor(0, 0);
    lcd.print("Fire is Detected");
    lcd.setCursor(0, 1);
    lcd.print("Alert...!!!");

    digitalWrite(buzzer, HIGH); .
    digitalWrite(Redled, HIGH);
    digitalWrite(Greenled, LOW);
    digitalWrite(moto, HIGH); //This motor will start the flow of water

    delay(1000);
  }
  delay(100);
}
