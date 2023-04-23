#include<stdio.h>

void main()
{
   // int data[5];
   int data[5]={10,20,30,40,50};

   printf("%d \n",data[0]);
   printf("%d \n",data[1]);
   printf("%d \n",data[2]);
   printf("%d \n",data[3]);
   printf("%d \n",data[4]);

printf("-------------------------------\n");
    for(int i=0; i<5; i++)
         printf("%d \n",data[i]);


	return 0;
}
