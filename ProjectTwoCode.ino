#include <Servo.h>

Servo myservoA;
Servo myservoB;
Servo myservoC;
Servo myservoD;
const int switchPinA = 8;
const int switchPinB = 9;
const int switchPinC = 10
const int switchPinD = 11; // Pin # for alligator clips 
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
bool A = false;
bool B = false;
bool B2 = false;
bool C = false;
bool D = false;
// Initializing all of the variables we will need.

void setup() {  
  pinMode(switchPinA, INPUT); // Previously had it at "OUTPUT". I'm not sure if it will make a difference, but I'm marking it now if it does.
  pinMode(switchPinB, INPUT);
  pinMode(switchPinC, INPUT);
  pinMode(switchPinD, INPUT);
  myservoA.attach(7);
  myservoA.write(0);
  myservoB.attach(6);
  myservoB.write(0);
  myservoC.attach(5);
  myservoC.write(0);
  myservoD.attach(4);
  myservoD.write(0); // Pin # and starting position for the Servos

}

void loop() {
  switchValA = digitalRead(switchPinA);

  if (switchValA != prevSwitchValA) {
    if (switchValA == HIGH){
      if (posA == 0){
        A = true;
        for (posA = 0; posA < 180; posA += 1) {
          myservoA.write(posA);
          delay(18);
    }
}
    }
}
// ----------------------------------------------------------------------------
  if (A == true) {
    switchValB = digitalRead(switchPinB);
    if (switchValB != prevSwitchValB) {
      if (switchValB == HIGH){
        B = true;
        if (posB == 0){
          for (posB = 0; posB < 180; posB += 1) {
            myservoB.write(posB);
            delay(18);
    }
}
    }  
}
}
// ----------------------------------------------------------------------------
  if (B == true) {
    switchValC = digitalRead(switchPinC);
    if (switchValC != prevSwitchValC) {
      if (switchValC == HIGH){
        C = true;
        myservoC.write(180);
    }
}
    }  
// ----------------------------------------------------------------------------
    if (C == true) {
      switchValB = digitalRead(switchPinB);
      if (switchValB != prevSwitchValB) {
        if (switchValB == LOW){
          B2 = true;
          if (posB == 180){
            for (posB = 180; posB < 0; posB -= 1) {
              myservoB.write(posB);
              delay(18);
    }
}
    }  
}
}
// ----------------------------------------------------------------------------
    if (B2 = true) {
      switchValD = digitalRead(switchPinD);
      if (switchValD != prevSwitchValD) {
        if (switchValD == HIGH){
          D = true;
          myservoC.write(180);

    }
}
    }  
// ----------------------------------------------------------------------------
  prevSwitchValA = switchValA;
  prevSwitchValB = switchValB;
  prevSwitchValC = switchValC;
  prevSwitchValD = switchValD;
}

