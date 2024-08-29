/***************************************************************************************************
Which of the following are not legal C identifiers?
(a) 100_bottles
(b) _100_bottles
(c) one__hundred__bottles
(d) bottles_by_the_hundred_
***************************************************************************************************/


// Only (a)

#include <stdio.h>

int main(void) {
  // Illegal identifier
  // int 100_bottles;
  // printf("100_bottles: %d", 100_bottles);

  int _100_bottles;
  printf("_100_bottles: %d\n", _100_bottles);

  int one__hundred__bottles;
  printf("one__hundred__bottles: %d\n", one__hundred__bottles);

  int bottles_by_the_hundred_;
  printf("bottles_by_the_hundred: %d\n", bottles_by_the_hundred_);
}
