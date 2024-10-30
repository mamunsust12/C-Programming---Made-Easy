#include <stdio.h>

int main()
{
  int  i,j,n,temp;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int data[n];

  printf("Enter %d integer(s)\n", n);
  for (i= 0; i < n; i++)
    scanf("%d", &data[i]);

    for(i=0; i<n-1;i++){
        for(j=0; j<n-i-1; j++){
                if(data[j]> data[j+1]){
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
        }
    }
 printf("The sorted List is :\n", n);
  for (i= 0; i < n; i++)
    printf("%d ", data[i]);

  return 0;
}
