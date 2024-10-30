/*
Write an interactive program that will read in a positive integer value and determine the following:
    i.  If the integer is a prime number.
    ii. If the integer is a Fibonacci number.
Write the program in such a manner that it will execute repeatedly, until a zero value is detected for the
input quantity. Test the program with several integer values of your choice.
*/

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int num) {
    int a = 0, b = 1, c;

    while (a <= num) {
        if (a == num) {
            return 1;  // Fibonacci number
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;  // Not a Fibonacci number
}

int main(){
    int input;

    // Keep executing until a zero is entered
    do {
        // Get input from the user
        printf("Enter a positive integer (enter 0 to exit): ");
        scanf("%d", &input);

        if (input != 0) {
            // Check if the number is prime
            if (isPrime(input)) {
                printf("%d is a prime number.\n", input);
            } else {
                printf("%d is not a prime number.\n", input);
            }

            // Check if the number is a Fibonacci number
            if (isFibonacci(input)) {
                printf("%d is a Fibonacci number.\n", input);
            } else {
                printf("%d is not a Fibonacci number.\n", input);
            }

            printf("\n");
        }

    } while (input != 0);

    printf("Exiting the program.\n");

    return 0;
}
