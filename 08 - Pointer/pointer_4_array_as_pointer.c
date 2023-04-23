/* Pointer*/
#include <stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;    // Not int *p=&a;

    printf("\n  %x  %x \n",a,p);
    printf("\n  %x  %x \n",a+1,p+1);

    printf("\n  %d  %d \n",*(a+1),*(p+1));


    printf("\n  %d %d %d \n",*p, *(p+1),*(p+2));

    printf("\n  %d %d %d \n",a[0], a[1],a[4]);

    return 0;
}


