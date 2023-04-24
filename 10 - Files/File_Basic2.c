/* Structure and Union*/
#include <stdio.h>

int main() {

    FILE *fptr;

    // Open a file in append mode
    fptr = fopen("a.txt", "a");

    // Append some text to the file
    fprintf(fptr, "\n Hi everybody!");

    // Close the file
    fclose(fptr);

  return 0;
}

