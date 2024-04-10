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
