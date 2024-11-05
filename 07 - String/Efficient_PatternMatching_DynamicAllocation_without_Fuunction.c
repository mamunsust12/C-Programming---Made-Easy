/*When reading strings using fgets, a newline character (\n) is often included at the end.
 To remove it, you can use strcspn to find the position of \n in the string and replace it
 with a null terminator (\0)

 fgets lets you specify the maximum number of characters to read,
 which prevents reading more characters than the allocated buffer can hold.

char str[100];
fgets(str, sizeof(str), stdin); // Reads up to 99 characters plus the null terminator.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str, *pattern;
    int str_len, pat_len, i, j, found = 0;

    // Dynamically allocate memory for the main string
    str = (char *)malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed for main string.\n");
        return 1;
    }

    // Dynamically allocate memory for the pattern
    pattern = (char *)malloc(10 * sizeof(char));
    if (pattern == NULL) {
        printf("Memory allocation failed for pattern.\n");
        free(str);  // Free the allocated memory for str if pattern allocation fails
        return 1;
    }

    // Get the main string and pattern from the user
    printf("Enter the main string: ");
    fgets(str, 100, stdin); //Careful a newline character (\n) is often included at the end

    printf("Enter the pattern to search for: ");
    fgets(pattern, 10, stdin);

    // Remove newline characters from inputs, if any
    str[strcspn(str, "\n")] = 0;
    pattern[strcspn(pattern, "\n")] = 0;

    // Calculate lengths of the main string and pattern
    str_len = strlen(str);
    pat_len = strlen(pattern);

    // Search for the pattern in the main string
    for (i = 0; i <= str_len - pat_len; i++) {
        for (j = 0; j < pat_len; j++) {
            if (str[i + j] != pattern[j]) {
                break;  // Break if a mismatch is found
            }
        }

        // If the full pattern was found
        if (j == pat_len) {
            found = 1;
            printf("Pattern \"%s\" found at position %d\n", pattern, i);
            break;
        }
    }

    // If the pattern was not found
    if (!found) {
        printf("Pattern \"%s\" not found in the string.\n", pattern);
    }

    // Free dynamically allocated memory
    free(str);
    free(pattern);

    return 0;
}

/*When reading strings using fgets, a newline character (\n) is often included at the end.
 To remove it, you can use strcspn to find the position of \n in the string and replace it
 with a null terminator (\0)

 fgets lets you specify the maximum number of characters to read,
 which prevents reading more characters than the allocated buffer can hold.

char str[100];
fgets(str, sizeof(str), stdin); // Reads up to 99 characters plus the null terminator.

*/
