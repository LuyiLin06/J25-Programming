int ledPin = 13;
int dotDuration = 500;

void morseBlink(int numberOfDots) {
  digitalWrite(ledPin, HIGH);
  delay(dotDuration * numberOfDots);
  digitalWrite(ledPin, LOW);
  delay(dotDuration);
}

void morseL() {
  morseBlink(1);
  morseBlink(3);
  morseBlink(1);
  morseBlink(1);
}

void morseU() {
  morseBlink(1);
  morseBlink(1);
  morseBlink(3);
}

void morseY() {
  morseBlink(3);
  morseBlink(1);
  morseBlink(3);
  morseBlink(1);
}

void morseI() {
  morseBlink(1);
  morseBlink(1);
  delay(dotDuration * 3);
}
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  morseL();
  delay(dotDuration * 3);
  morseU();
  delay(dotDuration * 3);
  morseY();
  delay(dotDuration * 3);
  morseI();
  delay(dotDuration * 3);
}



