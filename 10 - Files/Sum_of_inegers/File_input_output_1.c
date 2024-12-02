#include <stdio.h>

int main() {
    FILE *in;
    int num1, num2, sum;

    in = fopen("input.txt", "r");

    fscanf(in, "%d %d", &num1, &num2);

    sum = num1 + num2;
    printf( "Sum: %d\n", sum);

    fclose(in);
    return 0; // Exit with success
}
