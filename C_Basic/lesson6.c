/*
Basic Types

int - An integer
float - A floating point number
char - A character
char * - An array of characters (more on this later... if you think about it, sounds kinda like a string doesn't it?)

You've already seen int in the example before - it's the return value in the special main function (the entry point for every C program).
Assignment

Someone allowed a Pythonista into our beautiful C codebase!

Fix the bugs caused by missing types on lines 4, 5, and 6.
Assignment

Someone allowed a Pythonista into our beautiful C codebase!

Fix the bugs caused by missing types on lines 4, 5, and 6.


*/

#include <stdio.h>

int main() {
  int max_recursive_calls = 100;
  char io_mode = 'w';
  float throttle_speed = 0.2;

  // don't touch below this line
  printf("Max recursive calls: %d\n", max_recursive_calls);
  printf("IO mode: %c\n", io_mode);
  printf("Throttle speed: %f\n", throttle_speed);
  return 0;
}
