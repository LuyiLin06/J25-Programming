int getDigitSum(int number) {
  int sum = 0;
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}
void setup() {
    Serial.println("\nNumbers with digits sum as even:");
  for (int i = 1; i <= 100; i++) {
    int digitSum = getDigitSum(i);
    if (digitSum % 2 == 0) {
      Serial.println(i);
    }
  }
}

void loop() {
}
