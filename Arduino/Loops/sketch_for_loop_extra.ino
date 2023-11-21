int startNumber = 1; // User-defined start of the range
int endNumber = 100; // User-defined end of the range
int suma = 0;

void setup() {
  Serial.begin(9600);
  for (int n = startNumber; n <= endNumber; n++) {
    comprobador(n);
  }
  Serial.print("La suma de todos los pares entre ");
  Serial.print(startNumber);
  Serial.print(" y ");
  Serial.print(endNumber);
  Serial.print(" es: ");
  Serial.println(suma);
}

void loop() {
}

void comprobador(int n) {
  if (n % 2 == 0) {
    Serial.println(n);
    suma = suma + n;
  }
}

