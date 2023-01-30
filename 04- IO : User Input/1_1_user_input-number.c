/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : User Input
Description : input a number and print it
Programmer  : Mohammed Mamun Hossain,
              Asst. Prof., Dept of CSE, BAUST.
			  mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
  // Create an integer variable that will store the number we get from the user
  int myNum;

  // Ask the user to type a number
  printf("Type a number and press enter: \n"); 

  // Get and save the number the user types
  scanf("%d", &myNum);

  // Print the number the user typed
  printf("Your number is: %d", myNum);

  return 0;
}
