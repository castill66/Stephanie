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
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);
    delay(1000);
  digitalWrite(3, LOW);
    delay(1000);
  digitalWrite(4, LOW);
    delay(1000);
  digitalWrite(5, LOW);
    delay(1000);
  digitalWrite(6, LOW);
    delay(1000);
  digitalWrite(7, LOW);
    delay(1000);
  digitalWrite(8, LOW);
    delay(1000);
  digitalWrite(9, LOW);
    delay(1000);
  digitalWrite(10, LOW);  
  delay(1000);
  digitalWrite(11, LOW);
    delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(500);


}
