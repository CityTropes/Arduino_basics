int photoPin = A0;
int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightRaw = analogRead(photoPin);
  
  // to make the raw ADC values from the photoresistor a bit easier to visualize, 
  //we use the map() function to convert the values to numbers between zero and ten
  int light = map(lightRaw, 1023, 0, 10, 0);

  if (light < 4) {
    digitalWrite(ledPin, HIGH);
  }

  else {
    digitalWrite(ledPin, LOW);
  }
}
