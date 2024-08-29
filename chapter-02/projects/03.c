/***************************************************************************************************
Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the
sphere.
***************************************************************************************************/

#include <stdio.h>

# define PI 3.141

int main(void) {
  float r;

  printf("Please enter the radius: ");
  scanf("%f", &r);

  printf("Volume: %f\n", 4.0f / 3.0f * PI * r * r * r);
}
