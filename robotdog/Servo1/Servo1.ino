

#include <Servo.h>

Servo servo1;
Servo servo2;
void setup() {
  // put your setup code here, to run once:

servo1.attach(7);
servo2.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:

  servo1.write(60);
  delay(860);
  servo2.write(5);
  delay(860);
  servo1.write(100);     
  delay(860);
  servo2.write(120);
  delay(860);
//servo2.write(110);     
//delay(2000);
//servo2.write(180);
//  delay(2000);
  

}
