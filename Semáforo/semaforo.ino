void setup()
{
  	//Configura o pino 7 como saída de corrente
	pinMode(7, OUTPUT);
  	pinMode(6, OUTPUT);
  	pinMode(5, OUTPUT);
}

void loop()
{
	digitalWrite(7, HIGH);
  	delay(10000);//1000ms == 1s
  	digitalWrite(7, LOW);
  	delay(10000);
  
  	digitalWrite(6, HIGH);
  	delay(5000);
  	digitalWrite(6, LOW);
  	delay(5000);
  
  	digitalWrite(5, HIGH);
  	delay(10000);
  	digitalWrite(5, LOW);
  	delay(10000);
}

//SIMULE UM SEMÁFORO COM 3 LEDS

