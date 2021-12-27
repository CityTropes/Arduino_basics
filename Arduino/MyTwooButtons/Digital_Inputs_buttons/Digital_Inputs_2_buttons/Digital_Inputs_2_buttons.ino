// programming 2 connected buttons (Input) and a ledPin (Output)

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{

  //When a switch/button is pressed, it connects the input pin to GND, so that it is no longer HIGH
  
  if (digitalRead(buttonApin) == LOW)  //if button A is pressed (input pin to GND)
  {
    digitalWrite(ledPin, HIGH);       //turn on connected LED
  }
  if (digitalRead(buttonBpin) == LOW) //if button B is pressed (input pin to GND)
  {
    digitalWrite(ledPin, LOW);        //turn off connected LED
  }
}
