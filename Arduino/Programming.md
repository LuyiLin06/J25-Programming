# :rocket: **PROGRAMMING CLASS NOTES**

---

:speech_balloon: **WHAT IS PROGRAMMING?**

---

**Programming** is the process of designing and building computer programs, which are sets of instructions that tell a computer how to perform a specific task or solve a particular problem.

**Programming Languages:** There are a lot programming languages, each with its syntax and rules. Python, JavaScript, C# and C are some of them. The choice of language depends on the nature of the task and the preferences of the programmer.

---

:pencil: **What is CPP/C++?**

---

**C++** is a general-purpose programming language that extends the capabilities of the C language. It is a high-performance programming language.

**Advantages of C++:**

- **High Performance:** C++ offers close-to-the-hardware control and high performance, suitable for system-level programming and applications with demanding performance requirements.

- **Scalability:** C++ allows developers to mix object-oriented and procedural programming, enabling the creation of flexible and scalable codebases.

- **Low-Level Control:** C++ permits direct control over memory and hardware, allowing developers to optimize code to meet specific requirements.

- **Rich Community Support:** C++ has a large and active development community, providing abundant resources, libraries, and tools.

- **Cross-Platform Capability:** C++ programs can be compiled and run on multiple platforms, providing cross-platform compatibility.

---

**👀 Special symbols and operators 👀**

---

- **Braces {}:**

  - Used to define blocks of code, such as in functions, loops, and conditional statements.

  - Also used for initializing arrays and structures.

```C++

// Example

void exampleFunction() {

}

```

- **Parentheses ():**

  - Used in function declarations and calls.

  - Used in control structures like if statements and loops.

  - Used in mathematical expressions to specify the order of operations.

```C++

// Example

int result = add(3, 4);

```

- **Square Brackets []:**

  - Used for declaring arrays, or array subscripting and accessing elements.


```C++

// Example

int numbers[5] = {1, 2, 3, 4, 5};

int thirdElement = numbers[2];

```

- **Semicolon ;:**

  - Used to terminate statements in C++.

```C++

// Example

printValues(1, 2, 3);

```

- **Comma ,:**

  - Used to separate items in a list, such as function arguments or variable declarations.

```C++

// Example

printValues(1, 2, 3);

```

- **Asterisk *:**

  - Used for pointer declaration and dereferencing.

```C++

// Example of using an asterisk to declare a pointer

int* ptr = nullptr;

// Example of using an asterisk to dereference a pointer

int value = *ptr;

```

---

**🕶 WHAT IS THE SYNTAX? 🕶**

---

**Syntax 🤌🏽** in programming sets the rules for combining symbols and keywords correctly. It defines how statements and constructs should be structured, ensuring the proper arrangement of elements for valid code.

**Correct Structure:**

Syntax ensures that the code is written in a way that the compiler or interpreter of the programming language can understand and process.

**Rules and Conventions:**

Each programming language has its own syntax rules and conventions that must be followed for the code to be valid. These rules are often defined in the language's documentation.

**Keywords and Symbols:**

Syntax involves using keywords, operators, and symbols in a specific manner.

**Brackets and Indentation:**

The use of brackets {}, parentheses (), square brackets [], and indentation is crucial for defining the structure of code blocks, functions, loops, and other constructs.

**End-of-Line Markers:**

Many programming languages use semicolons ; or other markers to indicate the end of a statement.

**Case Sensitivity:**

Some programming languages are case-sensitive, meaning that uppercase and lowercase letters are treated as distinct.

```C++

// An example to see the correct syntax

void setup() {

  // initialize digital pin LED_BUILTIN as an output.

  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)

  delay(2000);           // wait for a second

  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW

  delay(1000);

}

// the loop function runs over and over again forever

void loop() {

  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)

  delay(500);

  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW

  delay(500);            // wait for a second

}

```

---

**Variables 🛌🏽**

---

Variables are used to store and manipulate data.

**1. Integers (int, short, long, long long) 🥢:**

Used to represent whole numbers.

```C++

int age =

 18;

```

**2. Floating-Point (float, double, long double):**

Used to represent real numbers (numbers with decimal points).

```C++

double sum = 0;

for (int i = 0; i < 23; i++) {

  sum = sum + prices[i];

}

double average = sum / 23;

Serial.println(min);

```

**3. Boolean (bool):**

Used to represent true or false values.

```C++

bool isPassed = true;

```

---

**Functions 🍸**

---

Functions are blocks of code that perform a specific task or set of tasks. They provide a way to modularize code, improve code organization, and enhance reusability.

- Reusable blocks of code that perform specific tasks.

- Can have parameters and return values.

```C++

void outputIfNegative(int x) {

  if (x < 0) {

    Serial.println("The input is a negative number");

  }

}

```

---

**Control Flow Statements 🛫:**

---

Control flow statements in programming are used to manage the flow of execution within a program. They allow you to make decisions, repeat blocks of code, and control the sequence in which statements are executed.

**1. "if" statement**

Used for conditional branching. Executes a block of code only if a specified condition is true.

```C++

if (x[4] < x[1]) {

  // code to be executed if the condition is true

}

```

**Else:**

Else is used in conjunction with the if statement to provide an alternative block of code to be executed when the specified condition in the if statement evaluates to false.

```C++

if (condition) {

    // code to be executed if the condition is true

} else {

    // code to be executed if the condition is false

}

```

**2. "while"**

Executes a block of code repeatedly as long as a specified condition is true.

```C++

int main() {

    int count = 0;

    while (count < 5) {

        // code to be executed

    }

    return 0;

}

```

**3. "for"**

Executes a block of code repeatedly, with an explicit initialization, condition, and iteration statement.

```C++

for(int i = 0; i < 50; i++) {

  // code to be executed

}

```
