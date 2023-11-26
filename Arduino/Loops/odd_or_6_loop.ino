void setup() {
  Serial.begin(9600);
  Serial.println("Problems that are odd or multiples of 6:");
  for (int i = 1; i <= 100; i++) {
    if (i % 2 != 0 || i % 6 == 0) {
      Serial.println(i);
    }
  }
}

void loop() {
}
