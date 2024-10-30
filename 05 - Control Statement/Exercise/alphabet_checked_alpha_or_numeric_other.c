#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an Alphabet.", c);
    else if (c >= '0' && c <= '9')
        printf("%c is an Numeric.", c);
    else
        printf("%c is not an Alpha-Numeric.", c);

    return 0;
}
