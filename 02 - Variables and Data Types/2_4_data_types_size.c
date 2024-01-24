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
 long int LongmyInt;
 float myFloat;
 double myDouble;
 char myChar;

 printf("  Size of  Int : %d Bytes \n", sizeof(myInt));
 printf("  Size of  Int : %d Bytes \n", sizeof(int));
 printf("  Size of  Long Int : %d Bytes \n", sizeof(LongmyInt));
 printf("  Size of  Long Long Int : %d Bytes \n", sizeof(long long int));
 printf("  Size of  Float : %d Bytes \n", sizeof(myFloat));
 printf("  Size of  Double : %d Bytes \n", sizeof(myDouble));
 printf("  Size of  Char : %lu \n Bytes", sizeof(myChar));

  return 0;
}
