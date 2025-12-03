/*
Printing Variables

You've already seen me do a printf() magic a few times. Unfortunately, in C it isn't as easy to do string interpolation (what f-strings do in Python).

Instead of:

print(f"Hello, {name}. You're {age} years old.")

We have to tell C how we want particular values to be printed using "format specifiers".

Common format specifiers are:

    %d - digit (integer)
    %c - character
    %f - floating point number
    %s - string (char *)

printf("Hello, %s. You're %d years old.\n", name, age);

Newline Character

The print() function in Python automatically adds a newline character (\n) at the end of the string. In C, we have to do this manually.

printf("Hello, world!\n");

Newline Character

The print() function in Python automatically adds a newline character (\n) at the end of the string. In C, we have to do this manually.

printf("Hello, world!\n");

Newline Character

The print() function in Python automatically adds a newline character (\n) at the end of the string. In C, we have to do this manually.

printf("Hello, world!\n");

Assignment

In the space provided print:

Default max threads: A
Custom perms: B
Constant pi value: C
Sneklang title: D

Use format specifiers to replace A-D with the already provided variables.

Do not add precision to the floating point number.
Assignment

In the space provided print:

Default max threads: A
Custom perms: B
Constant pi value: C
Sneklang title: D

Use format specifiers to replace A-D with the already provided variables.

Do not add precision to the floating point number.
Assignment

In the space provided print:

Default max threads: A
Custom perms: B
Constant pi value: C
Sneklang title: D

Use format specifiers to replace A-D with the already provided variables.

Do not add precision to the floating point number.


*/

#include <stdio.h>

int main() {
  int sneklang_default_max_threads = 8;
  char sneklang_default_perms = 'r';
  float sneklang_default_pi = 3.141592;
  char *sneklang_title = "Sneklang";
  // don't touch above this line

  printf("Default max threads: %d\n", sneklang_default_max_threads);
  printf("Custom perms: %c\n", sneklang_default_perms);
  printf("Constant pi value: %f\n", sneklang_default_pi);
  printf("Sneklang title: %s\n", sneklang_title);

  return 0;
}
