void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(5000);
}

void loop() {
  digitalWrite(10, LOW);
  delay(20);
  digitalWrite(10, HIGH);
}
