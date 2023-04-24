#include <stdio.h>
#include <stdlib.h>

int main()
{	int* ptr;
	int n =5, i;

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully allocated by calloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		printf("Memory successfully allocated using calloc.\n");
		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}
		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d ", ptr[i]);
		}
	}
    // Free the memory
    free(ptr);
    printf("\n Calloc Memory successfully freed.\n");
	return 0;
}
