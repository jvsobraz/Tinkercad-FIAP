#define trig 6
#define echo 7
float dist;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, HIGH);
  digitalWrite(trig, LOW);
  dist = 0.01715*pulseIn(echo, HIGH);
  Serial.println(dist);
}