/* Structure and Union*/
#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("a.txt", "r");

    // Store the content of the file
    char myString[100];

    // If the file exist
    if(fptr != NULL)
    {
        // Read the content and print it
        while(fgets(myString, 100, fptr))
            printf("%s", myString);
    }
    else  // If the file does not exist
        printf("Not able to open the file.");

    // Close the file
    fclose(fptr);

    return 0;
}

