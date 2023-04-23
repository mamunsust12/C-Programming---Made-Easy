/* Bubble sort - using function*/
#include <stdio.h>

void rec_func(int n);

int main()
{
    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    rec_func(n);


    return 0;
}
void rec_func(int n){
    if(n>0){
		rec_func(n-1);
        printf("%5d ", n);
    }
}
