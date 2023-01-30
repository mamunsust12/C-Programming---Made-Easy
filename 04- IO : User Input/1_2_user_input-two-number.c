/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : User Input
Description : input more numbers and sum up them
Programmer  : Mohammed Mamun Hossain,
              Asst. Prof., Dept of CSE, BAUST.
			  mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

  int a,b;

  printf("Type your numbers and press enter: \n");

  // Get and save the numbers the user types
  scanf("%d%d", &a,&b);

  // Print the number the user typed
  printf("Your number is: %d  and  %d \n", a,b);
  printf("Sum of your number is: %d  ", a+b);

  return 0;
}
