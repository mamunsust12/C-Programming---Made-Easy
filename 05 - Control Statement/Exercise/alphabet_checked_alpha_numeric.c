#include <stdio.h>

int main() {
    char ch;

    // Take input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ?
    // Check if the character is a vowel
    ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
      ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ?

      // Vowel case
      (ch >= 'A' && ch <= 'Z' ? printf("Vowel in capital letter\n") : printf("Vowel in small letter\n")) :

      // Consonant case
      (ch >= 'A' && ch <= 'Z' ? printf("Consonant in capital letter\n") : printf("Consonant in small letter\n"))) :

    // Neither vowel nor consonant
    printf("Neither a vowel nor a consonant\n");

    return 0;
}
