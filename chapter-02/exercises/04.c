/***************************************************************************************************
Write a program that declares several int and float variables - without initializing them - and then
prints their values. Is there any pattern to the values? (Usually there isn't.)
***************************************************************************************************/

#include <stdio.h>

int main(void) {
  int x, y, z;
  float f1, f2, f3;

  printf("x: %d\n", x);
  printf("y: %d\n", y);
  printf("z: %d\n", z);
  printf("f1: %f\n", f1);
  printf("f2: %f\n", f2);
  printf("f3: %f\n", f3);

  return 0;
}

// In the above program x, y prints random integers while z always prints 0.
// f1 and f2 always prints 0.000000, while f3 prints random decimal numbers.
