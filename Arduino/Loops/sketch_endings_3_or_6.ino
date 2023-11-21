int i = 1;
void setup() {
  Serial.println("Numbers ending with 6 or 3:");
  for (int i = 1; i <= 100; i++) {
    if (i % 10 == 3 || i % 10 == 6) {
      void resolverProblemaDibujo ();
    }
  }
}
void loop() {
}

void resolverProblemaDibujo (int n){
    Serial.print ("Resolviendo problema");
    Serial.println (n);
}