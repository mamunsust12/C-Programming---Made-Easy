/* Pointer -
If we attempt to use a pointer before it has been assign the address of a variable -  our program probably crash.
*/
#include <stdio.h>

int main()
{
    int *p;

    *p=10;

    printf("\n Status of p = %d \n",p);


    return 0;
}


