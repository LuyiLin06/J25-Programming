// Define the LED pin
int ledPin = 13;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void dot() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(500); // Dot duration
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(500); // Pause between dots and dashes
}

void dash() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(1500); // Dash duration
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(500); // Pause between dots and dashes
}

void loop() {
  // Call the function to spell "Luyi" in Morse code
  morseLuyi();
  delay(2000); // Wait for 2 seconds before repeating
}

void morseLuyi() {
  // Morse code for 'L'
  dot(); dash(); dot(); dot();
  delay(1500); // Pause between letters
  
  // Morse code for 'u'
  dot(); dot(); dash();
  delay(1500); // Pause between letters
  
  // Morse code for 'y'
  dash(); dot(); dash(); dash();
  delay(1500); // Pause between letters
  
  // Morse code for 'i'
  dot(); dot();
  delay(1500); // Pause between letters
}

