#define IN3 4
#define IN4 5
#define IN1 2
#define IN2 3

void setup() {
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(5000);
}

void loop() {
  digitalWrite(IN4, HIGH);
  digitalWrite(IN2, HIGH);
  delay(40);
  digitalWrite(IN4, LOW);
  digitalWrite(IN2, LOW);
  delay(70);
  digitalWrite(8, LOW);
  delay(235);
  digitalWrite(10, LOW);
  delay(20);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
}
