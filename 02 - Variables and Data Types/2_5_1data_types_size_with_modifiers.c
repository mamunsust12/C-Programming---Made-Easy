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

 int i;
 short int si;
 long int li;
 long long int lli;
 signed int sign_i;
 unsigned int ui;
 signed short int shi;
 signed long int sli;
 long long int lli;
 unsigned short int usi;
 unsigned long int uli;
 unsigned long long int ulli;

 si =65535;
 ui =-100;
 ulli=18446744073709551616;

 printf("  Size : %d \n", sizeof(ui));
 printf("  Value : %llu \n", ulli);
 //printf("  Short Int : %d \n", short_int); // 4 Byte
 //printf("  Size of  short Int : %d \n", sizeof(signed_Int)); // 4 Byte
 //printf("  Size of  long Int : %d \n", sizeof(unsigned_Int)); // 4 Byte


  return 0;
}
