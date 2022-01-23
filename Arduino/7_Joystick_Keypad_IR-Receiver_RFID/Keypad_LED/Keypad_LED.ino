#include <Keypad.h>
#include <Wire.h>

const byte LED1 = 10;  //red
const byte LED2 = 11; //green

const byte ROWS = 4; 
const byte COLS = 4; 

byte myLEDis = 255;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Wire.begin(); // join i2c bus (address optional for master)
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }

  switch (customKey)
  {
    
    case '8':
      digitalWrite(myLEDis, LOW);
    
      myLEDis = LED2;
        if (myLEDis != 255)
        {
          digitalWrite(myLEDis, HIGH);
        }
        else
        {
          digitalWrite(myLEDis, LOW);
        }
        delay(2000);
        digitalWrite(myLEDis, LOW);
      break;

    default:
      myLEDis = LED1;
      if (myLEDis != 255)
      {
        digitalWrite(myLEDis, HIGH);
      }
      break;
  }
}
