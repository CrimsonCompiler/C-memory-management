/*

Variables

As we talked about, variables cannot change types:

int main() {
    int x = 5;
    float x = 3.14; // error
}

However, a variable's value can change:

int main() {
    int x = 5;
    x = 10; // this is ok
    x = 15; // still ok
}

Assignment

Run the code. You should get a compilation error.

When updating a variable's value, you don't need to redeclare the type. In fact, you can't. Fix the code so that it updates (64 -> 32) properly.
Assignment

Run the code. You should get a compilation error.

When updating a variable's value, you don't need to redeclare the type. In fact, you can't. Fix the code so that it updates (64 -> 32) properly.



*/


#include <stdio.h>

int main() {
  int sneklang_int_size = 64;
//   int sneklang_int_size = 32;    this line will result in compilation error
  sneklang_int_size = 32;
  printf("Sneklang int size: %d bits\n", sneklang_int_size);
  return 0;
}
