#include <stdio.h>

int main() {
    char str[100]; // Define a character array to store the input string
    int length = 0, isPalindrome = 1; // length of string, isPalindrome flag
    int i;

    // Get the string from the user
    printf("Enter a string: ");
    scanf("%s", str); // Reads a string from the user

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Set to 0 if mismatch found
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
