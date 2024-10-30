/*
Write a for loop that will read the characters in a character-type array called text and write the characters
backwards into another character-type array called back-text. Assume that text contains 80 characters. Use the
comma operator within the for loop.
*/

#include <stdio.h>

int main() {
    char text[80];      // Input array
    char backtext[80];  // Output array for reversed characters

    // Assume text array is filled with characters

    // Initialize backtext with null characters
    for (int i = 0; i < 80; i++) {
        backtext[i] = '\0';
    }

    // Write characters backwards into backtext using a for loop
    for (int i = 0, j = 79; i < 80; i++, j--) {
        if (text[i] == '\0') {
            break;  // Exit the loop when the end of the input array is reached
        }
        backtext[j] = text[i];
    }

    // Print the reversed array
    printf("Original Text: %s\n", text);
    printf("Reversed Text: %s\n", backtext);

    return 0;
}
