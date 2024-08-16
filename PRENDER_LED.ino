#define LED 13
#define TIMELED 1000
#define BUTTON 7
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH) {
    digitalWrite(LED, true);
    delay(TIMELED);
    digitalWrite(LED, false);
    delay(TIMELED);
  } else {
    digitalWrite(LED, false);
  }
}
