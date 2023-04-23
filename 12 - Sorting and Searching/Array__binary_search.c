#include <stdio.h>
int main()
{
    int i, first, last, middle, n, item, array[100];

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i= 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter value to find\n");
    scanf("%d", &item);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (array[middle] < item)
            first = middle + 1;
        else if (array[middle] == item)
        {
            printf("%d found at location %d.\n", item, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", item);

    return 0;
}
