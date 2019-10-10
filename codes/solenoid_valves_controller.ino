#define IN3 4
#define IN4 5
#define IN1 2
#define IN2 3
#define IN5 6
#define IN6 7

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(IN5, LOW);
  digitalWrite(IN6, LOW);
  igitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(5000);
}

void loop() {
  digitalWrite(IN5, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN2, HIGH);
  delay(20);
  digitalWrite(IN5, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(IN2, LOW);
}
