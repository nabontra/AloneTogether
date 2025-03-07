int sensorPin = A0;
int ledPin = 7;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);

  if (sensorValue >= 500){
    digitalWrite(ledPin, HIGH);
  delay(1000); //duration to run fog machine
  digitalWrite(ledPin, LOW);
  delay(5000); //delay before button is available to prevent spamming
  }
  else{
    digitalWrite(ledPin, LOW);
  }

  delay(50);
}