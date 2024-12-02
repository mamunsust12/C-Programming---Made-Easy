#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp_in, *fp_out;
    char buffer[256]; // Buffer to hold each line (adjust size if needed)

    // Open the input file in read mode
    fp_in = fopen("input_content.txt", "r");
    // Open the output file in write mode
    fp_out = fopen("output_content.txt", "w");

    // Read each line from the input file
    while (fgets(buffer, sizeof(buffer), fp_in) != NULL) {
        // Print the line to the screen
        printf("%s", buffer);
        //puts(buffer);
        // Write the line to the output file
        fprintf(fp_out, "%s", buffer);
    }
    // Close the files
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
