#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;

    // Get dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Get dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second.\n");
        return 1;
    }

    // Dynamically allocate memory for the matrices
    int **mat1 = (int**) malloc(r1 * sizeof(int*));
    int **mat2 = (int**) malloc(r2 * sizeof(int*));
    int **result = (int**) malloc(r1 * sizeof(int*));

    for (int i = 0; i < r1; i++) mat1[i] = (int*) malloc(c1 * sizeof(int));
    for (int i = 0; i < r2; i++) mat2[i] = (int*) malloc(c2 * sizeof(int));
    for (int i = 0; i < r1; i++) result[i] = (int*) malloc(c2 * sizeof(int));

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < r1; i++) free(mat1[i]);
    for (int i = 0; i < r2; i++) free(mat2[i]);
    for (int i = 0; i < r1; i++) free(result[i]);
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
