/*
Read from a file(in.txt) and write to a file(out.txt)
*/

#include <stdio.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open the input file in read mode
    inFile = fopen("in.txt", "r");

    if (inFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Open the output file in write mode
    outFile = fopen("out.txt", "w");

    if (outFile == NULL) {
        printf("Error creating the output file.\n");
        fclose(inFile);
        return 1;
    }

    printf("File content:\n");

    // Read each character from the input file until the end
    while ((ch = fgetc(inFile)) != EOF) {
        // Write the character to the output file
        fputc(ch, outFile);

        // Display the character on the screen
        putchar(ch);
    }

    // Close the files
    fclose(inFile);
    fclose(outFile);

    return 0;
}
