#include<stdio.h>

int  main()
{
    int i,data[10];


    printf("Enter your Number:  \n");
    scanf("%d",&n);


    printf("--------------- input ----------------\n");
    for( i=0; i<n; i++){
        scanf("%d ",&data[i]);
        printf("%d",i);
    }


    printf("--------------- output ----------------\n");
    for( i=0;data[i]!='\0'; i++)
        printf("%d \n",data[i]);

    return 0;
}
