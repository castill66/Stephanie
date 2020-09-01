
  int timedelay = 30 ;
  int mindelay = 10;
  float k = 1/10.0;
 

void setup() {
  // put your setup code here, to run once:

  // Configure the pin to control the led

  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
;
}

void loop() {
  // put your main code here, to run repeatedly:

  //digitalWrite(13, HIGH);
  //digitalWrite(2, LOW);
  //delay(500);
  //digitalWrite(3, LOW);
  //delay(500);
  //digitalWrite(4, LOW);
  //delay(500);
  //digitalWrite(5, LOW);
  //delay(500);
  //digitalWrite(6, LOW);
  //delay(500);
  //digitalWrite(7, LOW);
  //delay(50);
  //digitalWrite(8, LOW);
  //delay(50);
  //digitalWrite(9, LOW);
  //delay(50);
  //digitalWrite(10, LOW);
  //delay(50);  
  //digitalWrite(11, LOW);
  //delay(50);
  //digitalWrite(12, LOW);
  //delay(100);
  //digitalWrite(13, LOW);
  //delay(50);
  //digitalWrite(2, HIGH);
  //delay(50);
  //digitalWrite(3, HIGH);
  //delay(50);
  //digitalWrite(4, HIGH);
  //delay(50);
  //digitalWrite(5, HIGH);
  //delay(50);
  //digitalWrite(6, HIGH);
  //delay(50);
  //digitalWrite(7, HIGH);
  //delay(50);
  //digitalWrite(8, HIGH);
  //delay(50);
  //digitalWrite(9, HIGH);
  //delay(50);
  //digitalWrite(10, HIGH);
  //delay(50);
  //digitalWrite(11, HIGH);
  //delay(50);
  //digitalWrite(12, LOW);
  //delay(50);
  //digitalWrite(12, HIGH);
  //delay(500);


//  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(12, HIGH);
  delay(timedelay);
  digitalWrite(12,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(11, HIGH);
  delay(timedelay);
  digitalWrite(11,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(10,HIGH);
  delay(timedelay);
  digitalWrite(10,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(9,HIGH);
  delay(timedelay);
  digitalWrite(9,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(8,HIGH);
  delay(timedelay);
  digitalWrite(8, LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(7,HIGH);
  delay(timedelay);
  digitalWrite(7,LOW);
  timedelay = analogRead(0)/4 + mindelay;

  digitalWrite(6,HIGH);
  delay(timedelay);
  digitalWrite(6,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(5,HIGH);
  delay(timedelay);
  digitalWrite(5,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(4,HIGH);
  delay(timedelay);
  digitalWrite(4,LOW);
  timedelay = analogRead(0)*k + mindelay;
  
  digitalWrite(3,HIGH);
  delay(timedelay);
  digitalWrite(3,LOW);
  timedelay = analogRead(0)/4 + mindelay;

//  digitalWrite(2,HIGH);
//  delay(timedelay);
//  digitalWrite(2,LOW);

  digitalWrite(3,HIGH);
  delay(timedelay);
  digitalWrite(3,LOW);
  timedelay = analogRead(0)*k + mindelay;
  
  digitalWrite(4,HIGH);
  delay(timedelay);
  digitalWrite(4,LOW);
  timedelay = analogRead(0)*k + mindelay;
  
  digitalWrite(5,HIGH);
  delay(timedelay);
  digitalWrite(5,LOW);
  timedelay = analogRead(0)*k + mindelay;
    
  digitalWrite(6,HIGH);
  delay(timedelay);
  digitalWrite(6,LOW);
  timedelay = analogRead(0)*k + mindelay;
  
  digitalWrite(7,HIGH);
  delay(timedelay);
  digitalWrite(7,LOW);
  timedelay = analogRead(0)*k + mindelay;
  
  digitalWrite(8,HIGH);
  delay(timedelay);
  digitalWrite(8,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(9,HIGH);
  delay(timedelay);
  digitalWrite(9,LOW);
  timedelay = analogRead(0)*k + mindelay;

  digitalWrite(10,HIGH);
  delay(timedelay);
  digitalWrite(10,LOW);
  timedelay = analogRead(0)/4 + mindelay;
  
  digitalWrite(11, HIGH);
  delay(timedelay);
  digitalWrite(11,LOW);
  timedelay = analogRead(0)*k + mindelay;
  
  digitalWrite(12, HIGH);
  delay(timedelay);
  digitalWrite(12,LOW);
  timedelay = analogRead(0)*k + mindelay;

}
