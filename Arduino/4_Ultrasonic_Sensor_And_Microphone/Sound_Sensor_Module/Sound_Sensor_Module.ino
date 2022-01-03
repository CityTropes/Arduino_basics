int ledPin = 10;
int microphonePin = 1;
int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(microphonePin, INPUT);
}

void loop() {
  state = digitalRead(microphonePin);

  if (state == 0) {
    digitalWrite(ledPin, HIGH);
    delay(100);
  }

  else {
    digitalWrite(ledPin, LOW);
  }
}
