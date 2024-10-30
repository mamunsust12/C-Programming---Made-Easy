#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index, newValue;

    // Get the size of the array
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

    // Get the index and new value for the update
    printf("Enter the index of the element to update (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
    } else {
        printf("Enter the new value: ");
        scanf("%d", &newValue);
        
        // Update the element at the specified index
        arr[index] = newValue;

        // Print the updated array
        printf("Updated array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(arr);
    return 0;
}
