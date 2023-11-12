void morseDot() {
  Serial.println("."); // Print a dot to the Serial Monitor
}

void morseDash() {
  Serial.println("-"); // Print a dash to the Serial Monitor
}

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bps
  delay(1000); // Pause for 1 second
}

void loop() {
  morseL(); // Print Morse code for "L"
  morseU(); // Print Morse code for "U"
  morseY(); // Print Morse code for "Y"
  morseI(); // Print Morse code for "I"
}

void morseL() {
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  Serial.println("/"); // Print a "/" to indicate the end of the letter
}

void morseU() {
  morseDot();
  morseDot();
  morseDash();
  Serial.println("/"); // Print a "/" to indicate the end of the letter
}

void morseY() {
  morseDash();
  morseDot();
  morseDash();
  morseDash();
  Serial.println("/"); // Print a "/" to indicate the end of the letter
}

void morseI() {
  morseDot();
  morseDot();
  Serial.println("/"); // Print a "/" to indicate the end of the letter
}
