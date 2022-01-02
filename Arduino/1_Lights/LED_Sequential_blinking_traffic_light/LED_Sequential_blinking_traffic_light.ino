
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

//connect leds to these pins (use 220ohm resistors):
int LED1 = 13;    //red
int LED2 = 12;    //yellow
int LED3 = 11;    //green

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);

   //optional: flash all lights at startup
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH);
   delay(1000);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
}


void loop() {       //traffic light loop. Green, yellow, red
                   
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(5000);         
  digitalWrite(LED3, LOW);     // turn off LED3         

  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(1500);  
  digitalWrite(LED2, LOW);     // turn off LED2

  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(5000); 
  digitalWrite(LED1, LOW);     // turn off LED1                 
}
