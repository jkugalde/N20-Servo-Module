#include "N20Servo.h"

const int pinsA[4] = {2,3,A0,4}; // dir, pwm, sensor in, sleep. 
const float kA[3] = {4,0.2,0}; // PID values, kp, kd, ki
const int refsA[2] = {785,530}; //analog reference for angle 0 and 90 (from the horizontal)

int newpos = 45;
int pwm = 255;

N20Servo L; //creates the leg

void setup() {
Serial.begin(9600);
L.assignpins(pinsA);
L.setrefs(refsA);
L.setk(kA);

}

void loop() {

if(Serial.available()>0){

newpos=Serial.parseInt();

}

L.goTo(newpos,pwm);

}
