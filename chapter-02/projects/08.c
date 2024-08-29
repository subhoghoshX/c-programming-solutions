/***************************************************************************************************
Write a program that calculates the remaining balance on a loan after the first, second, and third
monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaning after first payment: $19713.34
Balance remaning after second payment: $19425.25
Balance remaning after third payment: $19135.71

Display each balance with 2 digits after the decimal point. Hint: Each month, the balance is
decreased by the amount of the payment, but increased by the blance times the monthly interest rate.
To find the montly interest rate, convert the interest rate entered by the user to a percentage and
divide it by 12.
***************************************************************************************************/

#include <stdio.h>

int main(void) {
  float loan_amount, interest_rate, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  loan_amount = loan_amount - monthly_payment;
  loan_amount = loan_amount + ((interest_rate / 100.00f) * loan_amount / 12.00f);
  printf("Balance remaning after first payment: $%.2f\n", loan_amount);

  loan_amount = loan_amount - monthly_payment;
  loan_amount = loan_amount + ((interest_rate / 100.00f) * loan_amount / 12.00f);
  printf("Balance remaning after second payment: $%.2f\n", loan_amount);

  loan_amount = loan_amount - monthly_payment;
  loan_amount = loan_amount + ((interest_rate / 100.00f) * loan_amount / 12.00f);
  printf("Balance remaning after third payment: $%.2f\n", loan_amount);

  return 0;
}

// The calculations here vary slightly from the ones given in the book.
