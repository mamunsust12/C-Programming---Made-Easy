#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact = 1;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; ++i) {
            fact *= i;
        }

        // Output the result
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
