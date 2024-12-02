#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char paragraph[1000];

    // Open input file in write mode
    inputFile = fopen("input.txt", "w");

    // Read paragraph from console and write it to input.txt
    printf("Enter the paragraph: ");
    gets(paragraph);
    //fgets(paragraph, sizeof(paragraph), stdin);
    fprintf(inputFile, "%s", paragraph);
    fclose(inputFile);

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    // Open output file in write mode
    outputFile = fopen("output.txt", "w");

    // Read from input file and write to output file with reversed case
    int c;
    while ((c = fgetc(inputFile)) != EOF) {
        if (isupper(c))
            c = tolower(c);
        else if (islower(c))
            c = toupper(c);
        fputc(c, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);

    // Calculate size of output file
    long fileSize;
    outputFile = fopen("output.txt", "r");

    fseek(outputFile, 0, SEEK_END); // Move file pointer to end of file
    fileSize = ftell(outputFile);   // Get current position of file pointer
    fclose(outputFile);

    // Print size of output file in bytes
    printf("Size of output.txt: %ld bytes\n", fileSize);

    return 0;
}
