void setup() {
  Serial.begin(9600);
  Serial.println("Numbers with at least a 3 in their digits:");
  for (int i = 1; i <= 100; i++) {
    if (hasDigit(i, 3)) {
      Serial.println(i);
    }
  }
}

void loop() {
}

bool hasDigit(int number, int digit) {
  while (number > 0) {
    if (number % 10 == digit) {
      return true;
    }
    number /= 10;
  }
  return false;
}
