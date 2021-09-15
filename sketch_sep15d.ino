int trig1 = 13, trig2 = 11, trig3 = 9, echo1 = 12, echo2 = 10, echo3 = 8;
long duration, distance, slot1, slot2, slot3, slot4, slot5;
int buzzer1=6;
int buzzer2=5;
int buzzer3=3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig1, OUTPUT); 
  pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(trig3, OUTPUT);
  pinMode(echo3, INPUT);

}
void ultra(int trig, int echo)
{
  digitalWrite(trig, LOW);
  delay(10);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) * 0.0341;
  //return distance;
}

// put your main code here, to run repeatedly:
void U1() {
  ultra(trig1, echo1);
  slot1 = distance;
  if(slot1<20)
  {tone(buzzer1,650);
  delay(500);
  noTone(buzzer1);
  delay(500);}
  Serial.print("Sensor1[");
  Serial.print(slot1);
  Serial.print("]  ");
}

void U2() {
  ultra(trig2, echo2); 
  slot2 = distance; 
  if(slot2<20)
  {tone(buzzer2,850);
  delay(500);
  noTone(buzzer2);
  delay(500);}
  Serial.print("Sensor2[");
  Serial.print(slot2); 
  Serial.print("]");
}
void U3() {
  ultra(trig3, echo3);
  slot3 = distance;
  if(slot3<20)
  {tone(buzzer3,950);
  delay(500);
  noTone(buzzer3);
  delay(500);}
  Serial.print("Sensor3[");
  Serial.print(slot3);
  Serial.println("]");
}


void loop() {

  U1(), U2(), U3();
  

}
