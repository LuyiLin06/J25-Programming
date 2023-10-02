int dotDuration = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // L
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration*3);
  //U
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration*3);
  //Y
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration*3);
  //I
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration*3);
  //space
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration*7);

  dotDuration = dotDuration-100;
}
