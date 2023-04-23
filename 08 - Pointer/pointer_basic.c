/* Pointer*/
#include <stdio.h>

int main()
{
    int *p,q;

     p=&q;
     *p=100;

    printf("\n Status of p = %d and q = %d \n",p,q);
    printf("\n Value of  p = %d and q = %d \n",*p,q);

    return 0;
}


