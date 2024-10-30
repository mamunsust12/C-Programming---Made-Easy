#include <stdio.h>

int main()
{
     float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

     if (side1 == side2 && side2 == side3)
            printf("\t It is an equilateral triangle.\n");

        else if (side1 == side2 || side1 == side3 || side2 == side3)
            printf("\t is an isosceles triangle.\n");

        else
            printf("\t It is a scalene triangle.\n");

    return 0;
}
