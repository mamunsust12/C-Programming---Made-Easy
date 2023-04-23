/* Function - MinMax */
#include <stdio.h>

int MinMax(int a, int b); // Prototype  - where a and b are function parameter

int main(){
    int num1,num2, result;

    printf("Enter your  numbers : ");
    scanf("%d %d", &num1,&num2);

    result=MinMax(num1,num2);     // Function Call - num1 num2 argument

    printf("\n \t Maximum number is : %d \n ",result);

    return 0;
}

/* function Definition*/
int MinMax(int a, int b)     // parameter
{
    int max;
    if(a>b)
        max=a;
    else
        max=b;

    return max;
}
