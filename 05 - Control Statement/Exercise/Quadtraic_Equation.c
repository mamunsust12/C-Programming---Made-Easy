/*

Calculate the roots of a quadratic equation of the form ax^2 + bx + c = 0 using the well-known quadratic formula:


Ensure consideration for scenarios where one of the constants (a, b, or c) has a value of zero or where the discriminant (b^2 - 4ac) is less than or equal to zero. Utilize the quadratic formula for root determination. Test the program with the following sets of coefficients:

a = 2, b = 6, c = 1
a = 3, b = 3, c = 0
a = 1, b = 3, c = 1
a = 0, b = 12, c = -3
a = 3, b = 6, c = 3
a = 2, b = -4, c = 3
*/
#include <stdio.h>

int main() {
    int n;

    // Get input for the number of Fibonacci numbers
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Initialize variables for the first two Fibonacci numbers
    int fib1 = 1, fib2 = 1;

    // Display the first two Fibonacci numbers
    printf("First %d Fibonacci numbers:\n", n);
    printf("%d\t%d", fib1, fib2);

    // Calculate and display the remaining Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        int nextFib = fib1 + fib2;
        printf("\t%d", nextFib);

        // Update fib1 and fib2 for the next iteration
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}
