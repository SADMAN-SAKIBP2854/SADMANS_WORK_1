#define Led 8
int n;
int td;
void setup() {
  // put your setup code here, to run once:
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
  Serial.print("Blinking Time n  =  ");
  while ((Serial.available() == 0))
  {

  }
  n = Serial.parseInt();
  Serial.println(n);
  Serial.print("Blinking delay td =  ");
  while ((Serial.available() == 0))
  {

  }
  td = Serial.parseInt();
  Serial.print(td);
  led_blink(n, td);


}

void loop() {
  // put your main code here, to run repeatedly:

}
void led_blink(int n, int td)
{
  for (int i = 0; i < n; i++)
  {
    digitalWrite(Led, HIGH);
    delay(td * 1000);
    digitalWrite(Led, LOW);
    delay(td * 1000);
  }
}
