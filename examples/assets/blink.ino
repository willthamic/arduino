// The setup function runs once when the Arduino starts.
void setup() {
  pinMode(13, OUTPUT);   // Sets pin 13 to output.
}

// The loop function runs over and over again.
void loop() {
  digitalWrite(13, HIGH);   // Sets pin 13 to high voltage, (on).
  delay(1000);              // Wait for 1000ms, (1 second).
  digitalWrite(13, LOW);    // Sets pin 13 to low voltage, (off).
  delay(1000);              // Wait for 1000ms, (1 second).
}
