int RED=12;
int ORANGE=11;
int GREEN=10;

void setup() {
  pinMode(RED,OUTPUT);
  pinMode(ORANGE,OUTPUT);
  pinMode(GREEN,OUTPUT);
}

void loop() {
  
  digitalWrite(RED,HIGH);
  delay(6000);
  
  digitalWrite(RED,LOW);
  delay(0);
  
  digitalWrite(GREEN,HIGH);
  delay(4000);
  
  digitalWrite(GREEN,LOW);
  delay(0);
  
  digitalWrite(ORANGE,HIGH);
  delay(2000);
  
  digitalWrite(ORANGE,LOW);
  delay(0);
}