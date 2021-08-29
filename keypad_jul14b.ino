
#include <Keypad.h>
const byte ROWS = 4; 
const byte COLS = 3;
/* define the symbols on the buttons of the keypads */
char Keys [ROWS] [COLS] = {
{'1','2','3'},
{'4', '5', '6'},
{'7', '8', '9'},
{'*','0','#'}
};
byte rowPins [ROWS] = {2,3,4,5};  /* connect to the row pinouts of the keypad*/
byte colPins [COLS] ={6, 7, 8}; /*connect to the column pinouts of the keypad
/*initialize an instance of class Newkeypad*/
Keypad customKeypad = Keypad( makeKeymap (Keys), rowPins, colPins, ROWS, COLS);

void setup() {
Serial.begin(9600);
}
void loop() {
char customKey = customKeypad.getKey();
if (customKey){
Serial.println(customKey);
}
}
