#include <stdio.h>
int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("Vowel in small letter.");
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel in capital letter.");
    else if (c >= 'a' && c <= 'z')
        printf("Consonant in small letter.");
    else if(c >= 'A' && c <= 'Z')
        printf("Consonant in capital letter.");
    else
         printf("neither a Vowel nor a Consonant.");

    return 0;
}
