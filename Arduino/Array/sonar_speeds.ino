void setup() {
  Serial.begin(9600);

  // Array de profundidades
  int depths[] = {90, 85, 88, 83, 82, 91, 91, 100, 97};
  
  // Sonar 2: Contar aumentos, descensos e iguales
  int increases = 0, decreases = 0, equals = 0;
  for (int i = 1; i < sizeof(depths) / sizeof(depths[0]); i++) {
    if (depths[i] > depths[i - 1]) {
      increases++;
    } else if (depths[i] < depths[i - 1]) {
      decreases++;
    } else {
      equals++;
    }
  }

  Serial.print("Sonar 2 - Aumentos: ");
  Serial.print(increases);
  Serial.print(", Descensos: ");
  Serial.print(decreases);
  Serial.print(", Iguales: ");
  Serial.println(equals);

  // Sonar 3: Array adicional speeds
  int speeds[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 1; i < sizeof(depths) / sizeof(depths[0]); i++) {
    speeds[i] = depths[i] - depths[i - 1];
  }

  // Sonar 4: Mínimo, máximo y media de speeds
  int minSpeed = speeds[0];
  int maxSpeed = speeds[0];
  int totalSpeed = speeds[0];

  for (int i = 1; i < sizeof(speeds) / sizeof(speeds[0]); i++) {
    if (speeds[i] < minSpeed) {
      minSpeed = speeds[i];
    }
    if (speeds[i] > maxSpeed) {
      maxSpeed = speeds[i];
    }
    totalSpeed += speeds[i];
  }

  int averageSpeed = totalSpeed / (sizeof(speeds) / sizeof(speeds[0]));

  Serial.print("Sonar 4 - Mínimo: ");
  Serial.print(minSpeed);
  Serial.print(", Máximo: ");
  Serial.print(maxSpeed);
  Serial.print(", Media: ");
  Serial.println(averageSpeed);
}

void loop() {
}