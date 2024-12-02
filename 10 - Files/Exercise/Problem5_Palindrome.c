#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

// Function to reverse the case of each letter in the string
void reverseCase(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

// Function to check if a string is palindrome
int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char paragraph[MAX_SIZE];
    int palindromeCount = 0, nonPalindromeCount = 0;

    // Input paragraph from the user
    printf("Enter the paragraph: ");
    fgets(paragraph, sizeof(paragraph), stdin);

    // Write the paragraph to input.txt
    FILE *inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }
    fprintf(inputFile, "%s", paragraph);
    fclose(inputFile);

    // Read the paragraph from input.txt, reverse the case of each letter,
    // check if it's palindrome, and write to output.txt
    inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        perror("Error opening files");
        return 1;
    }

    fgets(paragraph, sizeof(paragraph), inputFile);
    reverseCase(paragraph);
    fprintf(outputFile, "Modified Paragraph: %s", paragraph);
    printf("Modified Paragraph: %s", paragraph);

    // Check if the modified paragraph is palindrome or not
    if (isPalindrome(paragraph)) {
        fprintf(outputFile, "\nPalindrome Status: Palindrome");
        printf("\nPalindrome Status: Palindrome");
    } else {
        fprintf(outputFile, "\nPalindrome Status: Not Palindrome");
        printf("\nPalindrome Status: Not Palindrome");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
