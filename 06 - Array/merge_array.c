#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], mergedArray[100];
    int n1, n2, mergedSize;

    // Input size and elements of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input size and elements of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Merge the two arrays
    mergedSize = n1 + n2;
    for (int i = 0; i < n1; i++)
        mergedArray[i] = arr1[i];

    for (int i = 0; i < n2; i++)
        mergedArray[n1 + i] = arr2[i];

    // Display the merged array
    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++)
        printf("%d ", mergedArray[i]);

    printf("\n");

    return 0;
}
