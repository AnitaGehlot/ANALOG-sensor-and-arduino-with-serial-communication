#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup()
{
   Serial.begin(9600);
 // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
 // lcd.setCursor(0, 0);
  //lcd.print("hello, world!");
 // delay(2000);
  lcd.clear(); 
}

void loop() 
{
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); 
  int sensorValue1=sensorValue/2;
  lcd.setCursor(0,0);
  lcd.print(sensorValue);
  
  lcd.setCursor(0,1);
  lcd.print("TEMP:");
  lcd.setCursor(5,1);
  lcd.print(sensorValue1);
  
  // Serial.println(sensorValue);
   Serial.print("TEMP:");
   Serial.println(sensorValue1);
   delay(1000);
                 
}
