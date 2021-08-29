//we are assuming 6 student in a class and there are two row and three column


int pir = 2;
int led = 3;
int buzzer1 = 4;
int buzzer2 = 5;
int buzzer3 = 6;
int buzzer4 = 7;
int IR1 = 8;
int IR2 = 9;
int IR3 = 10;
int IR4 = 11;
int IR5 = 12;
int IR6 = 13;



int pirState;


void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(buzzer3, OUTPUT);
  pinMode(buzzer4, OUTPUT);
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);
  pinMode(IR5, INPUT);
  pinMode(IR6, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  pirState = digitalRead(pir);

  if (pirState == HIGH)
  {
    digitalWrite(led, HIGH);
    if (digitalRead(IR1) == LOW || digitalRead(IR2) == LOW)
    {
      digitalWrite(buzzer1, HIGH);
      delay(1000);
    }
    else if (digitalRead(IR3) == LOW || digitalRead(IR4) == LOW)

    {
      digitalWrite(buzzer2, HIGH);
      delay(1000);
    }
    else if (digitalRead(IR5) == LOW || digitalRead(IR6) == LOW)
    {
      digitalWrite(buzzer3, HIGH);
      delay(1000);
    }
    else if (digitalRead(IR7) == LOW || digitalRead(IR8) == LOW)
    {
      digitalWrite(buzzer4, HIGH);
      delay(1000);
    }



  }
  else
  {
    digitalWrite(led, LOW);

  }


}
