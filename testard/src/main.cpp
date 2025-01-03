#include <Arduino.h>
const int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  /*
  digitalWrite(led, HIGH);
   Serial.println("HIGH");
  delay(1000);
  digitalWrite(led, LOW);
   Serial.println("LOW");
  delay(1000);
 */

}
