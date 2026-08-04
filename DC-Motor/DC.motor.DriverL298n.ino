
#include <Servo.h>

// Motor A
#define IN1 2
#define IN2 3

// Motor B
#define IN3 4
#define IN4 5

#define SERVO_PIN 9
#define ENA 9
#define ENB 10



Servo myServo;

void setup() {
   pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  analogWrite(ENA, 255); // سرعة كاملة
  analogWrite(ENB, 255); // سرعة كاملة
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(90);
}

void loop() {
  // Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  myServo.write(0);
  delay(2000);

  myServo.write(90);
  delay(2000);

  // Stop motors
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  myServo.write(180);
  delay(2000);
}

