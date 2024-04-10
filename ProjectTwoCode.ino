#include <Servo.h>

Servo myservo00;
Servo myservo01;
Servo myservo02;
Servo myservo03;
const int switchPin00 = 8;
const int switchPin01 = 9;
const int switchPin02 = 10
const int switchPin03 = 11;
int switchVal00 = 0;
int switchVal01 = 0;
int switchVal02 = 0;
int switchVal03 = 0;
int prevSwitchVal00 = 0;
int prevSwitchVal01 = 0;
int prevSwitchVal02 = 0;
int prevSwitchVal03 = 0;
int pos00 = 0;
int pos01 = 0;
int pos02 = 0;
int pos03 = 0;

void setup() {  
  pinMode(switchPin00, OUTPUT);
  myservo00.attach(7);
  myservo00.write(0);
  myservo01.attach(6);
  myservo01.write(0);

}

void loop() {
  switchVal00 = digitalRead(switchPin00);

  if (switchVal00 != prevSwitchVal00) {
    if (switchVal00 == HIGH){
      if (pos00 == 0){
        for (pos00 = 0; pos00 < 180; pos00 += 1) {
          myservo00.write(pos00);
          delay(18);
    }
}
    }
prevSwitchVal00 = switchVal00;
}

  switchVal01 = digitalRead(switchPin01);
  if (switchVal01 != prevSwitchVal01) {
    if (switchVal01 == HIGH){
      if (pos01 == 0){
        for (pos01 = 0; pos01 < 180; pos01 += 1) {
           myservo01.write(pos01);
          delay(18);
    }
}
    }  
prevSwitchVal01 = switchVal01;
}
}
