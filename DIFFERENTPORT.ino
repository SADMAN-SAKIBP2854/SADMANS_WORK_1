//byte LUT[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};
int digit[16][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1, 0},
  {1, 1, 1, 1, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1, 0},
  {1, 0, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 1, 0, 1, 1, 0},
  {1, 1, 1, 0, 1, 1, 1, 0},
  {0, 0, 1, 1, 1, 1, 1, 0},
  {1, 0, 0, 1, 1, 1, 0, 0},
  {0, 1, 1, 1, 1, 0, 1, 0},
  {1, 0, 0, 1, 1, 1, 1, 0},
  {1, 0, 0, 0, 1, 1, 1, 0}
};
byte x1 = 0x23;
byte x2 = 0x1A;
byte z = x1 + x2;
int indexU =z%16;
int indexT =(z>>4)%16;
int x, y, i;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  for (int x = 8; i <= 15; i++)
  {
    pinMode(x, OUTPUT);
  }



}

void loop() {
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  for (y = 8; y <= 15; y++)
  { digitalWrite(y, digit[indexT-1][y]);
  }
  delay(1);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  for (y = 8; y <= 15; y++)
  { digitalWrite(y, digit[indexU-1][y]);
  }
  delay(1);
}
