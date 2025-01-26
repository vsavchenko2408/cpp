const int buttonPin = 2;
const int led = 13;

int butt = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  butt = digitalRead(buttonPin);

  if (butt == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}