byte lookuptable[16] = {
  0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
  0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71
};
void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  pinMode(A0, INPUT);
  DDRD = 0xFF;
  DDRB = 0xFF;


}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  float T = (float)((100 * (5 / 1024.0)) * x);
  for (int j = 0; j < 100; j++)
  { int T2 = round(T * 100);
    for (int i = 0; i < 4; i++)
    {
      PORTB = 0xFF;
      PORTD = lookuptable[T2 % 10];
      if (i == 2)
      {
        digitalWrite(7, HIGH);
      }
      bitClear(PORTB, i);
      delay(5);
      T2 = T2 / 10;
    }
  }
}
