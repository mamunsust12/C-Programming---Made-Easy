#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel, lowercase_consonant,uppercase_consonant;
    printf("Enter a character: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 if variable c is a uppercase consonant
    lowercase_consonant = (c >= 'a' && c <= 'z');

   // evaluates to 1 if variable c is a lowercase consonant
    uppercase_consonant =  (c >= 'A' && c <= 'Z');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel)
        printf("%c is a Vowel in small letter.", c);
    else if(uppercase_vowel)
        printf("%c is a Vowel in capital letter.", c);
    else if (lowercase_consonant)
        printf("%c is a Consonant in small letter.", c);
    else if(uppercase_consonant)
        printf("%c is a Consonant in capital letter.", c);
    else
         printf("%c is neither a Vowel nor a Consonant.", c);
    return 0;
}
