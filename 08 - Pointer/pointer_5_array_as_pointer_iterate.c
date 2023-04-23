/* Pointer*/
#include <stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;    // Not int *p=&a;

    for(int i=0;i<sizeof(a)/sizeof(int); i++)
        printf("%d ", p[i]);

    return 0;
}


