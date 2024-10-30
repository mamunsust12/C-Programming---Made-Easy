#include <stdio.h>

void LinearSearch();
int array[10], i, n;

int main(){
  int  i;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);
  for (i= 0; i < n; i++)
    scanf("%d", &array[i]);

    LinearSearch( );

  return 0;
}

void LinearSearch(){
     int i, item,flag=0;
      printf("Enter a number to search\n");
      scanf("%d", &item);

      for (i= 0; i < n; i++)
      {
        if (array[i] == item)    /* If required element is found */
        {
          printf("%d is present at location %d.\n", item, i+1);
          flag=1; break;
        }
      }
      if (flag==0)
        printf("%d isn't present in the array.\n", item);

}
