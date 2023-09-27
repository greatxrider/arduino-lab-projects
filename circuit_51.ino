int sensorPin = A0;
int reading;
float voltage;
float tempC;

void setup()
{ 
  Serial.begin(9600);
}

void loop()
{
  reading = analogRead(sensorPin);
  voltage = reading * 4.68;
  voltage = voltage / 1024.0;
  tempC = (voltage - 0.5) * 100;
  Serial.print(tempC);
  Serial.println(" degrees C \n");
  delay(500);
}