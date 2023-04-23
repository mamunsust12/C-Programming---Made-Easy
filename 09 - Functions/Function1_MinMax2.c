/* Function - MinMax */
#include <stdio.h>

int  MinMax(); // Prototype  - where a and b are function parameter

int main(){

    int result = MinMax();     // Function Call

      printf("\n \t Maximum number is : %d \n ",result);
    return 0;
}

/* function Definition*/
int  MinMax()     // parameter
{
    int a,b, max;

    printf("Enter your  numbers : ");
    scanf("%d %d", &a,&b);

    if(a>b)
        max=a;
    else
        max=b;
   return max;
}
