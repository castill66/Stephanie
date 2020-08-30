

#include <Servo.h>

Servo servo1;
Servo servo2;

int Servo1Angle = 60;
int Servo1Inc = 1;
int Servo1Delay = 20;


void setup() {
  // put your setup code here, to run once:

servo2.attach(6);
servo1.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:

 servo1.write(Servo1Angle);
 delay(Servo1Delay);
 Servo1Angle = Servo1Angle + Servo1Inc;
 if(Servo1Angle == 100)
 {
  Servo1Inc = -1; 
 }
 if(Servo1Angle == 60)
 {
  Servo1Inc = 1;
 }
 



//  servo1.write(60);
//  delay(860);
//  servo2.write(5);
//  delay(860);
//  servo1.write(100);     
//  delay(860);
//  servo2.write(120);
//  delay(860);
 

}
