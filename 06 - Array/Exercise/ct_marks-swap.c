/*
In any n credit theory course of BAUST you have to attend in n CTs and of them best n-1 CTs will be counted.
Now write a program that shows the average of  best n-1 CTs marks out of n CTs.
Sample input:
                    Enter the value of n: 4
                    i.	1st CT Marks: 15
                    ii.	2nd CT Marks: 10
                    iii.	3rd  CT Marks: 15
                    iv.	4th  CT Marks: 15
Sample Output:
                      Average of best 3 CT marks: 15
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) ;

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
            if (ctMarks[i] < ctMarks[j])
               swap(&ctMarks[i], &ctMarks[j]);
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

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
