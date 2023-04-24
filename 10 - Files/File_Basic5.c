/* Structure and Union*/
#include <stdio.h>

int main() {

    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("z.txt", "r");

    // Print some text if the file does not exist
    if(fptr == NULL) {
      printf("Not able to open the file.");
    }

    // Close the file
    fclose(fptr);

  return 0;
}

