

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int Servo1Angle = 60;
int Servo1Inc = 1;
int Servo1Delay = 20;


void setup() {
  // put your setup code here, to run once:

servo1.attach(4);
servo2.attach(5);
servo3.attach(6);
servo4.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(860);
//  servo1.write(100);     
//  delay(860);
//  servo2.write(120);
//  delay(860);
 

}
