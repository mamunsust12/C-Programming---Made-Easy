/* We know, there is a rule for valid triangle and there are various types of triangles in terms of their angle and sides’ length.
        i.	Present a C program to check whether a triangle is valid or not if sides are given.
        ii.	Compile a C program to check whether a triangle is equilateral, scalene or isosceles.
*/
#include <stdio.h>

int main()
{
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the triangle is valid
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("It is a valid triangle.\n");

        if (side1 == side2 && side2 == side3)
            printf("\t It is an equilateral triangle.\n");

        else if (side1 == side2 || side1 == side3 || side2 == side3)
            printf("\t is an isosceles triangle.\n");

        else
            printf("\t It is a scalene triangle.\n");
    }
    else
        printf("It is not a valid triangle.\n");

    return 0;
}
