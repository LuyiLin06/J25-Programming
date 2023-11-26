void setup() {
  Serial.begin(9600);
  Serial.println("Numbers with digits sum of 10 or 5:");
  for (int i = 1; i <= 100; i++) {
    int digitSum = getDigitSum(i);
    if (digitSum == 10 || digitSum == 5) {
      Serial.println(i);
    }
  }
}

void loop() {
}

// Function to calculate the sum of digits
int getDigitSum(int number) {
  int sum = 0;
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}