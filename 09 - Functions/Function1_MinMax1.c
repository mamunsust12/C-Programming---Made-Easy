/* Function - MinMax */
#include <stdio.h>

void  MinMax(); // Prototype  - where a and b are function parameter

int main(){

    MinMax();     // Function Call

    return 0;
}

/* function Definition*/
void  MinMax()     // parameter
{
    int a,b, max;

    printf("Enter your  numbers : ");
    scanf("%d %d", &a,&b);

    if(a>b)
        max=a;
    else
        max=b;

   printf("\n \t Maximum number is : %d \n ",max);
}
