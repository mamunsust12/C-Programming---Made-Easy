#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Number of elements to insert
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the data
    int *data = (int *)malloc(n * sizeof(int));

    if (data == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Insert elements into the data
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n ; i++)
        scanf("%d", &data[i]);

    // Print the elements of the data
    printf("Elements in the data:\n");
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);

    printf("\n");

    // Free dynamically allocated memory
    free(data);

    return 0;
}
