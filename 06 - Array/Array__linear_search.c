#include <stdio.h>
int main()
{
  int array[10], item, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i= 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &item);

  for (i= 0; i < n; i++)
  {
    if (array[i] == item)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", item, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", item);

  return 0;
}
