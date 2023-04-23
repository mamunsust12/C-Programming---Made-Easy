/* Structure and Union*/
#include <stdio.h>

// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {100, 'A', "Sakib Al Hasan"};
  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
 //Copy Structures
 struct myStructure s2;
 s2 = s1;
 s2.myLetter='B';
 printf("\n%d %c %s", s2.myNum, s2.myLetter, s2.myString);
  return 0;
}
