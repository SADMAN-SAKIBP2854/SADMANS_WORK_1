#define ledpin1 3
#define ledpin2 8
int n = 5;
int d = 2;
int i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  for (i = 0; i < n; i++)
  {
    digitalWrite(ledpin1, HIGH);
    delay(1000);
    digitalWrite(ledpin1, LOW);
  }
  for (i = 0; i < n; i++)
  {
    digitalWrite(ledpin2, HIGH);
    delay(1000);
    digitalWrite(ledpin2, LOW);
    delay(1000);
  }



}

void loop() {
  // put your main code here, to run repeatedly:

}
