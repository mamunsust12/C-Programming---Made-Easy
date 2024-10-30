#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    // Get the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    // Dynamically allocate memory for the first array
    int *arr1 = (int*) malloc(n1 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get elements of the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Get the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    // Dynamically allocate memory for the second array
    int *arr2 = (int*) malloc(n2 * sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        free(arr1);
        return 1;
    }

    // Get elements of the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Allocate memory for the merged array
    int *mergedArray = (int*) malloc((n1 + n2) * sizeof(int));
    if (mergedArray == NULL) {
        printf("Memory allocation failed\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    // Copy elements from the first array to the merged array
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from the second array to the merged array
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(mergedArray);

    return 0;
}
