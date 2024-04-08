#include <Servo.h>
const int switchPin = 8;
const int switchPin02 = 7
int servoAngle = 0;
float servoSpeed = 0.5;

void setup() {
  pinMode(switchPin, INPUT);
  myservo.attach(8);
  myservo.write(servoAngle);


}

void loop() {
  if (digitalRead(switchPin) == HIGH) {
    servoAngle += servoSpeed;
  } else {
    servoAngle = 0;
  }
  myservo.write(servoAngle);
  
  if (digitialRead(switchPin02) == HIGH) {
    servoAngle.write(180);
  } else {
    servoAngle = 0;
  }
}
