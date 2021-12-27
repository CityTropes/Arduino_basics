// normal button switch circuit

//connect & set led to pin5 (use 220 ohm resistor)
int ledPin = 5;

void setup() 
{
  pinMode(ledPin, OUTPUT);
}

void loop() 
{  
   digitalWrite(ledPin, HIGH);       //turn on connected LED
   
  //When a switch/button is pressed the ciruit is completed and the led will be on (no need to program buttons here)
  
}
