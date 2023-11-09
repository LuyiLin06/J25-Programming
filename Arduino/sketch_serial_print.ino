void morseDot() {
  Serial.println(".");
}

void morseDash() {
  Serial.println("-");
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  morseL();
  morseU(); 
  morseY(); 
  morseI(); 

void morseL() {
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  Serial.println("/");
}

void morseU() {
  morseDot();
  morseDot();
  morseDash();
  Serial.println("/");
}

void morseY() {
  morseDash();
  morseDot();
  morseDash();
  morseDash();
  Serial.println("/");
}

void morseI() {
  morseDot();
  morseDot();
  Serial.println("/");
}
