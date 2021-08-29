#define ledpin 5
int n ;
int d ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  Serial.println("Enter the number of time you want to see led to blink");
  while (Serial.available() == 0) {

  }
  n = Serial.parseInt();
  Serial.println("Enter the time delay you want to see");
  while (Serial.available() == 0) {

  }

  d = Serial.parseInt();



  ledBlink(n, d);


}

void loop() {
  // put your main code here, to run repeatedly:

}
void ledBlink(int n, int d) {
  for (int i = 0; i < n; i++)
  {
    digitalWrite(ledpin, HIGH);
    delay(1000 * d);
    digitalWrite(ledpin, LOW);
    delay(1000 * d);
  }
}
