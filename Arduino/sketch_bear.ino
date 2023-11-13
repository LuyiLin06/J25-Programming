void setup() {
  Serial.begin(9600); // Initialize the serial communication
}

void loop() {
  // Print the ASCII art
  Serial.println("  _,-\"\"`\"\"-~`)");
  Serial.println("(`~_,=========\\");
  Serial.println(" |---,___.-.__,\\");
  Serial.println(" |        o     \\ ___  _,,,,_     _.--.");
  Serial.println("  \\      `^`    /`_.-\"~      `~-;`     \\");
  Serial.println("   \\_      _  .'                 `,     |");
  Serial.println("     |`-                           \\ '__/");
  Serial.println("    /                      ,_       \\  `'-.");
  Serial.println("   /    .-\"\"~~--.            `\"-,   ;_    /");
  Serial.println("  |              \\               \\  | `\"\"");
  Serial.println("   \\__.--'`\"-.   /_               |'");
  Serial.println("              `\"`  `~~~---..,     |");
  Serial.println("                            \\ _.-'`-.");
  Serial.println("                             \\       \\");
  Serial.println("                              '.     /");
  Serial.println("                                `\"~`");

  delay(5000); // Delay for 5 seconds before displaying the ASCII art again
}

