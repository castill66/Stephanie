

#include <Servo.h>

Servo servo;

// Settings
int InitialServoAngle = 0;
int ServoInc = 0;
int ServoIncGain = 1;
int FinalServoAngle = 180;
int ServoDelay = 10;
int PinNumber = 9;
int i = InitialServoAngle;


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

  servo.write(InitialServoAngle);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:

  servo.write(i);
  i += ServoInc;
  delay(ServoDelay);
  if(i == FinalServoAngle || i == InitialServoAngle )
  {
    ServoInc *= -1;
    delay(1000);
  }
}
