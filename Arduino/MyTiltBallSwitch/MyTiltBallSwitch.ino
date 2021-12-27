
const int ledPin = 13;        //the led is attached to pin 13

void setup()
{ 
  pinMode(ledPin,OUTPUT);     //initialize the ledPin as an output
  pinMode(2,INPUT);
  digitalWrite(2, HIGH);
} 

void loop() 
{ 
  int digitalVal = digitalRead(2);      //read pin 2
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);           //turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);          //turn the led on 
  }
}
