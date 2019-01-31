void setup() {
  // put your setup code here, to run once:

 pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(A0);

  if (sensorValue > 500)
  {
 digitalWrite(2, HIGH);    
  }

  else
  {

    digitalWrite(2, LOW);   
  }

delay(50);
}
