#include<stdio.h>
#include<limits.h>
int  main()
{
    int i,n;
    printf("Enter your size:");
    scanf("%d",&n);
    int data[n];

    printf("--------------- input ----------------\n");
    for( i=0; i<n; i++)
        scanf("%d",&data[i]);

    int Min=INT_MAX; // 2147483647

    for( i=0; i<n; i++)
         if(Min > data[i])
                Min=data[i];

    printf("Minimum is %d",Min);

    return 0;
}
