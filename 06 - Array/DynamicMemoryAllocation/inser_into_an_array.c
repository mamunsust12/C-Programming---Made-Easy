#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i, size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int)); // Dynamically allocate memory

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position.\n");
        free(arr); // Free allocated memory before exiting
        return 1;
    }

    size++; // Increase the size of the array
    realloc(arr,size)
    // Shift elements to the right to make space for the new element
    for (int i = size-1; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
