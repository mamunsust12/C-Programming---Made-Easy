/*
C Programming Made Easy
---------------------------------------------------------------------
Topic               : Control Statements - Branching using switch statement
Description    : Week Days
Programmer  : Mohammed Mamun Hossain,
                           Asst. Prof., Dept of CSE, BAUST.
                           mamunsust12@gmailcom/mhossain@baustedubd
Date                 : 02/27/2023
---------------------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    int day;
    printf("Enter day Value : 1 - 7 ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Friday");
        break;
    case 2:
        printf("Saturday");
        break;
    case 3:
        printf("Sunday");
        break;
    case 4:
        printf("Monday");
        break;
    case 5:
        printf("Tuesday");
        break;
    case 6:
        printf("Wednesday");
        break;
    case 7:
        printf("Thursday");
        break;
    default:
         printf("Invalid Input");
    }

    return 0;
}

