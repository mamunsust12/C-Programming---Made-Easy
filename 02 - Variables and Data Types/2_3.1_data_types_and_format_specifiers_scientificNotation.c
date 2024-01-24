/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : Tokens - Variables and Data Types :Data Types and Format Specifiers
Description : Format specifiers for octal Hexadecimal and others
Programmer  : Mohammed Mamun Hossain,
              Asst. Prof., Dept of CSE, BAUST.
			  mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/
#include <stdio.h>

int main() {
 //%f and %e floating point number format specifiers:
  float num1 = 199999.99;
  printf("%f\n", num1);
  printf("%e\n", num1);
  printf("%E\n", num1);

  //%o octal integer format specifier:
  int num2 = 31;
  printf("%o\n", num2);

  //%x hexadecimal integer format specifier:
   int c = 28;
  printf("%x\n", c);

  return 0;
}
