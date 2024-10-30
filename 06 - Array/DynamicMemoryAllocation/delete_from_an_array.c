#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;

    // Get the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position of the element to delete
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left to overwrite the element at pos-1
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Resize the array
        arr = (int*) realloc(arr, (n - 1) * sizeof(int));
        if (arr == NULL && n - 1 > 0) {
            printf("Memory reallocation failed\n");
            return 1;
        }

        // Print the array after deletion
        printf("Array after deletion:\n");
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(arr);
    return 0;
}
