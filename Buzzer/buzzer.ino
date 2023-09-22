#define doh 264
#define re 300
#define mi 330
#define fa 352
#define sol 396
#define la 440
#define si 495

void tocar(int nota) {
  //porta, frequência Hz, tempo ms
  tone(11, nota, 200);
  delay(200);
  noTone(11);
  delay(200);
}

void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  tocar(doh);
  tocar(re);
  tocar(mi);
  delay(500);
  tocar(doh);
  tocar(doh);
  tocar(re);
  tocar(mi);
  delay(500);
  
  tocar(mi);
  tocar(fa);
  tocar(sol);
  delay(500);
  tocar(mi);
  tocar(fa);
  tocar(sol);
  delay(500);
}