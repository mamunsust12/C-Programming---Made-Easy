/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : Tokens - Variables and Data Types : Type Conversion
Description : Explicit conversion from int to float
Programmer  : Mohammed Mamun Hossain,
              Asst. Prof., Dept of CSE, BAUST.
			  mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/
#include <stdio.h>

int main() {
  int num1 = 5;
  int num2 = 2;
  float result = (float) num1 / num2;

  printf("%.1f", result);
  return 0;
}