void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  //SE APERTOU O BOTÃO, ENTÃO LIGA O LED
  if( digitalRead(2) == HIGH )
  {
    digitalWrite(7, HIGH);
  }
  //SENÃO DESLIGA O LED
  else{
    digitalWrite(7, LOW);
  }
}