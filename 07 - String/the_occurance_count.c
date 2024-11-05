#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    // Input the string from the user
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Find occurrences of 'the' in the string
    printf("Occurrence: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e') {
            count++;
            printf("%d, ", i);
        }
    }
    printf("\nLocation: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e') {
            printf("%d, ", i);
            i += 2; // Move the index to skip 'the' already found
        }
    }
    printf("\n");

    printf("Total occurrences: %d\n", count);

    return 0;
}
