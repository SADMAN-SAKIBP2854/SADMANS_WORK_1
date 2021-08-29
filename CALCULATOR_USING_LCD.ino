#include <Keypad.h>
#include<Wire.h>
#include<LiquidCrystal_I2C.h>




long first = 0;  
long second = 0;
double total = 0;

char customKey;
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};
byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};

LiquidCrystal_I2C lcd(0x27,16,2);

Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS); 

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);

}

void loop()
{
  customKey = customKeypad.getKey();
  switch(customKey) 
  {
  case '0' ... '9':
    
    first = first * 10 + (customKey - '0');
    Serial.println(first);
    lcd.print(first);
    break;


  case '+':
    first = (total != 0 ? total : first);
    Serial.println("+");
    lcd.print("+");
    second = SecondNumber();
    total = first + second;
    Serial.println(total);
    lcd.print("=");
    lcd.print(total);
    first = 0, second = 0;
    break;

  case '-':
    first = (total != 0 ? total : first);
    Serial.println("-");
    lcd.print("-");
    second = SecondNumber();
    total = first - second;
    Serial.println(total);
    lcd.print("=");
    lcd.print(total);
    first = 0, second = 0;
    break;

  case '*':
    first = (total != 0 ? total : first);
    Serial.println("*");
    lcd.print("*");
    second = SecondNumber();
    total = first * second;
    Serial.println(total);
    lcd.print("=");
    lcd.print(total);
    first = 0, second = 0;
    break;

  case '/':
    first = (total != 0 ? total : first);
    Serial.println("/");
    lcd.print("/");
    second = SecondNumber();

    second == 0 ? lcd.print(" = Invalid") : total = (float)first / (float)second;

    Serial.println(total);
    lcd.print("=");
    lcd.print(total);
    first = 0, second = 0;
    break;

  case 'C':
    total = 0;
    break;
  }
}

long SecondNumber()
{
  while( 1)
  {
    customKey = customKeypad.getKey();
    if(customKey >= '0' && customKey <= '9')
    {
      second = second * 10 + (customKey - '0');
      Serial.println(second);
      lcd.print(second);
    }

    if(customKey == '=') break;  //return second;
  }
 return second; 
}
