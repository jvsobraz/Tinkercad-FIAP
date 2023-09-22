#include<Servo.h>
Servo motor;
int a, g; //analógico, graus
void setup()
{
  motor.attach(3);
  Serial.begin(9600);
}

void loop()
{
  a = analogRead(A2);
  //valor a ser convertido, escala_min, escala_max, nova_escala_min, nova_escala_max
  g = map(a, 0, 1023, 0, 180);
  motor.write(g);
  delay(15);
  Serial.println(g);
}