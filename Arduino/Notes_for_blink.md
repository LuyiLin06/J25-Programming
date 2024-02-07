🚀Tema 2 programming
====================

[](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#ballot_box_with_check-variables-in-a-programming-language)☑️ Variables in a programming language
--------------------------------------------------------------------------------------------------------------------------------------------------------------------

* * * * *

Flow control

-   Booleans = variables that can be true or false.
-   Operator of comparation.

X == Y → they're equivalent in value

* * * * *

Examples of variables:

```source-c++
int miNumero = 9;
int numeroPremiado = random(10000);
if(miNumero == numeroPremiado) {
//winMoney <,>,<=,>=,!= esto es c++ pero la mayoría de lenguajes también lo entienden.
```

* * * * *

Explanation:

```source-c++
if(condition) {
//code executed if the condition is true
}
else {
// code executed if the condition is false
}
//code executed in both cases
```

* * * * *

[](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#how-do-we-determine-if-the-condition-is-true-heavy_check_mark)How do we determine if the condition is true? ✔️
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-   Using a boolean, who's able to determine wether a condition is true or false

```source-c++
Bool me(gusta Picasso = false;
If(meGustaPicasso) {
goToMuseumPicasso();
}
else {goToDesignMuseum();{
```

* * * * *

Types of notation

1.  camel Case → Métodos y variables
2.  Pascal Case → Objetos
3.  Kebab-case → URL
4.  Snake_case
5.  SCREAMING_SNAKE_CASE → Constantes

* * * * *

Nested if examples

```source-c++
if(patatas){
if(huevos)}
  tortilla();
{
  Freir();
}
else{
  pedirSushi();
}
```

| Huevos | Patatas | Execution |
| --- | --- | --- |
| False | False | ps; |
| False | True | f; |
| True | False | ps; |
| True | True | t;f; |

* * * * *

Example of else

```source-c++
int a= 3;
int b= 5;
int c= 6;

if(x) {
  a++;
  if (y) {
      c++;
      b--;
  }
  else{
      a = b;
  }
  c++;
}
else if(y) {
    c--;
}
else {
    b++;
    c = b+3;
}
Serial.println(a);
Serial.println(b);
Serial.println(c);
```

:::info :pushpin: Si solucionamos en un else if el else de abajo no se ejecuta. :::

* * * * *

The results table

| X | Y | A | B | C |
| --- | --- | :-: | --- | --- |
| F | F | 3 | 6 | 9 |
| F | T | 3 | 6 | 5 |
| T | F | 5 | 5 | 7 |
| T | T | 4 | 5 | 8 |

* * * * *

Nested ifs (ifs anidados)

:::info :pushpin: Ifs dentro de ifs. :::

-   Websites or programs that provide specialized notes on programming.

1.  Notepad
2.  Hackmd
3.  VSCode (Visual Studio Code)

### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#open_book-comparations)📖 Comparations

-   (Option A) we have a boolean variable (bool).
-   If the variable value is true then we go inside the if. ✔️
-   If the variable value is false then we don't go inside the if. ❎
-   If there is an else we go inside the else.

```source-c++
a = true;
if (a) {
gotoParis();
}
gotoHongKong();
}
else {
gotoBuenosAires()}
{
```

:::success :pencil: Else if. Else if is an extra condition where you can check before doing something else. :::

```source-c++
bool a = true;
bool b = false;

if (b) {
   //code not executed
}
else if (a) {
   //code executed
}
else {
   //code not executed
}
```

* * * * *

Switch case format:

Example 1:

```source-c++
if (character == 'a') {
    //code for transforming into morse code letter A
}
else If (character == 'b') {
    //code for transforming into morse code letter B
}
```

Example 2:

```source-c++
Switch(character) {
case 'A':
    //code for transforming into morse code letter A
    morseA();
    break;
case 'B'
    //code for transforming into morse code letter B
    break;
default:
    //code if the characeter is not valid or doesn't have any of the declared values
```

* * * * *

-   Programming languages need to be consistent and univocal.
-   That's why we use '=' for assignation and '==' for comparation.

* * * * *

Comparators

1.  "==" Same value
2.  "¡=" Different value
3.  "<" Lesser than
4.  "<=" Lesser or equal than
5.  ">" Greater than
6.  ">=" Greater or equal than

* * * * *

COMBO BURGER (boolean operators)

1.  && AND operator
2.  || OR operator
3.  ! NOT operator

Example 1:

```source-c++
//eggsInTheFridge
//potatoesInTheKitchen

if(eggsInTheFridge && potatoesInTheKitchen) {
   cookSpanishOmelette();
}
```

Example 2:

```source-c++
if(cocoaOpen || titusOpen) {
       goToDisco();
}
```

Example 3:

```source-c++
If ((eggsInTheFridge && potatoesInTheKitchen) || sausagesInTheKitchen) {
    cookSomeThing();
}
else (goToKebab)();}
```

Example 4:

```source-c++
if (¡eggsInTheFridge) {
    goToBuySomeEggs();
}
```

Example 5:

```source-c++
If(TRdelivered && meanGrade >= 5 && allFinalTestPassed)
(deliveredBachilleratoTitle());}
```

* * * * *

[](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#rocket-flow-control-part-2)🚀 Flow control Part 2.
----------------------------------------------------------------------------------------------------------------------

-   Scope en programación es el ámbito.

* * * * *

Types of Scope

1.  *Global Scope* (Fuera de todo)
2.  *Local Scope* (Dentro)

* * * * *

[](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#string)String()
===================================================================================

Strings = Cadena de caracteres.

Constructs an instance of the String class. There are multiple versions that construct Strings from different data types (i.e. format them as sequences of characters), including:

-   a constant string of characters, in double quotes (i.e. a char array)

-   a single constant character, in single quotes

-   another instance of the String object

-   a constant integer or long integer

-   a constant integer or long integer, using a specified base

-   an integer or long integer variable

-   an integer or long integer variable, using a specified base

-   a float or double, using a specified decimal places

* * * * *

Syntax

```source-c++
String(val)
String(val, base)
String(val, decimalPlaces)
```

* * * * *

Parameters

*val:* a variable to format as a String. Allowed data types: string, char, byte, int, long, unsigned int, unsigned long, float, double. *base:* (optional) the base in which to format an integral value. *decimalPlaces:* only if val is float or double. The desired decimal place.

* * * * *

Example Code

All of the following are valid declarations for Strings.

```source-c++
String stringOne = "Hello String";                    // using a constant String
String stringOne = String('a');                       // converting a constant char into a String
String stringTwo = String("This is a string");        // converting a constant string into a String object
String stringOne = String(stringTwo + " with more");  // concatenating two strings
String stringOne = String(13);                        // using a constant integer
String stringOne = String(analogRead(0), DEC);        // using an int and a base
String stringOne = String(45, HEX);                   // using an int and a base (hexadecimal)
String stringOne = String(255, BIN);                  // using an int and a base (binary)
String stringOne = String(millis(), DEC);             // using a long and a base
String stringOne = String(5.698, 3);                  // using a float and the decimal places
```

* * * * *

Functions

Some of them. For example:

compareTo() equals() length() trim() substring()

* * * * *

Special characters → From the C Programming Language:

\a alert (bell) character \b backspace \f formfeed \n newline (linefeed) \r carriage return \t horizontal tab \v vertical tab \ backslash ? question mark ' single quote \ddd octal constant \xhh hexadecimal constant

* * * * *

### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#cooking-system2)Cooking System.2

Global variables

Recipe

Spanish omellete

1.  2 eggs
2.  Potato
3.  0.25 Onion
4.  Oil

Definition of Global Variables at the beginning

Set Loop Decide Cook

```source-c++
int eggs = 4;
int potato = 0;
Boolean oil = true;
Double onion = 1;
```

Part of setup and loop:

```source-c++
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
String input = Serial.readString();
if (input != "") {
Serial.println("You have input: " + input);
input.trim();
decide(input);
}
}
```

Cooking Part

```source-c++
void cook() {
Serial.println("We are cooking");
if (eggs >= 2 &&
potato == 1 &&
onion >= 0.25 && oil ) {
Serial.println("you have a Spanish Omelette");
eggs = eggs - 2;
potato--;
onion = onion - 0.25;
 }
}
void decide(String input) {
if (input == "cook") {
cook();
 }
if(input=="potato"){potato++;}}
}
```

[](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#methods-for-strings-in-c-arduino)Methods for Strings in C++ (Arduino):
------------------------------------------------------------------------------------------------------------------------------------------

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#1-length-method)1\. `length()` Method:

   - Returns the length of the string.

   - Example:

```source-c++
     String myString = "Hello, Arduino!";
     int len = myString.length(); // len is 1
```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#2-charatindex-method)2\. `charAt(index)` Method:

   - Returns the character at the specified index.

   - Example:

```source-c++
     char charAtIndex = myString.charAt(7); // charAtIndex is 'A'
```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#3-concatstr-method)3\. `concat(str)` Method:

   - Concatenates (appends) another string to the end of the current string.

   - Example:

```source-c++
     myString.concat(" How are you?");

```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#4-substringstart-length-method)4\. `substring(start, length)` Method:

   - Returns a substring starting from the specified index with the specified length.

   - Example:

```source-c++
     String subStr = myString.substring(7, 3); // subStr is "Ard"

```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#5-indexofstr-method)5\. `indexOf(str)` Method:

   - Returns the index of the first occurrence of the specified substring.

   - Example:

```source-c++
     int index = myString.indexOf("Arduino"); // index is 7

```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#6-startswithprefix-and-endswithsuffix-methods)6\. `startsWith(prefix)` and `endsWith(suffix)` Methods:

   - Checks if the string starts or ends with the specified substring.

   - Examples:

```source-c++
     bool startsWith = myString.startsWith("Hello"); // true

     bool endsWith = myString.endsWith("!"); // true

```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#7-toint-method)7\. `toInt()` Method:

   - Converts the string to an integer.

   - Example:

```source-c++
     String numStr = "123";

     int num = numStr.toInt(); // num is 123

```

#### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#8-c_str-method)8\. `c_str()` Method:

   - Returns a pointer to the underlying array of characters (C-style string).

   - Example:

```source-c++
     const char* cString = myString.c_str();

```

### [](https://github.com/LuyiLin06/J25-Programming/blob/main/README.md#useful-resources)Useful Resources:

1\. [Arduino String Reference](https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/)

2\. [C++ String Reference (w3schools)](https://www.w3schools.in/cplusplus-tutorial/strings/)
