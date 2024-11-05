#include <stdio.h>

int main() {
    char str[100];

    printf("Using fgets:\n");
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered (fgets): %s\n", str);

    printf("\n Using scanf:\n");
    printf("Enter a word: ");
    scanf("%s", str);
    printf("You entered (scanf): %s\n", str);

    return 0;
}

/*
fgets is preferred for:

Safety from buffer overflow,

Handling spaces and multiple words,

Flexibility in error handling and input control.

It's an ideal choice when reading text input from users,
especially when working with lines or sentences.

*/
