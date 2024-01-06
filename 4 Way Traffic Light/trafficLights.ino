// 4 Way Intersection Traffic Light
// Afraz Akram
// Wednesday, July 20, 2022
// This project is to simulate traffic lights at an intersection through the use of delays.

void setup() {
  // declare pins
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  }

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);   
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(6500);                      
  digitalWrite(13, LOW);   
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(2000);
  digitalWrite(13, LOW);   
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(7, HIGH);   
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(6500);
  digitalWrite(7, LOW);   
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(2000);
  digitalWrite(7, LOW);   
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(2000);
}
