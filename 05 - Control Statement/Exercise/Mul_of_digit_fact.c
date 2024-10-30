#include <stdio.h>
int main()
{
    int  i, n, m=1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = n; i >= 1; --i)
    {
        m = m*i;
    }
    printf("Factorial = %d",m);

return 0;
}
