/*
Calculate the sum of the first n odd integers (i.e., 1 + 3 + 5 + - - - + 2n - 1).
Test the program by calculating the sum of the first 100 odd integers
(note that the last integer will be 199)
*/
#include <stdio.h>

int main(){

    int n;

    // Get input for the number of odd integers
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd integers
    int sum = 0;
    for (int i = 1; i <= 2 * n - 1; i += 2) {
         sum += i;
    }

    // Display the result
    printf("Sum of the first %d odd integers: %d\n", n, sum);

    return 0;
}
