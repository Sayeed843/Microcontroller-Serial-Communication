// Master Uno
#include <Wire.h>

int isObstaclePin = 7;
int isObstacle;
void setup()
{
  Wire.begin();
  Serial.begin(115200);
}

void loop()
{
//  isObstacle = digitalRead(isObstaclePin);/


  for(int i=0;i<10;i++)
  {
    Wire.beginTransmission(5);
//  Wire.write(isObstacle);/
    Wire.write(i);
    Wire.endTransmission();
    delay(2000);
  }


