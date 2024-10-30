/* We use an if statement to check if the year is a leap year based on the following rules:
        1. If the year is divisible by 4 and not divisible by 100, it's a leap year.
        2. If the year is divisible by 400, it's a leap year.
*/
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if it's a leap year
    if(year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else if (year % 4 == 0 && year % 100 != 0 )
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
