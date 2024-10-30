#include<stdio.h>

int  main()
{
    int i,data[5]={10,20,30,40,50};

    printf("%d \n",data[4]);

    printf("--------------- output ----------------\n");
    for( i=0;i<5; i++)
    //for( i=0;data[i]!='\0'; i++)
        printf("%d ",data[i]);

    return 0;
}
