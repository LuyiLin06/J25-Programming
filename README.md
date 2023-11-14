# J25-Programming
![Thorfinn](https://github.com/LuyiLin06/J25-Programming/assets/145320400/8e6ba50b-2f8f-458d-b37c-e8a888c504ab)

Repository for students of the course of Programming in 1st Batchillerato
# Classmates
- [SpaikyJordi](https://github.com/Spaikyjordi/J25-programming-jordi)
- [axckzz](https://github.com/axckzz/J25-Progamming)
- [ahong2006](https://github.com/ahong2006)
- [lizardMestre689](https://github.com/LizardMestre689/J25-Programming)
- [QuimMontane](https://github.com/QuimMontane/J25-programmig-Quim)
- [JuLiA1o1](https://github.com/JuLiA1o1/J25programming)
- [albertrenart](https://github.com/albertrenart/J25-programming)

# Notebook
# :rocket:Tema 2 programming
## :ballot_box_with_check: **Variables in a programming language**
---
**Flow control**
- **Booleans** = variables that can be true or false.
- Operator of comparation.
 
X == Y &rarr; they're equivalent in value

---

**Examples of variables:**
```c++
int miNumero = 9;
int numeroPremiado = random(10000);
if(miNumero == numeroPremiado) {
//winMoney <,>,<=,>=,!= esto es c++ pero la mayoría de lenguajes también lo entienden.
```
---
**Explanation:**
```c++
if(condition) {
//code executed if the condition is true
}
else { 
// code executed if the condition is false
}
//code executed in both cases
```
---
## **How do we determine if the condition is true?** :heavy_check_mark:

- Using a boolean, who's able to determine wether a condition is true or false
```c++
Bool me(gusta Picasso = false;
If(meGustaPicasso) {
goToMuseumPicasso();
}
else {goToDesignMuseum();{
```
---
**Types of notation**

1. **camel Case** &rarr; Métodos y variables 
2. **Pascal Case** &rarr; Objetos
3. **Kebab-case** &rarr; URL
4. **Snake_case** 
5. **SCREAMING_SNAKE_CASE** &rarr; Constantes

---
**Nested if examples**
```c++
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
| ------ | ------- | --------- |
| False  | False   | ps;       |
| False  | True    | f;        |
| True   | False   | ps;       |
| True   | True    | t;f;      |

---

**Example of else**
```c++
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
:::info
:pushpin: Si solucionamos en un else if el else de abajo no se ejecuta.
:::


---
**The results table**

| X   | Y   |  A  | B   | C   |
| --- | --- |:---:| --- | --- |
| F   | F   |  3  | 6   | 9   |
| F   | T   |  3  | 6   | 5   |
| T   | F   |  5  | 5   | 7   |
| T   | T   |  4  | 5   | 8   |

---
**Nested ifs (ifs anidados)**

:::info
:pushpin: Ifs dentro de ifs. 
:::

- Websites or programs that provide specialized notes on programming.

1. Notepad 
2. Hackmd
3. VSCode (Visual Studio Code)


### :open_book: **Comparations**
- (Option A) we have a boolean variable (bool).
- If the variable value is true then we go inside the if. :heavy_check_mark:
- If the variable value is false then we don’t go inside the if. :negative_squared_cross_mark:
- If there is an else we go inside the else.
```c++
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

:::success
:pencil: Else if. Else if is an extra condition where you can check before doing something else.
:::

```c++
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
---
**Switch case format:**

**Example 1:**
```c++
if (character == ‘a’) {
    //code for transforming into morse code letter A
}
else If (character == ‘b’) {
    //code for transforming into morse code letter B
}
```
**Example 2:**
```c++
Switch(character) {
case ‘A’:
    //code for transforming into morse code letter A
    morseA();
    break;
case ‘B’
    //code for transforming into morse code letter B
    break;
default:
    //code if the characeter is not valid or doesn’t have any of the declared values
```
---
- Programming languages need to be consistent and univocal.
- That’s why we use ‘=’ for assignation and ‘==’ for comparation.
---


**Comparators**

1. == Same value
2. ¡= Different value
3. < Lesser than
4. <= Lesser or equal than
5. > Greater than
6. >= Greater or equal than
--- 
**COMBO BURGER (boolean operators)**

1. && AND operator
2. || OR operator
3. !  NOT operator

**Example 1:**
```c++
//eggsInTheFridge
//potatoesInTheKitchen

if(eggsInTheFridge && potatoesInTheKitchen) {
   cookSpanishOmelette();
}
```
**Example 2:**
```c++
if(cocoaOpen || titusOpen) {
       goToDisco();
}
```
**Example 3:**
```c++
If ((eggsInTheFridge && potatoesInTheKitchen) || sausagesInTheKitchen) {
    cookSomeThing();
}
else (goToKebab)();}
```
**Example 4:**
```c++
if (¡eggsInTheFridge) {
    goToBuySomeEggs();
}
```
**Example 5:**
```c++
If(TRdelivered && meanGrade >= 5 && allFinalTestPassed)
(deliveredBachilleratoTitle());}
```
---
## :rocket: **Flow control Part 2.**

- Scope en programación es el ámbito.
---

**Types of Scope**
1. *Global Scope* (Fuera de todo)
2. *Local Scope* (Dentro)


--- 
# String()
**Strings** = Cadena de caracteres.

 Constructs an instance of the String class. There are multiple versions that construct Strings from different data types (i.e. format them as sequences of characters), including:

- a constant string of characters, in double quotes (i.e. a char array)

- a single constant character, in single quotes

- another instance of the String object

- a constant integer or long integer

- a constant integer or long integer, using a specified base

- an integer or long integer variable

- an integer or long integer variable, using a specified base
- a float or double, using a specified decimal places
---
**Syntax**
```c++
String(val)
String(val, base)
String(val, decimalPlaces)
```
---
**Parameters**

*val:* a variable to format as a String. Allowed data types: string, char, byte, int, long, unsigned int, unsigned long, float, double.
*base:* (optional) the base in which to format an integral value.
*decimalPlaces:* **only if val is float or double.** The desired decimal place.

---
**Example Code**

All of the following are valid declarations for Strings.

```c++
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
---
**Functions**

Some of them. For example:

compareTo()
equals()
length()
trim()
substring()

---

**Special characters &rarr; From the C Programming Language:**

\a alert (bell) character
\b backspace
\f formfeed
\n newline (linefeed)
\r carriage return
\t horizontal tab
\v vertical tab
\ backslash
? question mark
' single quote
\ddd octal constant
\xhh hexadecimal constant

---

### **Cooking System.2**

Global variables

**Recipe** 

Spanish omellete
1. 2 eggs
2. Potato
3. 0.25 Onion
4. Oil


**Definition of Global Variables at the beginning**

Set
Loop
Decide
Cook


```c++
int eggs = 4;
int potato = 0;
Boolean oil = true;
Double onion = 1;
```
**Part of setup and loop:**
```c++
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

**Cooking Part**
```c++
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
