// This code's aim is to cook a recipe (more specifically, a cake) when the word "cook" is inputted

//We start by asigning values to the ingredients of the recipe, each representing the amount of each ingredient available
int eggs = 4;
int dough = 0;
bool milk = true;
double flour = 1;

void setup() {
  Serial.begin(9600); // initializes serial communication by a baud of 9600
}

void loop() {
  String input = Serial.readString(); // the code reads the input
  if (input != "") { // the code reads the input, and prints it
    input.trim(); // removes the leading and ending blank characters in the input
    Serial.print("Lo que has escrito es: ");
    Serial.println(input); // prints additional text alongside the input
    decide(input); //executes the "decide" function
  }
}

void decide(String input) { //we define the "decide" function
  if (input == "cook") { // if the inputted string was "cook", the "cook" function is executed
    cook();
  }
  if (input=="flour"){flour++;} // if, instead, "flour" was inputted, we increase its value by 1
}

void cook() { // we define the "cook" function
  Serial.println("We are cooking"); // prints the phrase "We are cooking"
  if (eggs >= 2 && dough >= 1 && flour >= 0.25 && milk) { //the machine checks if there's enough ingredients to cook
    Serial.println("You have a cake!"); //if so, the code tells us we have a cake
    eggs-= 2;         // We then remove
    dough--;          // the needed ingredients
    flour-= 0.25;     // from our inventory
  } else { //if there aren't enough ingredients, the following message is printed
    Serial.println("Sorry, you don't have enough ingredients.");
  }
}
