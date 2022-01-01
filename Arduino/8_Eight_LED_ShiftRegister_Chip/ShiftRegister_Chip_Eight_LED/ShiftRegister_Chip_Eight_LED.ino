/*   The most common method of using 74CH595
 *   lctchPin->LOW : Begin transmitting signals.
 *   shiftOut(dataPin, clockPin, bitOrder, value)
 *   dataPin: the pin on which to output each bit. Allowed data types: int.
 *   clockPin: the pin to toggle once the dataPin has been set to the correct value. Allowed data types: int.
 *   bitOrder: which order to shift out the bits; either MSBFIRST or LSBFIRST. (Most Significant Bit First, or, Least Significant Bit First).
 *   value: the data to shift out. Allowed data types: byte. 
 *   lctchPin->HIch : The end of the transmission signal.
*/

int tDelay = 250;
int latchPin = 11;      // (11) ST_CP [RCK] on 74HC595
int clockPin = 9;      // (9) SH_CP [SCK] on 74HC595
int dataPin = 12;     // (12) DS [S1] on 74HC595

byte leds = 0;

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);

  //optional:
  bitSet(leds, 7);
  bitSet(leds, 6);
  bitSet(leds, 5);
  bitSet(leds, 4);
  updateShiftRegister();
  delay(1000);
  leds = 0;
  
  bitSet(leds, 3);
  bitSet(leds, 2);
  bitSet(leds, 1);
  bitSet(leds, 0);
  updateShiftRegister();
  delay(1000);
  
}

void loop() 
{
  
  //Turn off all led
  leds = 0;
  updateShiftRegister();
  
  delay(tDelay);
  
  for (int i = 8; i >= 0; i--)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(tDelay);
  }
}
