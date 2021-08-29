byte LUT[]={0x3F, 0x06, 0x5B,0x4F,0x66,0x6D,0x7D,0x07, 0x7F, 0X6F, 0X77,0X7C,0X39,0X5E,0X79,0X71};

void setup() {
  // put your setup code here, to run once:
DDRD = 0b11111111;
pinMode(8,OUTPUT);

digitalWrite(8,HIGH);
for(int i=0;i<16;i++)
   {
    PORTD=~LUT[i];
    delay(1000);
    }
    digitalWrite(8,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
