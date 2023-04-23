/* Structure and Union*/
#include <stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
 // Create different struct variables
struct myStructure s1;
struct myStructure s2;

// Assign values to different struct variables
s1.myNum = 10;
s1.myLetter = 'A';

s2.myNum = 20;
s2.myLetter = 'B';
  // Print values
  printf("My number: %d\n", s2.myNum);
  printf("My letter: %c\n", s2.myLetter);

  return 0;
}

