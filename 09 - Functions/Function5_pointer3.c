/* Bubble sort - using function*/
#include <stdio.h>

int fact(int n);

int main()
{
    int n,f;

    printf("Enter your number: ");
    scanf("%d", &n);

    f=fact(n);

  	printf("Factorial of %d =%d ", n,f);
    return 0;
}
int fact(int n){
    if(n==0)
		return 1;
	else
		 return(n*fact(n-1));
}
