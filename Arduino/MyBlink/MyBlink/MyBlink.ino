/*
  My Blink: first test program - Arduino UNO R3 board's on/off LED ('L' LED)
*/

// the setup function runs once when you press reset or power the board

void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // turn 'L' LED on (once) for 3 seconds on startup
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); 
  digitalWrite(LED_BUILTIN, HIGH);
}


// the loop function runs over and over again forever

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait 1000ms
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);      
}
