#include<stdio.h>

int main(){
    int i,j;
    int data[3][3];
    printf("------ input ------\n");
    for( i=0;i<3; i++)
        for( j=0;j<3; j++)
           scanf("%d",&data[i][j]);

    printf("------ output ------\n");
    int sum =0;

    for( i=0;i<3; i++){
        for( j=0;j<3; j++){
           printf("%d ",data[i][j]);
           //if(i==j)
              sum=sum+data[i][j];
        }
        printf("\n");
    }
    printf(" \n Sum =%d ",sum);

    return 0;
}
