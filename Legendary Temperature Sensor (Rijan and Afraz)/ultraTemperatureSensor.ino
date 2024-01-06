#include <LiquidCrystal.h>
#include <DHT.h>

DHT tempSensor(8, DHT11);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int red = 1;
int green = 6;
int blue = 7;
int buzzer = 13;

void setup() {
 pinMode(8, INPUT);
 Serial.begin(9600);
 tempSensor.begin();
 lcd.begin(16, 2);
}

void loop() {
 int temp = tempSensor.readTemperature();
 int hum = tempSensor.readHumidity();
 Serial.println(temp);
 Serial.println(hum);
 lcd.print("  Temp: ");
 lcd.print(temp);
 lcd.print(" C");
 lcd.setCursor(1, 1);
 lcd.print(" Hum: ");
 lcd.print(hum);
 lcd.print(" %");
 if (temp >= 5 && temp <= 20) {
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
 }
 else if (temp < 5) {
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
 }
 else if (temp > 20 && temp <= 50) {
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
 }
 else if (temp > 50) {
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  for (int i = 0; i < 25; i++) {
    tone(buzzer, 293);
    delay(40);
    tone(buzzer, 587);
    delay(40);
    tone(buzzer, 1175);
    delay(40);
    noTone(buzzer);
  }
 }
 else {
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
 }
 delay(2000);
 lcd.clear();
   }
