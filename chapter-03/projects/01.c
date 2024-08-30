/***************************************************************************************************
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the
form yyyymmdd:

Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
***************************************************************************************************/

#include <stdio.h>

int main(void) {
  int mm, dd, yyyy;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yyyy);

  printf("You entered the date %d%.2d%d\n", yyyy, mm, dd);

  return 0;
}
