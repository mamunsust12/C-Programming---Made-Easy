/* Function - MinMax */
#include <stdio.h>

void swap(int *a, int *b); // Prototype  - where a and b are function parameter

int main(){
    int num1,num2, result;

    printf("Enter your  numbers : ");
    scanf("%d %d", &num1,&num2);

    swap(&num1,&num2);     // Function Call - num1 num2 argument

    printf("\n \t Numbers after swap : %d and %d \n ",num1,num2);

    return 0;
}

/* function Definition*/
void swap(int *a, int *b){    // paramete
    int temp=*a;
	*a=*b;
	*b=temp;
}
