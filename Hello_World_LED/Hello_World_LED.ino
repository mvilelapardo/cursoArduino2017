int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  while(brightness <= 255){
      analogWrite(led, brightness);
      brightness = brightness + fadeAmount;
      delay(30);
  }
  brightness = 0;
  digitalWrite(12, HIGH);
  delay(2500);
  digitalWrite(12, LOW);
  delay(1500);
}
