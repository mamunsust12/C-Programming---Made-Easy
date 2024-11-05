#include <stdio.h>

int main() {
    char str[] = "Madam";  // The input string
    int length = 5;        // Length of the string "madam"
    int i;

    // Print the original string
    printf("Original string: %s\n", str);

    // Reverse the string in-place
    for (i = 0; i < length / 2; i++) {
        // Swap characters from the beginning and the end
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
