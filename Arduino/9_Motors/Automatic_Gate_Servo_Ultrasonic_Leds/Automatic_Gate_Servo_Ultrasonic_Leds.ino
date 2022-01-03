#include "SR04.h"     //include library HC-SR04 for ultrasonic sensor
#include <Servo.h>    // including the Servo library

#define TRIG_PIN 11
#define ECHO_PIN 12


const byte LED_GREEN = 3;  
const byte LED_RED = 2;

Servo myServo;
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long distance;

void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  Serial.begin(9600);    //Initialization of Serial Port (optional)
  myServo.attach(10);    //connect pin 9 with the control line(the middle line of Servo) 
  myServo.write(0);    // move servos to center position -> 90°


  

  //test
  myServo.write(90);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_RED, HIGH);
  delay(120);
  digitalWrite(LED_RED, LOW);
  delay(120);
  digitalWrite(LED_RED, HIGH);
  delay(120);
  myServo.write(0);
  digitalWrite(LED_RED, HIGH);
  delay(120);
  digitalWrite(LED_RED, LOW);
  delay(120);
  digitalWrite(LED_RED, HIGH);
  delay(120);
  
  digitalWrite(LED_RED, LOW);
  delay(250);

}

void loop() {
   digitalWrite(LED_RED, HIGH);
   distance = sr04.Distance();
   Serial.print(distance);      //optional
   Serial.println("cm");

  if(distance < 10){
    openGate();
  }
  
  delay(300);

}

void openGate(){
  myServo.write(90);    // move servos to center position -> 90° (open)
    digitalWrite(LED_RED, HIGH);
    delay(120);
    digitalWrite(LED_RED, LOW);
    delay(120);
    digitalWrite(LED_RED, HIGH);
    delay(120);
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_GREEN, HIGH);
   delay(3500);

   distance = sr04.Distance();
   if(distance < 20){
    Serial.print(distance);      //optional
    Serial.println("cm (gate check)");
    delay(3000);
   }
   
   myServo.write(0);  //close gate 
   digitalWrite(LED_GREEN, LOW);
   digitalWrite(LED_RED, HIGH);
    delay(120);
    digitalWrite(LED_RED, LOW);
    delay(120);
    digitalWrite(LED_RED, HIGH);
    delay(120); 
}
