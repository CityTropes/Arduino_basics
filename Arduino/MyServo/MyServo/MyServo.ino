// including the Servo library so we can use the "class" like "Servo"
#include <Servo.h>

//create object  myservo
Servo myservo;

void setup(){
  /*
    "attach" and "write" are both functions from library "Servo" (create object myServo first),
  */
  myservo.attach(9);    //connect pin 9 with the control line(the middle line of Servo) 
  myservo.write(90);    // move servos to center position -> 90°
} 
void loop(){
  myservo.write(90);    // move servos to center position -> 90°
  delay(1000);
  myservo.write(60);    // move servos to center position -> 60°
  delay(1000);
  myservo.write(90);    // move servos to center position -> 90°
  delay(1000);
  myservo.write(120);   // move servos to center position -> 120°
  delay(1000);
  myservo.write(180);   // move servos to center position -> 120°
  delay(1000);
  myservo.write(90);   // move servos to center position -> 120°
  delay(1000);
}
