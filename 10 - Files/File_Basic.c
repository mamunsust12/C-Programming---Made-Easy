/* Structure and Union*/
#include <stdio.h>

int main() {
    
	FILE *fptr;

	// Create a file
	fptr = fopen("test1.txt", "w");

	// Close the file
	fclose(fptr);

  return 0;
}

