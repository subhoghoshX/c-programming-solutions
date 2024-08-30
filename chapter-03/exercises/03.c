/***************************************************************************************************
For each of the following pairs of scanf format strings, indicate whether or not the two string are
equivalent. If they're not, show how they can be distinguished.

(a) "%d"        versus " %d"
(b) "%d-%d-%d"  versus "%d -%d -%d"
(c) "%f"        versus "%f "
(d) "%f,%f"     versus "%f, %f"
***************************************************************************************************/

#include <stdio.h>

int main(void) {
  // (a) equivalent
  int i1, i2;
  scanf("%d", &i1);
  scanf(" %d", &i2);
  printf("%d %d\n", i1, i2);

  // (b) equivalent
  int j1, j2, j3, k1, k2, k3;
  scanf("%d-%d-%d", &j1, &j2, &j3);
  scanf("%d -%d -%d", &k1, &k2, &k3);
  printf("%d %d %d - %d %d %d\n", j1, j2, j3, k1, k2, k3);

  // (c) not equivalent - the whitespaces character after the conversion specification matches
  // all whitespace and \n characters essentially stopping scanf from terminating. Only a non-
  // white-space character can terminate scanf at that point.
  float x1, x2;
  scanf("%f", &x1);
  scanf("%f ", &x2);
  printf("%f %f\n", x1, x2);

  // (d) equivalent
  float y1, y2, z1, z2;
  scanf("%f,%f", &y1, &y2);
  scanf("%f, %f", &z1, &z2);
  printf("%f %f - %f %f\n", y1, y2, z1, z2);

  return 0;
}
