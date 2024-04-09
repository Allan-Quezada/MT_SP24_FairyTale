// #include <Servo.h>
// const int switchPin = 8;
// const int switchPin02 = 7
// int servoAngle = 0;
// float servoSpeed = 0.25;

// void setup() {
//   pinMode(switchPin, INPUT);
//   myservo.attach(9);
//   myservo.write(servoAngle);


// }

// void loop() {
//   if (digitalRead(switchPin) == HIGH) {
//     servoAngle += servoSpeed;
//   } else {
//     servoAngle = 0;
//   }
//   myservo.write(servoAngle);
  
//   if (digitialRead(switchPin02) == HIGH) {
//     servoAngle.write(180);
//   } else {
//     servoAngle = 0;
//   }
// }

// updated working code below

#include <Servo.h>

Servo myservo;
const int switchPin = 8;
int switchVal = 0;
int prevSwitchVal = 0;
int pos = 0;

void setup() {
  pinMode(switchPin, OUTPUT);
  myservo.attach(7);
  myservo.write(0);


}

void loop() {
  switchVal = digitalRead(switchPin);

  if (switchVal != prevSwitchVal) {
    if (switchVal == HIGH){
      if (pos == 0){
        for (pos = 0; pos < 180; pos += 1) {
           myservo.write(pos);
          delay(18);
    }
}
    }
prevSwitchVal = switchVal;
}
}
