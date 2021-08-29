#include<Wire.h>

byte n;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Finding the Address :---");
  Wire.begin();
  for(n=32;n<=63;n++)
  {
    Wire.beginTransmission(n);
    if(Wire.endTransmission()==0)
    {
      Serial.print("Slave Address :0x");
      Serial.print(n,HEX);
      break;
    }
 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
