// C++ code
//
int led_pin = 12;
void setup()
{
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  digitalWrite(led_pin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_pin, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
}