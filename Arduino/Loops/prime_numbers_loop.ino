void setup() {
  Serial.begin(9600);
  Serial.println("Prime Numbers:");
  for (int i = 1; i <= 100; i++) {
    if (isPrime(i)) {
      Serial.println(i);
    }
  }
}

void loop() {
}

// Function to check if a number is prime
bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
