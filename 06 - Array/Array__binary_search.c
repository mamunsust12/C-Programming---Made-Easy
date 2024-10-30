#include <stdio.h>
#include <math.h>
int main()
{
  int  item, i, n,mid, flag=0;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int data[n];

  printf("Enter %d integer(s)\n", n);
  for (i= 0; i < n; i++)
    scanf("%d", &data[i]);

  printf("Enter a number to search\n");
  scanf("%d", &item);

  int beg=0,end=n-1;


  while(beg<=end){
    mid=ceil((beg+end)/2); // or mid=beg + (end - beg) / 2;

    if(item==data[mid]){
       printf("Item  Found at %d\n",mid);
       flag=1;
       break;
       }
    else if(item < data[mid])
        end=mid-1;
    else
        beg=mid+1;
  }
  if(flag==0)
     printf("Item Not Found\n");

  return 0;
}
