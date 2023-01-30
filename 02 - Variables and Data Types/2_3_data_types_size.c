/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : Tokens - Variables and Data Types :Data Types and Format Specifiers
Description : sizeof keywords to display the size of various data types
Programmer  : Mohammed Mamun Hossain,
                     Asst. Prof., Dept of CSE, BAUST.
			        mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/
#include <stdio.h>

int main() {

 int myInt;
 short int shortInt;
 long int longInt;
 long long int longLongInt;

 float myFloat;
 double myDouble;
 char myChar;

 printf("  Size of  Int : %lu \n", sizeof(myInt));
 printf("  Size of  short Int : %lu \n", sizeof(shortInt));
 printf("  Size of  long Int : %lu \n", sizeof(longInt));
 printf("  Size of  long long Int : %lu \n", sizeof(longLongInt));
 printf("  Size of  Float : %lu \n", sizeof(myFloat));
 printf("  Size of  Double : %lu \n", sizeof(myDouble));
 printf("  Size of  Char : %lu \n", sizeof(myChar));

  return 0;
}
