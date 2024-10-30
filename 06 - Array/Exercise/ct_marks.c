#include <stdio.h>

int main() {
    int n;

     label1:
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input. n should be greater than 1.\n");
        goto label1;
    }

    int ctMarks[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter the %d CT Marks: ", i + 1);
        scanf("%d", &ctMarks[i]);
    }

    // Sort the CT marks in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ctMarks[i] < ctMarks[j]) {
                int temp = ctMarks[i];
                ctMarks[i] = ctMarks[j];
                ctMarks[j] = temp;
            }
        }
    }

    // Calculate the average of the best (n-1) CT marks
    for (int i = 0; i < n - 1; i++) {
        sum += ctMarks[i];
    }

    float average = (float)sum / (n - 1);

    printf("\n Average of the %d  best CTs marks: %.2f  \n", n - 1, average);

    return 0;
}
