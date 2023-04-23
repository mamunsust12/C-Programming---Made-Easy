/* Function - call_by_value  */
#include <stdio.h>

void call_by_ref(int *a); // Prototype -  a is paramete

int main(){

    int num;

    printf("Enter a  number: ");
    scanf("%d ", &num);

    printf("\n \t Number Before  : %d \n ",num);

    call_by_ref(&num);     // Function Call - num is argument

    printf("\n \t Number after  : %d \n ",num);

    return 0;
}

/* function Definition*/
void call_by_ref(int*a){    // a is paramete
	*a=100;
    // printf("\n \t Number after  : %d \n ",a);
}
