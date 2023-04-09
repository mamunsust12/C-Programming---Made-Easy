/*
C Programming Made Easy
---------------------------------------------------------------------
Topic               : Control Statements - Branching using switch statement
Description    : Grading System of Students
Programmer  : Mohammed Mamun Hossain,
                           Asst. Prof., Dept of CSE, BAUST.
                           mamunsust12@gmailcom/mhossain@baustedubd
Date                 : 02/27/2023
---------------------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    int marks;

    printf("Enter The Marks Between 0 To 100: \n");
    scanf("%d", &marks);

    if(marks>100  || marks < 0 )
        printf("\n Invalid Input. \n Please enter  a number between 0 to 100 \n");
    else
    {
        switch(marks/5)
        {
        case 20 :
        case 19 :
        case 18 :
        case 17 :
        case 16 :
            printf("\n Your Grade is: A+" );
            break;
        case 15 :
            printf("\n Your Grade is: A" );
            break;
        case 14 :
            printf("\n Your Grade is: A-" );
            break;
        case 13 :
            printf("\n Your Grade is: B+" );
            break;
        case 12 :
            printf("\n Your Grade is: B ");
            break;
            case 11 :
            printf("\n Your Grade is: B- ");
            break;
            case 10 :
            printf("\n Your Grade is: C+ ");
            break;
            case 9:
            printf("\n Your Grade is: C ");
            break;
        case 8 :
            printf("\n Your Grade is: D ");
            break;
        default :
            printf("\n You Grade is: F  \n");
        }
    }

    getch();
    return 0;
}

