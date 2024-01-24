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

 printf("  Size of  Int : %d \n", sizeof(myInt)); // 4 Byte
 printf("  Size of  short Int : %d \n", sizeof(shortInt)); // 2 Byte
 printf("  Size of  long Int : %d \n", sizeof(longInt)); // 8 Byte
 printf("  Size of  long long Int : %d \n", sizeof(longLongInt)); // 12 Byte

  return 0;
}
