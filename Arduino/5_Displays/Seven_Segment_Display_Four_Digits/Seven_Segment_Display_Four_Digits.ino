#include "SevSeg.h"
SevSeg sevseg; 

//Since multi-digit displays use digit pins, we also need to define which Arduino pins will connect to the digit pins. 
//Using byte digitPins[] = {10, 11, 12, 13} sets Arduino pin 10 as the first digit pin, Arduino pin 11 to the second digit pin, and so on

void setup(){
  byte numDigits = 4;
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {9, 2, 3, 5, 6, 8, 7, 4};

  bool resistorsOnSegments = true; 
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop(){
    sevseg.setNumber(1234, 2);
    sevseg.refreshDisplay(); 
}
