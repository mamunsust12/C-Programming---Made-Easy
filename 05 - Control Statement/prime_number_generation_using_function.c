#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("All prime numbers up to %d are:\n", n);

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
