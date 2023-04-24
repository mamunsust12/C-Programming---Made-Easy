/* Structure and Union*/
#include <stdio.h>

int main() {

    FILE *fptr;

    // Open a file in writing mode
    fptr = fopen("a.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Hello , File Prograqmming");

    // Close the file
    fclose(fptr);

  return 0;
}

