/* Digital Touch Sensor Module Capacitive Switch [S243] : http://rdiot.tistory.com/323 [RDIoT Demo] */

int touchPin = 2; 
 
void setup() {
  Serial.begin(9600);
  pinMode(touchPin, INPUT);  
}
 
void loop() {
  int touchValue = digitalRead(touchPin);
  Serial.println(touchValue);
 
  delay(100);  
}
