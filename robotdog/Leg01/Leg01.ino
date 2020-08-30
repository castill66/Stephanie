

#include <Servo.h>

Servo servo1;

void setup() {
  // put your setup code here, to run once:

servo1.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:

  servo1.write(50);
  delay(2000);
  servo1.write(135);     
  delay(2000);
//  servo1.write(180);
//  delay(2000);
  

}
