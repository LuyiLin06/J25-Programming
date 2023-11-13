# Arduino
This file is meant for explaining the codes available on this directory. It will include a small breakdown on the features of C++ used for each code.

# Blink tasks
This are the tasks that use the built-in LEDs in the Arduino board. On the setup() function of the code, we set pin 13 (usually the built-in LED inArduino boards) and mark the action we want the LED to execute (in this caseOUTPUT, which will turn the LED on and off).

We have multiple codes, each with their own characteristics. *Blink_Variation_01.ino* (https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/Blink_Varition_01.ino)is the simplest of these, only turning the light on for 2 second and then off for another 1 second in the setup function, and then proceeds to turn the LED on and off in fixed intervals of 0.5 second each.

Then, there's *sketch_morse_code.ino* (https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_morse_code.ino),which uses the same "digitalWrite" function as the previous code. But this time to spell a certain word in morse code (for clarity, 3 seconds on = dash, and only 1 second = dot). We also have *sketch_morseBlink* (https://github.com/LuyiLin06/J25-Programming/blob/main/Arduino/sketch_morseBlink.ino), which is much simpler thanks to the use of the "blink" function, where the Arduino board will automatically turn the LED on and off, without need of "digitalWrite" in every single line of the code. In this one, we instead define the letters in functions (the *void*s present in the code each represent a function). 

You may also see the *sketch_function_morse.ino* file, which simply combines all the previous tasks into one code: it will turn the light on and the off in an interval, and then spell a word in morse code.

# Serial print
