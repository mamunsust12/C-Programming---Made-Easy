#include <stdio.h>
int main()
{
    int  i, n, m=1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        m = m*i;
    }
    printf("Factorial = %d",m);

return 0;
}
