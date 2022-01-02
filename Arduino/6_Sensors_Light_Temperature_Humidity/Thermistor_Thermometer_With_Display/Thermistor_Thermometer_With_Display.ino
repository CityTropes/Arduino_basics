#include <LiquidCrystal.h>
int tempPin = 0;    //thermistor pin is connected to arduino's A0 pin

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


void setup()
{
  /*lcd.begin(cols, rows)
    lcd: a variable of type LiquidCrystal
    cols: the number of columns that the display has
    rows: the number of rows that the display has 
  */
  lcd.begin(16, 2);
}

void loop()
{
  int tempReading = analogRead(tempPin);
 
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );       //  Temp Kelvin
  float tempC = tempK - 273.15;            // Convert Kelvin to Celcius
  //float tempF = (tempC * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit
  
 
  // Display Temperature in C
  lcd.setCursor(0, 0);        //select row 0, column 0 of display
  lcd.print("Temp:        C  ");
  
  lcd.setCursor(6, 0);        //select column 6
  // Display Temperature in C
  lcd.print(tempC);

  lcd.setCursor(1, 1);        //select row 1, column 1 of display
  lcd.print("-CityTropes-");
  delay(1000);
}
