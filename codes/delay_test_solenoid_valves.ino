#define IN1 2
#define IN2 3

int i = 0;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void loop() {
  delay(5000);
  digitalWrite(IN2, HIGH);
  delay(20);
  digitalWrite(IN2, LOW);
  delay(i);
  digitalWrite(8, LOW);
  delay(235);
  digitalWrite(10, LOW);
  delay(20);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  i = i + 1;
}
