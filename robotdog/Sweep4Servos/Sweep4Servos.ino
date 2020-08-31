/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;  // create servo object to control a servo
Servo servo3;  // create servo object to control a servo
Servo servo4;  // create servo object to control a servo
int loopdelay = 30;


int pos1 = 80;    // variable to store the servo position
int pos2 = 100;    // variable to store the servo position
int pos;

void setup() {
  servo1.attach(7);  // attaches the servo on pin 9 to the servo object
  servo2.attach(6);  // attaches the servo on pin 9 to the servo object
  servo3.attach(5);  // attaches the servo on pin 9 to the servo object
  servo4.attach(4);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = pos1; pos <= pos2; pos += 1) 
  { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    servo3.write(pos);              // tell servo to go to position in variable 'pos'
    servo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(loopdelay);                       // waits 15ms for the servo to reach the position
  }

  
  for (pos = pos2; pos >= pos1; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    servo3.write(pos);              // tell servo to go to position in variable 'pos'
    servo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(loopdelay);                       // waits 15ms for the servo to reach the position
  }
}
