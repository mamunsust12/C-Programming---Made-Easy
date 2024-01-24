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

 int myInt=802410205101051;
 long int LongmyInt=802410205101051;
 long long int longLongmyInt=802410205101051;


 printf("  My ID is : %d  \n", myInt);
 printf("  Size of  Int : %d Bytes \n", sizeof(int));
 printf("  My ID is : %ld  \n", LongmyInt);
 printf("  Size of  Long Int : %d Bytes \n", sizeof(long int));
 printf("  My ID is : %lld  \n", longLongmyInt);
 printf("  Size of  Long Long Int : %d Bytes \n", sizeof(long long int));


  return 0;
}
