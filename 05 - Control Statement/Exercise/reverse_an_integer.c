#include <stdio.h>


int main() {
    int number,digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

   int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number/10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
