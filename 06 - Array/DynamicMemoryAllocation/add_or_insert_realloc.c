#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, newValue;

    // Get the initial size of the array
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

    // Get the position and new value for insertion
    printf("Enter the position to insert the new element (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    // Validate the position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Resize the array to make space for the new element
        arr = (int*) realloc(arr, (n + 1) * sizeof(int));
        if (arr == NULL) {
            printf("Memory reallocation failed\n");
            return 1;
        }

        // Shift elements to the right to make room for the new element
        for (int i = n; i >= pos - 1; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the new element
        arr[pos - 1] = newValue;

        // Print the updated array
        printf("Array after insertion:\n");
        for (int i = 0; i < n + 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(arr);
    return 0;
}
