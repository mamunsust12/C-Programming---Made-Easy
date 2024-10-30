#include <stdio.h>

#define MAX 10  // Define the maximum size of the matrix

int main() {
    int matrix[MAX][MAX];
    int n, sum = 0;

    // Get the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // Summing the main diagonal elements
    }

    // Display the sum of the diagonal elements
    printf("Sum of the diagonal elements: %d\n", sum);

    return 0;
}
