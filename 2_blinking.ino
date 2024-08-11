void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int d=500;
  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(13, LOW);
  delay(d);
}
