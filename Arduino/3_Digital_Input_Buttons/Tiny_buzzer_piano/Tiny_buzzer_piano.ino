//A program that makes the arduino into a tiny piano with a piezo buzzer.
//It can be easily scaled by adding or removing buttons.

//define buzzer & button pins.
const int buzzerPin = 11;
const int but1 = 4;
const int but2 = 5;
const int but3 = 6;
const int but4 = 7;
const int but5 = 8;

void setup() {

  //set inputs and outputs
  pinMode(buzzerPin, OUTPUT);
  pinMode(but1, INPUT_PULLUP);
  pinMode(but2, INPUT_PULLUP);
  pinMode(but3, INPUT_PULLUP);
  pinMode(but4, INPUT_PULLUP);
  pinMode(but5, INPUT_PULLUP);

}

void loop() {
 
  //if button 1 is pressed, then 100hz signal to buzzer.
  //same principle for all buzzers
  
  //tone(pin, freq. in hz., duration)
  if (digitalRead(but1) == LOW){
    tone(buzzerPin, 100, 10);
  }

  if (digitalRead(but2) == LOW){
    tone(buzzerPin, 200, 10);
  }

  if (digitalRead(but3) == LOW){
    tone(buzzerPin, 300, 10);
  }

  if (digitalRead(but4) == LOW){
    tone(buzzerPin, 400, 10);
  }

  if (digitalRead(but5) == LOW){
    tone(buzzerPin, 500, 10);
  }

}
