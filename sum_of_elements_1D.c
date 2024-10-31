#include<stdio.h>

int  main(){
    int i;
    int data[5];
    //int data[5]={10,20,30,40,50};
    printf("------ input ------\n");
    for( i=0;i<5; i++)
         scanf("%d",&data[i]);

    printf("------ output ------\n");
    int sum =0;
    for( i=0;i<5; i++){
         printf("%d ",data[i]);
         sum=sum+data[i];
    }
    printf("\n Sum =%d ",sum);

    return 0;
}
