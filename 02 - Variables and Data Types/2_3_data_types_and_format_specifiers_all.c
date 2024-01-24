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

  int num1 = 88;
  //%o octal integer format specifier:
  printf("\t octal : %o\n", num1);
  //%x hexadecimal integer format specifier:
  printf("\t HexaDecimal : %X\n", num1);

  return 0;
}
