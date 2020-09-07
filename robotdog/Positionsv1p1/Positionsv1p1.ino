

#include <Servo.h>


Servo FrontRightUpper;
Servo FrontRightLower;
Servo BackRightUpper;
Servo BackRightLower;
Servo FrontLeftUpper;
Servo FrontLeftLower;
Servo BackLeftUpper;
Servo BackLeftLower;

// current angles
int FRUangle = 90;
int FRLangle = 90;
int BRUangle = 90;
int BRLangle = 90;
int FLUangle = 90;
int FLLangle = 90;
int BLUangle = 90;
int BLLangle = 90;

int FrontRightUpperAngle = 60;
int FrontRightUpperInc = 1;
int FrontRightUpperDelay = 20;


void setup() {
  // put your setup code here, to run once:
  
  // open the serial port at 9600 bps for debugging
  Serial.begin(9600);

  // Assigning pina to the servos objects
  FrontRightUpper.attach(2);
  FrontRightLower.attach(3);
  BackRightUpper.attach(4);
  BackRightLower.attach(5);
  FrontLeftUpper.attach(6);
  FrontLeftLower.attach(7);
  BackLeftUpper.attach(8);
  BackLeftLower.attach(9);

  // Set all servos at 90 degrees
  Angle90();

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Stand up");
  GotoAngles( 70, 100, 70, 90, 110, 90, 110, 100);
  delay(5000);
  Serial.println("Sit down");
  GotoAngles( 70, 140, 90, 50, 110, 30, 90, 140);
  delay(5000);
  

}

void GotoAngles(int FRU, int FRL, int BRU, int BRL, int FLU, int FLL, int BLU, int BLL)
{
  // angle reached status
  boolean  FRUanglereached = false;
  boolean  FRLanglereached = false;
  boolean  BRUanglereached = false;
  boolean  BRLanglereached = false;
  boolean  FLUanglereached = false;
  boolean  FLLanglereached = false;
  boolean  BLUanglereached = false;
  boolean  BLLanglereached = false;  

    // angle reached status
  int  FRUincsign = 0;
  int  FRLincsign = 0;
  int  BRUincsign = 0;
  int  BRLincsign = 0;
  int  FLUincsign = 0;
  int  FLLincsign = 0;
  int  BLUincsign = 0;
  int  BLLincsign = 0;  

// Determinie if the angle need to be increased or decreased or no change
  FRUincsign = DetermineSign(FRUangle, FRU);
  FRLincsign = DetermineSign(FRLangle, FRL);
  BRUincsign = DetermineSign(BRUangle, BRU);
  BRLincsign = DetermineSign(BRLangle, BRL);
  FLUincsign = DetermineSign(FLUangle, FLU);
  FLLincsign = DetermineSign(FLLangle, FLL);
  BLUincsign = DetermineSign(BLUangle, BLU);
  BLLincsign = DetermineSign(BLLangle, BLL);     
  
  while(!(FRUanglereached && FRLanglereached && BRUanglereached && BRLanglereached && FLUanglereached && FLLanglereached
          && BLUanglereached && BLLanglereached))
  {
    if(FRUangle != FRU)
      FRUangle +=  FRUincsign;
    else
      FRUanglereached = true;

    if(FRLangle != FRL)
      FRLangle += FRLincsign;
    else
      FRLanglereached = true;

    if(BRUangle != BRU)
      BRUangle +=  BRUincsign;
    else
      BRUanglereached = true;

    if(BRLangle != BRL)
      BRLangle +=  BRLincsign;
    else 
      BRLanglereached = true;

    if(FLUangle != FLU)
      FLUangle +=  FLUincsign;
    else
      FLUanglereached = true;

    if(FLLangle != FLL)
      FLLangle +=  FLLincsign;
    else
      FLLanglereached = true;

    if(BLUangle != BLU)
      BLUangle +=  BLUincsign;
    else
      BLUanglereached = true;

    if(BLLangle != BLL)
      BLLangle +=  BLLincsign;
    else
      BLLanglereached = true;

  
    FrontRightUpper.write(FRUangle);
    FrontRightLower.write(FRLangle);
    BackRightUpper.write(BRUangle);
    BackRightLower.write(BRLangle);
    FrontLeftUpper.write(FLUangle);
    FrontLeftLower.write(FLLangle);
    BackLeftUpper.write(BLUangle);
    BackLeftLower.write(BLLangle);
    delay(100);
    
  }
}


int DetermineSign(int Angle1, int Angle2)
{
  int IncSign;
  // Determinie if the angle need to be increased or decreased or no change
  if (Angle1 > Angle2)
    IncSign = -1;
  else if (Angle1 < Angle2)
    IncSign = +1;
    else
    IncSign = 0;

    return IncSign;
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
