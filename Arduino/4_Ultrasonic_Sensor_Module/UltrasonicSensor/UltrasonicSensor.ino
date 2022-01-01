//include library HC-SR04
#include "SR04.h"

#define TRIG_PIN 11
#define ECHO_PIN 12

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);    //Initialization of Serial Port
   delay(1000);
}

void loop() {
   a = sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   delay(1000);
}
