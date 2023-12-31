const int flamePin = A0; 
const int buzzerPin = 9; 

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flameValue = analogRead(flamePin);

  Serial.print("Flame Sensor Value: ");
  Serial.println(flameValue);

  if (flameValue > 500) {
    Serial.println("Fire detected! Activating alarm.");
    activateAlarm();
  } else {
    delay(1000);f
  }
}

void activateAlarm() {
  digitalWrite(buzzerPin, HIGH);
  delay(5000); 
  digitalWrite(buzzerPin, LOW);
}