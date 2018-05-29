#include <Wire.h>


char LED[4] = {10,9,8,7};
char wireValue[7];
void setup()
{
  Wire.begin(5);
  Serial.begin(115200);
  Wire.onReceive(receiveEvent);
//  pinMode(LED,OUTPUT);/
  pinSituation();//
}

void loop()
{
  
}


void receiveEvent(int howMany)
{
  while(Wire.available())
  {
    int c = Wire.read();
    
    itoa(c,wireValue,2);

    Serial.print("Value: ");
    Serial.println(wireValue);

    for(int i =0; i<=strlen(wireValue);i++)
    {
     if(wireValue[i]== '1')
     {
         digitalWrite(LED[i],HIGH);
     }
     else if(wireValue[i]=='0')
     {
      digitalWrite(LED[i],LOW);
     }
    }
  }
}
void pinSituation()
{
  for(int i=0;i<=strlen(LED);i++)
  {
    pinMode(LED[i],OUTPUT);

  }
}
