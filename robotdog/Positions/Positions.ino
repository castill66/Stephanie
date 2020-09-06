

#include <Servo.h>


Servo FrontRightUpper;
Servo FrontRightLower;
Servo BackRightUpper;
Servo BackRightLower;
Servo FrontLeftUpper;
Servo FrontLeftLower;
Servo BackLeftUpper;
Servo BackLeftLower;

int XRU = 70;
int XLU = 110;


int FrontRightUpperAngle = 60;
int FrontRightUpperInc = 1;
int FrontRightUpperDelay = 20;


void setup() {
  // put your setup code here, to run once:

FrontRightUpper.attach(2);
FrontRightLower.attach(3);
BackRightUpper.attach(4);
BackRightLower.attach(5);
FrontLeftUpper.attach(6);
FrontLeftLower.attach(7);
BackLeftUpper.attach(8);
BackLeftLower.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:


//  Angle90();

  StandPosition();
  delay(5000);
  SitPosition();
  delay(5000);
}

void StandPosition()
{

  FrontRightUpper.write(70);
  FrontRightLower.write(100);
  BackRightUpper.write(70);
  BackRightLower.write(90);
  FrontLeftUpper.write(110);
  FrontLeftLower.write(90);
  BackLeftUpper.write(110);
  BackLeftLower.write(100);

}

void SitPosition()
{

  FrontRightUpper.write(70);
  FrontRightLower.write(140);
  BackRightUpper.write(90);
  BackRightLower.write(50);
  FrontLeftUpper.write(110);
  FrontLeftLower.write(30);
  BackLeftUpper.write(90);
  BackLeftLower.write(140);

}

void Angle90()
{
  
  FrontRightUpper.write(90);
  FrontRightLower.write(90);
  BackRightUpper.write(90);
  BackRightLower.write(90);
  FrontLeftUpper.write(90);
  FrontLeftLower.write(90);
  BackLeftUpper.write(90);
  BackLeftLower.write(90);

}
