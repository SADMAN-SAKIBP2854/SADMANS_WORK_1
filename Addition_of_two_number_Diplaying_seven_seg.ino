byte lupTable[16]= {0x3F, 0x06,0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};
byte indexU;
byte indexT;
void setup() {// put your setup code here, to run once:
  
  DDRD = 0xFF;
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  byte x1 = 0x12;
  byte x2 = 0x13;
  byte z = x1 + x2;
  int indexU = (z % 16);
  int indexT = (z / 16)%16;
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  PORTD = lupTable[indexT];
  delay(10);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  PORTD = lupTable[indexU];
  delay(10);
}
