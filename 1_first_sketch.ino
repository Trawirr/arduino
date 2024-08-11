void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int d=1000;
  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(13, LOW);
  delay(d);
}
