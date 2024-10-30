#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i, size, nsize;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    //ptr = (int *)malloc(size * sizeof(int)); // Dynamically allocate memory
    ptr = (int *)calloc(size , sizeof(int)); // Dynamically allocate memory

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Default Values :\n", size);
    for (i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n Enter the new size of the array: ");
    scanf("%d", &nsize);

    realloc(ptr,nsize);

    printf("New  Values :\n", size);
    for (i = 0; i < nsize; i++) {
        printf("%d ", ptr[i]);
    }

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}
