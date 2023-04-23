/* Structure and Union*/
#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  //s1.myString = "Some text";
    // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Trying to print the value
  printf("My string: %s", s1.myString);

  return 0;
}
