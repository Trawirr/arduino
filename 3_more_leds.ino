int d;

void setup() {
  for(int i = 0; i < 4; i++) pinMode(10 + i, OUTPUT);

  d = 100;
}

void loop() {
  for(int i = 0; i < 4; i++){
    digitalWrite(10 + i, HIGH);
    delay(d);
    digitalWrite(10 + i, LOW);
  }
  d += random(-20, 20);
  d = max(20, d);
}
