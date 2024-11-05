#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Separate vowels and consonants
    printf("Vowels: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            printf("%c", str[i]);
        }
    }

    printf("\nConsonants: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && !(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')) {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}
