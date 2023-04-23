/* Function - MinMax */
#include <stdio.h>

void MinMax(int a, int b); // Prototype  - where a and b are function parameter

int main(){
    int num1,num2;

    printf("Enter your  numbers : ");
    scanf("%d %d", &num1,&num2);

        MinMax(num1,num2);     // Function Call - num1 num2 argument


    return 0;
}

/* function Definition*/
void MinMax(int a, int b)     // parameter
{
    int max;
    if(a>b)
        max=a;
    else
        max=b;

    printf("\n \t Maximum number is : %d \n ",max);
}
