

#include <Servo.h>


Servo FRU;
Servo FRL;
Servo BRU;
Servo BRL;
Servo FLU;
Servo FLL;
Servo BLU;
Servo BLL;

int XRU = 70;
int XLU = 110;


int FRUAngle = 60;
int FRUInc = 1;
int FRUDelay = 20;


void setup() {
  // put your setup code here, to run once:

FRU.attach(2);
FRL.attach(3);
BRU.attach(4);
BRL.attach(5);
FLU.attach(6);
FLL.attach(7);
BLU.attach(8);
BLL.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  FRU.write(XRU);
  FRL.write(100);
  BRU.write(XRU);
  BRL.write(90);
  FLU.write(XLU);
  FLL.write(90);
  BLU.write(XLU);
  BLL.write(90);
  delay(860);
//  FRU.write(100);     
//  delay(860);
//  FRL.write(120);
//  delay(860);
 

}
