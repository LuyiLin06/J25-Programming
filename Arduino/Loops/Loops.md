# Arduino Loops Notebook

## Introduction

Loops are fundamental constructs in programming that allow you to repeat a set of instructions multiple times. In Arduino coding, loops are commonly used to perform tasks iteratively. There are two main types of loops: `for` loops and `while` loops.

## 1. For Loop

### Syntax:

```cpp
for (initialization; condition; update) {
    // Code to be repeated
}
```
**Example**
```c++
void setup() {
  Serial.begin(9600);
  int numeroProblema = 1;
  for (numeroProblema = 1; numeroProblema <= 30; numeroProblema++) {
    resolverProblema(numeroProblema);
  }
}

void loop() {
}

void resolverProblema(int n) {
  Serial.print("Resolviendo el problema ");
  Serial.println(n);
}
```
## While loop

### Syntax

```c++
while (condition) {
    // Code to be repeated
}
```
**Example**
```c++
void setup() {
  Serial.begin(9600);
  int numeroProblema = 1;
  while (numeroProblema<=30){
    resolverProblemaDibujo (numeroProblema);
    numeroProblema++;
  }
}

void loop() {
}
void resolverProblemaDibujo (int n){
    Serial.print ("Resolviendo problema");
    Serial.println (n);
}
```
