#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;

    // Get dimensions for the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &r, &c);

    // Dynamically allocate memory for the matrices
    int **mat1 = (int**) malloc(r * sizeof(int*));
    int **mat2 = (int**) malloc(r * sizeof(int*));
    int **sum = (int**) malloc(r * sizeof(int*));
    int **diff = (int**) malloc(r * sizeof(int*));

    for (int i = 0; i < r; i++) {
        mat1[i] = (int*) malloc(c * sizeof(int));
        mat2[i] = (int*) malloc(c * sizeof(int));
        sum[i] = (int*) malloc(c * sizeof(int));
        diff[i] = (int*) malloc(c * sizeof(int));
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Calculate sum and difference of the matrices
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    // Display the sum
    printf("Sum of the matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display the difference
    printf("Difference of the matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < r; i++) {
        free(mat1[i]);
        free(mat2[i]);
        free(sum[i]);
        free(diff[i]);
    }
    free(mat1);
    free(mat2);
    free(sum);
    free(diff);

    return 0;
}
