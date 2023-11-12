// This code's aim is to cook a random dish when the word "cook" is inputted

// We start by assigning values to the ingredients of the recipe, each representing the amount of each ingredient available
int tomatoes = 4;
int pasta = 0;
bool cheese = true;
double oliveOil = 1;

void setup() {
  Serial.begin(9600); // initializes serial communication by a baud of 9600
}

void loop() {
  String input = Serial.readString(); // the code reads the input
  if (input != "") { // the code reads the input, and prints it
    input.trim(); // removes the leading and ending blank characters in the input
    Serial.print("Lo que has escrito es: ");
    Serial.println(input); // prints additional text alongside the input
    decide(input); // executes the "decide" function
  }
}

void decide(String input) { // we define the "decide" function
  if (input == "cook") { // if the inputted string was "cook", the "cook" function is executed
    cook();
  }
  if (input == "oliveOil") {
    oliveOil++; // if, instead, "oliveOil" was inputted, we increase its value by 1
  }
  // Add more conditions for other ingredients if needed
}

void cook() { // we define the "cook" function
  Serial.println("We are cooking"); // prints the phrase "We are cooking"

  // Generate a random number to decide the dish
  int randomDish = random(1, 4); // assuming there are 3 possible dishes

  switch (randomDish) {
    case 1:
      makePizza(); // call the function to make pizza
      break;
    case 2:
      makePasta(); // call the function to make pasta
      break;
    case 3:
      makeSalad(); // call the function to make a salad
      break;
  }
}

void makePizza() {
  if (tomatoes >= 4 && pasta >= 1 && cheese && oliveOil >= 0.5) {
    Serial.println("You have a pizza!");
    tomatoes -= 4;
    pasta--;
    oliveOil -= 0.5;
  } else {
    Serial.println("Sorry, you don't have enough ingredients.");
  }
}

void makeSalad() {
  Serial.println("Making a salad!");
  if (tomatoes >= 2 && cheese && oliveOil >= 0.3) {
    Serial.println("You have a delicious salad!");
    tomatoes -= 2;
    oliveOil -= 0.3;
  } else {
    Serial.println("Sorry, you don't have enough ingredients.");
  }
}

void makePasta() {
  Serial.println("Making pasta!");
  if (pasta >= 1 && cheese && oliveOil >= 0.5) {
    Serial.println("You have a plate of pasta!");
    pasta--;
    oliveOil -= 0.5;
  } else {
    Serial.println("Sorry, you don't have enough ingredients.");
  }
}

