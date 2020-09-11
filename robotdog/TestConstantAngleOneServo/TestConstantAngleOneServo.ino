

#include <Servo.h>

Servo servo;

// Settings
int InitialServoAngle = 90;
int ServoInc = 0;
int ServoIncGain = 1;
int FinalServoAngle = 170;
int ServoDelay = 40;
int PinNumber = 13;


void setup() {
  // put your setup code here, to run once:
  // Attaching the Servo object to an specific pin
  servo.attach(PinNumber);
 
  // Determine the polarity of the Increase value
  if (InitialServoAngle < FinalServoAngle)
    ServoInc = 1*ServoIncGain;
  else if (InitialServoAngle > FinalServoAngle)
    ServoInc = -1*ServoIncGain;
  else
    ServoInc = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=InitialServoAngle; i <= FinalServoAngle; i+= ServoInc)
  {
    servo.write(i);
    delay(ServoDelay);
  }

  for(i=FinalServoAngle; i >= InitialServoAngle; i-= ServoInc)
  {
    servo.write(i);
    delay(ServoDelay);
  }
}
