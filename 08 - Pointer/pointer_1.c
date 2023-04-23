/* Pointer*/
#include <stdio.h>

int main()
{
    int *p,q;

    q=10;
    p=&q;

    printf("\n Status of p = %x and q = %d \n",p,q);
    printf("\n Value of  p = %d and q = %d \n",*p,q);

    return 0;
}


