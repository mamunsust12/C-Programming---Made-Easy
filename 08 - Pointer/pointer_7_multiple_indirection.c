/* Pointer*/
#include <stdio.h>

int main()
{
    char ch,*p,**mp;

    *p=&ch;
    mp=&p;
    **mp='X';

    printf("Address of ch = %d, p = %d and mp = %d",&ch,&p,&mp);
    printf("\n Value of ch = %c, p = %d and mp = %d",ch,p,mp);
    printf("\n Value of *p = %c, *mp = %x and **mp = %c",*p,*mp,**mp);

    return 0;
}


