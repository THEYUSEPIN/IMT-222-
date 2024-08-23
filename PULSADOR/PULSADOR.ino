const int led = 13;
const int buton = 6;

int butonState = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT);
}

void loop() {
  butonState = digitalRead(buton);

  if (butonState == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
