int LED=13;
int Button=8;

void setup() {
  pinMode (LED, OUTPUT);
  pinMode (Button, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(Button)==LOW)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}