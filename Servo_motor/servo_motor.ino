#include<Servo.h>
Servo motorzinho;
int angulo;
void setup()
{
  motorzinho.attach(3);
}

void loop()
{
  for(angulo=0;angulo<180;angulo++)
  {
    motorzinho.write(angulo);
    delay(15);
  }
  for(angulo=180;angulo>0;angulo--)
  {
    motorzinho.write(angulo);
    delay(15);
  }
}