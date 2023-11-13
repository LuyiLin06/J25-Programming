void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

void loop(){
  // the void loop function loops this following line of code:
  digitalWrite(13, 1); // turns the LED on ("1" is equivalent to the HIGH voltage level)
  delay(500); // wait half a second
  digitalWrite(13, 0); // turn the LED off
  delay(500); // wait half a second
}
