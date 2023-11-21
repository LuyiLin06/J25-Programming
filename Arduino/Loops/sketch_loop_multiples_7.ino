void setup() {
  Serial.begin(9600);
  int numeroProblema = 1;
  while (numeroProblema<=30){
    if (numeroProblema%7==0){
      resolverProblemaDibujo (numeroProblema);
      numeroProblema++;
    }
  }
}

void loop() {
}
void resolverProblemaDibujo (int n){
    Serial.print ("Resolviendo problema");
    Serial.println (n);
}