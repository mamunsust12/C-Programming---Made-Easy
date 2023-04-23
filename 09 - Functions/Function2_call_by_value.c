/* Function - call_by_value  */
#include <stdio.h>

void call_by_value(int a); // Prototype  - where a and b are function parameter

int main(){

    int num;

    printf("Enter a  number: ");
    scanf("%d ", &num);

   printf("\n \t Number Before  : %d \n ",num);

    call_by_value(num);     // Function Call - num argument

    printf("\n \t Number after  : %d \n ",num);

    return 0;
}

/* function Definition*/
void call_by_value(int a){    // paramete
	a=100;
    // printf("\n \t Number after  : %d \n ",a);
}
