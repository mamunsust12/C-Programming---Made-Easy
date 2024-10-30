#include<stdio.h>

int  main()
{
    int i,n;
    printf("Enter your size:");
    scanf("%d",&n);
    int data[n];

    printf("--------------- input ----------------\n");
    for( i=0; i<n; i++)
        scanf("%d",&data[i]);

    printf("--------------- output ----------------");
    for( i=0; i<n; i++)
        printf("%d ",data[i]);

    return 0;
}
