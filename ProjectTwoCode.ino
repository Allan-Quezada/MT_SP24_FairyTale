#include <Servo.h>

Servo myservoA;
Servo myservoB;
Servo myservoC;
Servo myservoD;
const int switchPinA = 8;
const int switchPinB = 9;
const int switchPinC = 10
const int switchPinD = 11;
int switchValA = 0;
int switchValB = 0;
int switchValC = 0;
int switchValD = 0;
int prevSwitchValA = 0;
int prevSwitchValB = 0;
int prevSwitchValC = 0;
int prevSwitchValD = 0;
int posA = 0;
int posB = 0;
int posC = 0;
int posD = 0;

void setup() {  
  pinMode(switchPinA, OUTPUT);
  myservoA.attach(7);
  myservoA.write(0);
  myservoB.attach(6);
  myservoB.write(0);

}

void loop() {
  switchValA = digitalRead(switchPinA);

  if (switchValA != prevSwitchValA) {
    if (switchValA == HIGH){
      if (posA == 0){
        for (posA = 0; posA < 180; posA += 1) {
          myservoA.write(posA);
          delay(18);
    }
}
    }
prevSwitchValA = switchValA;
}

  switchValB = digitalRead(switchPinB);
  if (switchValB != prevSwitchValB) {
    if (switchValB == HIGH){
      if (posB == 0){
        for (posB = 0; posB < 180; posB += 1) {
           myservoB.write(posB);
          delay(18);
    }
}
    }  
prevSwitchValB = switchValB;
}
}
