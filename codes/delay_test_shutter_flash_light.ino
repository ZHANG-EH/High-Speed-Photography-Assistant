int i = 0;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}

void loop() {
  delay(5000);
  digitalWrite(8, LOW);
  delay(i);
  digitalWrite(10, LOW);
  delay(20);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  i = i + 1;
}
