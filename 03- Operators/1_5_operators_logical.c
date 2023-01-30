/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : Operators, Expression and Statements
Description : Logical Operators
Programmer  : Mohammed Mamun Hossain,
              Asst. Prof., Dept of CSE, BAUST.
			  mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/
#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d", x > 3 && x < 10);
  
    /*printf("(12 >10) && (12 > 11)  =  %d \n", (12 >10) && (12 > 11) );
    printf("(14 >10) && (12 != 11)  =  %d \n\n", (14 >10) && (12 != 11) );

    printf("(12 >10) || (12 > 11)  =  %d \n", (12 >10) || (12 > 11) );
    printf("(14 >10) || (12 != 11)  =  %d \n\n", (14 >10) || (12 != 11) );

    printf("!(12 >10)  =  %d \n", !(12 >10) );
    printf("!(14 >10)   =  %d \n", !(14 >16) );*/
  return 0;
}