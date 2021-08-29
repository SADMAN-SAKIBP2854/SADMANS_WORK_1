#define sw 7
#define LED 5

void setup() {
  // put your setup code here, to run once:
  pinMode(sw,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sw)==HIGH)
  {
    digitalWrite(LED,HIGH);    
    }
    else 
    digitalWrite(LED,LOW);

}
