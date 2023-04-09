#include <stdio.h>
int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("%c is a Vowel in small letter.", c);
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("%c is a Vowel in capital letter.", c);
    else if (c >= 'a' && c <= 'z')
        printf("%c is a Consonant in small letter.", c);
    else if(c >= 'A' && c <= 'Z')
        printf("%c is a Consonant in capital letter.", c);
    else
         printf("%c is neither a Vowel nor a Consonant.", c);

    return 0;
}
