/*
The Fibonacci numbers are members of an interesting sequence in which each number is equal to the sum
of the previous two numbers. In other words,
Fi = Fi-1 + Fi-2
where Fi refers to the ith Fibonacci number. By definition, the first two Fibonacci numbers equal 1;
i.e., F i = F 2 = 1 .
Hence,
    F3 = F2 + F1= 1 + 1 = 2
    F4 = F3 + F2 = 2 + 1 = 3
    Fs = F4 + F3 = 3 + 2 = 5
and so on.
Write a program that will determine the first n Fibonacci numbers. Test the program with n = 7, n =
10,n= 17 and n=23
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
