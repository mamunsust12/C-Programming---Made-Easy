#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int num1, num2, sum;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");

    // Read the two integers from the input file
    fscanf(inputFile,"%d %d", &num1, &num2);
    // Close the input file
    fclose(inputFile);

    // Perform the addition
    sum = num1 + num2;

    // Open the output file in write mode
    outputFile = fopen("arko.html", "w");
    // Write the sum to the output file
    fprintf(outputFile, "Sum: %d\n", sum);
    // Close the output file
    fclose(outputFile);

    printf("Sum: %d\n", sum);

    return 0; // Exit with success
}
