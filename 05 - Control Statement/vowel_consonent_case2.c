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
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Consonant in %s letter\n", (ch >= 'a' && ch <= 'z') ? "small" : "capital");
    }
    else
    {
        printf("Neither a vowel nor a consonant\n");
    }

    return 0;
}

