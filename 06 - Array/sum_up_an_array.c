#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        //sum += arr[i];
        sum = sum+arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
