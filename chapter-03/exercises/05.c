/***************************************************************************************************
Suppose that we call scanf as follows:

scanf("%f%d%f", &x, &i, &y);

If the user enters

12.3 45.6 789

what will be the values of x, i, and y after the call? (Assume tht x and y are float variables and i
is an int variable.)
***************************************************************************************************/


// x = 12.3, i = 45, y = 0.6

#include <stdio.h>

int main(void) {
  float x, y;
  int i;

  scanf("%f%d%f", &x, &i, &y);
  printf("x = %f\ni = %d\ny = %f\n", x, i, y);

  return 0;
}
