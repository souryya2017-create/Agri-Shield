
int ldrPin = 3;     // Digital pin from LDR
int relayPin = 2;

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrState = digitalRead(ldrPin);

  Serial.print("LDR State: ");
  Serial.println(ldrState);

  if (ldrState == LOW) {
    // DARK (usually LOW when dark)
    digitalWrite(relayPin, LOW);  // Relay ON (active LOW)
    Serial.println("Light ON");
  } else {
    // BRIGHT
    digitalWrite(relayPin, HIGH); // Relay OFF
    Serial.println("Light OFF");
  }

  delay(500);
}