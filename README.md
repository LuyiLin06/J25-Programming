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

# Arduino
This file is meant for explaining the codes available on the Blink_Morse folder. It will include a small breakdown on the features of C++ used for each code.

## Blink tasks
This are the tasks that use the built-in LEDs in the Arduino board. On the setup() function of the code, we set pin 13 (usually the built-in LED inArduino boards) and mark the action we want the LED to execute (in this caseOUTPUT, which will turn the LED on and off).

We have multiple codes, each with their own characteristics. [*Blink_Variation_01.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/Blink_Varition_01.ino) is the simplest of these, only turning the light on for 2 second and then off for another 1 second in the setup function, and then proceeds to turn the LED on and off in fixed intervals of 0.5 second each.

Then, there's [*sketch_morse_code.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_morse_code.ino), which uses the same "digitalWrite" function as the previous code. But this time to spell a certain word in morse code (for clarity, 3 seconds on = dash, and only 1 second = dot). We also have [*sketch_morseBlink*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_morseBlink.ino), which is much simpler thanks to the use of the "blink" function, where the Arduino board will automatically turn the LED on and off, without need of "digitalWrite" in every single line of the code. In this one, we instead define the letters in functions (the *void*s present in the code each represent a function). 

You may also see the [*sketch_function_morse.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_function_morse.ino) file, which simply combines all the previous tasks into one code: it will turn the light on and the off in an interval, and then spell a word in morse code.

## Serial print tasks
In this tasks, we used the "Serial.print" function in C++, which simply prints strings of text. There is [*sketch_serial_print.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_serial_print.ino), which also uses morse code, but this time, instead of turning a LED on and off, the code directly prints dots and dashes. 

## Cooking System tasks
In this task, we were assigned to create a code that could count the amount of certain ingredients and "cook" a dish. In here, we used the "if" and "else" functions, which only execute if certain conditions are met, which we can then define. There are two codes in this directory: [*sketch_cook.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_cook.ino) and [*sketch_cooking_system_4*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_cooking_system_4.ino). The latter also uses the "switch" and "case" functions, which determine which dish to cook out of a certain selection of dishes.
## ASCII art
There's an additional file, [*sketch_bear.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_bear.ino), which simply print ASCII art of a bear.
# Loops
This section will explain the codes found un the Loops folder.
## Loops that detect numbers ending in/containing certain numbers
The [*digits_with_3_loop.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/Loops/digits_with_3_loop.ino), [*odd_or_6_loop.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/Loops/odd_or_6_loop.ino) and [*sketch_endings_3_or_6.ino*](https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/Loops/sketch_endings_3_or_6.ino) codes all feature the use of the "%" operand, which calculates the remainder of the division between two integers(for example, 9%2 returns 1). By dividing the number by 10 and checking the remainder, we can determine the digit the number ends with. We can also divide that result repitedly by 10 if we want to find numbers that contain our desired integer in it.

## Loops for numbers whose integers add to certain amount
Here we have the [**}()
