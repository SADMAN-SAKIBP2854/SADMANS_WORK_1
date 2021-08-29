byte LUT[16]={0x3F, 0x06, 0x5B,0x4F,0x66,0x6D,0x7D,0x07, 0x7F, 0X6F, 0X77,0X7C,0X39,0X5E,0X79,0X71};
byte x1 = 0x12;
byte x2 = 0x13;
byte z = x1+x2;
byte indexU =z%16;
byte indexT =(z>>4)%16;
void setup() {
  // put your setup code here, to run once:
DDRD = 0xFF;
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
    PORTD=LUT[indexT];
    delay(1);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
    PORTD=LUT[indexU];
    delay(1);
}
