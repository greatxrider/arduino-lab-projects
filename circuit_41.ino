#include <Servo.h>
int servo_position;
Servo jepservo;

void setup() {
  jepservo.attach(11);
  Serial.begin(9600);
}

void loop() {
  jepservo.write(0);
  for(int i=0; i<=180; i+=5)
  {
    jepservo.write(i);
    delay(500);
    servo_position=jepservo.read();
    Serial.print("Servo position: ");
    Serial.print(servo_position);
    Serial.print("\n");
  }
}