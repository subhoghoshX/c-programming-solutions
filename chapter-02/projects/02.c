/***************************************************************************************************
Write a program that computes the volume of a spehere with a 10-meter radius, using the formula
v=4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C
doesn't have an exponentiations operator, so you'll need to multiply r by itself twice to compute
r^3.
***************************************************************************************************/

#include <stdio.h>

# define PI 3.141

int main(void) {
  float r = 10;

  printf("Volume: %f\n", 4.0f / 3.0f * PI * r * r * r);
}
