/* Pointer*/
#include <stdio.h>

int main()
{
    char str[100]= "Hello Pointer!";
    char *p=str;    // Not int *p=&a;

    for(int i=0;i<sizeof(str)/sizeof(int); i++)
        printf("%c", p[i]);

    return 0;
}


