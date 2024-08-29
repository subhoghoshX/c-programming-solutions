/***************************************************************************************************
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that
amount using the smallest number of $20, $10, $5, and $1 bills:

Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the
amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer
values throughout, not floating-point numbers.
***************************************************************************************************/

#include <stdio.h>

int main(void) {
  int amount, bill_20 = 0, bill_10 = 0, bill_5 = 0, bill_1 = 0;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  bill_20 = amount / 20;
  amount = amount - (bill_20 * 20);
  bill_10 = amount / 10;
  amount = amount - (bill_10 * 10);
  bill_5 = amount / 5;
  amount = amount - (bill_5 * 5);
  bill_1 = amount;

  printf("$20 bills: %d\n", bill_20);
  printf("$10 bills: %d\n", bill_10);
  printf(" $5 bills: %d\n", bill_5);
  printf(" $1 bills: %d\n", bill_1);

  return 0;
}
