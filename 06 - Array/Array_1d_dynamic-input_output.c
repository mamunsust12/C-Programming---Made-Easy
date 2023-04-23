#include<stdio.h>

int  main()
{
    int i;
    int data[5];

    int n = sizeof(data)/sizeof(data[0]);
    printf("%d\n",n);
    //fflush( stdout );
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
