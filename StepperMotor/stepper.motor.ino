#define STEP_PIN 8
#define DIR_PIN 9
#define EN_PIN 10

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(EN_PIN, OUTPUT);

  digitalWrite(EN_PIN, LOW);   // تفعيل الدرايفر
}

void loop() {

  digitalWrite(DIR_PIN, HIGH);

  for (int i = 0; i < 200; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(800);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);
  }

  delay(1000);

  digitalWrite(DIR_PIN, LOW);

  for (int i = 0; i < 200; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(800);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);
  }

  delay(1000);
}