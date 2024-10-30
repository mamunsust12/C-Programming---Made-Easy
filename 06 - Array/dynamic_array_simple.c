#include<stdio.h>

int  main(){

    int i,n;
    printf("Enter your Number:  \n");
    scanf("%d",&n);
    int data[n];

    printf("--------------- input ----------------\n");
    for( i=0; i<n; i++){
        scanf("%d",&data[i]);
    }

    printf("\n --------------- output ----------------\n");
       for( i=0; i<n; i++){
        printf("%d ",data[i]*100);
       }
    return 0;
}
