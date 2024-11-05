#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcdefg hij abc";    // The main string
    char pattern[] = "dbc";            // The pattern to search for
    int i, j, found = 0;

    int str_len = strlen(str);         // Length of the main string
    int pat_len = strlen(pattern);     // Length of the pattern

    // Loop through the main string
    for (i = 0; i <= str_len - pat_len; i++) {
        // Check for the pattern at the current position
        for (j = 0; j < pat_len; j++) {
            if (str[i + j] != pattern[j]) {
                break;  // Break if there's a mismatch
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

    return 0;
}
