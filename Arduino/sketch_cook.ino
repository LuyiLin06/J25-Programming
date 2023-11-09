int eggs = 4;
int dough = 0;
bool milk = true;
double flour = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  String input = Serial.readString();
  if (input != "") {
    input.trim();
    Serial.print("Lo que has escrito es: ");
    Serial.println(input);
    decide(input);
  }
}

void decide(String input) {
  if (input == "cook") {
    cook();
  }
  if (input=="flour"){flour++;}
}

void cook() {
  Serial.println("We are cooking");
  if (eggs >= 2 && dough >= 1 && flour >= 0.25 && milk) {
    Serial.println("You have a Minecraft cake!");
    eggs-= 2;
    dough--;
    flour-= 0.25;
  } else {
    Serial.println("Sorry, you don't have enough ingredients.");
  }
}
