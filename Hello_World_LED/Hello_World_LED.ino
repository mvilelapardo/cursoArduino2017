void setup() {
  pinMode(12, OUTPUT);
}
void loop() {
  digitalWrite(12, HIGH);
  delay(2500);
  digitalWrite(12, LOW);
  delay(1500);
}
