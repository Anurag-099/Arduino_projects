//C++ Code
//Lights multiple LEDs in sequence, then in reverse.

int timer = 500;           //For Delay

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int Pin = 12; Pin > 9; Pin--) {
    pinMode(Pin, OUTPUT);
  }
}

void loop() {
  //RGB
  for (int Pin = 12; Pin >9; Pin--) {
    // turn the pin on:
    digitalWrite(Pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(Pin, LOW);
  }

  //BGR
  for (int Pin = 10; Pin < 13; Pin++) {
    // turn the pin on:
    digitalWrite(Pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(Pin, LOW);
  }
}