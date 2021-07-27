#include<Servo.h>
Servo servoMain;
void setup() {
  servoMain.attach(7); //pin no 7
}

void loop() {
  servoMain.write(90); //right spin
  delay(1000);
  servoMain.write(0); // left spin
  delay(1000);
  servoMain.write(45); //right spin
  delay(1000);
  servoMain.write(145); //right spin
  delay(1000);
  servoMain.write(90); //left spin
  delay(1000);
  servoMain.write(0); //left spin
  delay(1000);
}
