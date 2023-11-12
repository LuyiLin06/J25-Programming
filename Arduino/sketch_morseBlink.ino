int ledPin = 13;
int dotDuration = 500; // We define the used ledPin and assign a value to "dotDuration"

void morseBlink(int numberOfDots) {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(dotDuration * numberOfDots); // Keep the LED on for the specified duration
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(dotDuration); // Pause before the next dot
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
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  morseL(); // Blink "L"
  delay(dotDuration * 3); // Pause between letters
  morseU(); // Blink "U"
  delay(dotDuration * 3);
  morseY(); // Blink "Y"
  delay(dotDuration * 3);
  morseI(); // Blink "I"
  delay(dotDuration * 3);
}