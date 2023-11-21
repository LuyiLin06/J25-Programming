void setup() {
  Serial.begin(9600);
  int numeroProblema = 1;
  for (numeroProblema = 1; numeroProblema <= 30; numeroProblema++) {
    resolverProblema(numeroProblema);
  }
}

void loop() {
}

void resolverProblema(int n) {
  Serial.print("Resolviendo el problema ");
  Serial.println(n);
}
// Sintaxis bucle for:
// for(definición de la variable de iteración; condición de iteración; pasos)