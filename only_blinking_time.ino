#define Led 8
int n;
void setup() {
  // put your setup code here, to run once:
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
  Serial.print("Blinking Time n  =  ");
  while ((Serial.available() == 0))
  {

  }
  n = Serial.parseInt();
  Serial.print(n);
  led_blink(n);


}

void loop() {
  // put your main code here, to run repeatedly:

}
void led_blink(int n)
{
  for (int i = 0; i < n; i++)
  {
    digitalWrite(Led, HIGH);
    delay(1000);
    digitalWrite(Led, LOW);
    delay(1000);
  }
}
