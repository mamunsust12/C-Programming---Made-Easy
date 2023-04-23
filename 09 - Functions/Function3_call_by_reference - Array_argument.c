/* Bubble sort - using function*/
#include <stdio.h>

int n;

void func(int data[]);

int main()
{
    int arr[100],  i, j, tmp;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

   printf("\n Array Before update:");
      for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

       func(arr);

    printf("\n \n Array After update:");
      for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
void func(int data[]){
    for (int i = 0; i <n; i++)
            data[i]=data[i]*100;
}

/*
void func(int data[]){
    for (int i = 0; i <sizeof(data)/ sizeof(int); i++)
            data[i]=data[i]*1000;

}

void func(int data[]){
    data[0]=100;
    data[1]=500;
}
*/
