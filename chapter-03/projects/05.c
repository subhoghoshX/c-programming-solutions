/***************************************************************************************************
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and
diagonals:

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), the numbers
are said to form a magic square. The magic square shown here appears in a 1514 engraving by artist
and mathematician Albrecht Dürer. (Note that the middle numbers in the last row give the date of
the engraving.)
***************************************************************************************************/

#include <stdio.h>

int main(void) {
  int r11, r12, r13, r14, r21, r22, r23, r24, r31, r32, r33, r34, r41, r42, r43, r44;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &r11, &r12, &r13, &r14, &r21, &r22, &r23, &r24, &r31, &r32, &r33, &r34, &r41, &r42, &r43, &r44);

  printf("\n");
  printf("%2d %2d %2d %2d\n", r11, r12, r13, r14);
  printf("%2d %2d %2d %2d\n", r21, r22, r23, r24);
  printf("%2d %2d %2d %2d\n", r31, r32, r33, r34);
  printf("%2d %2d %2d %2d\n", r41, r42, r43, r44);
  printf("\n");

  int row1_sum = r11 + r12 + r13 + r14;
  int row2_sum = r21 + r22 + r23 + r24;
  int row3_sum = r31 + r32 + r33 + r34;
  int row4_sum = r41 + r42 + r43 + r44;
  printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);

  int col1_sum = r11 + r21 + r31 + r41;
  int col2_sum = r12 + r22 + r32 + r42;
  int col3_sum = r13 + r23 + r33 + r43;
  int col4_sum = r14 + r24 + r34 + r44;
  printf("Column sums: %d %d %d %d\n", col1_sum, col2_sum, col3_sum, col4_sum);

  int diag1_sum = r11 + r22 + r33 + r44;
  int diag2_sum = r14 + r23 + r32 + r41;
  printf("Diagonal sums: %d %d\n", diag1_sum, diag2_sum);

  return 0;
}
