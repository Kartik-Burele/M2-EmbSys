/**
 * @brief Defining pins and variables
 * 
 */
int redLed = 12;
int greenLed = 11;
int buzzer = 10;
int smokesensor = A5;
/**
 * @brief Setting sensor threshold value
 * 
 */ 
int sensorThres = 400;
/**
 * @file smoke.ino
 * @author Kartik B (you@domain.com)
 * @brief Including header file for LCD
 * @version 0.1
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<LiquidCrystal.h>
LiquidCrystal lcd(9,8,6,5,4,3);
/**
 * @brief Setting I/o pins and LCD screen
 * 
 */
void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokesensor,INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("    WEL-COME ");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMOKE DETECTION");
  lcd.setCursor(0,1);
  lcd.print("     SYSTEM");
  delay(2000);
  lcd.clear();
  /**
   * @brief Reading smokesensor's value
   * 
   */
  int analogSensor = analogRead(smokesensor);
   if(analogSensor >sensorThres)
  {
  lcd.setCursor(0,0);
  lcd.print("STATUS ....");   
  lcd.setCursor(0,1);
  lcd.print(" SMOKES ALERT");
  delay(4000);
  lcd.clear();
  } 
  else
  { 
  lcd.setCursor(0,0);
  lcd.print("STATUS ....");
  lcd.setCursor(0,1);
  lcd.print(" CONTROLLED");
  delay(4000);
  lcd.clear(); 
  }
}
/**
 * @brief Continuous loop
 * 
 */
void loop() 
{
    int analogSensor = analogRead(smokesensor);
    lcd.setCursor(0,0);
    lcd.print("SENSOR VAL =");
    lcd.println(analogSensor);
  /**
   * @brief Checks if sensor has reached the threshold value
   * 
   */
  if (analogSensor>sensorThres)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 1000, 200);
    lcd.setCursor(0,1);
    lcd.print(" *EXHAUSTS ON* ");
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);
    lcd.setCursor(0,1);
    lcd.print(" *EXHAUSTS OFF*"); 
  }
  delay(100);
}
