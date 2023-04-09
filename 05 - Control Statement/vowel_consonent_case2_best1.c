/* Write a program that takes a character as input and prints out one of the following
sentences as appropriate:
        • Vowel in capital letter
        • Vowel in small letter
        • Consonant in capital letter
        • Consonant in small letter
        • Neither a vowel nor a consonant
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel in capital letter\n");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel in small letter\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Consonant in capital  letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Consonant in small letter");
    }
    else
    {
        printf("Neither a vowel nor a consonant\n");
    }

    return 0;
}

