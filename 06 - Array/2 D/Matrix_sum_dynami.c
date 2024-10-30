#include<stdio.h>
#include<stdlib.h>
int main(){

    int r,c,i,j,s=0,as=0;

    printf("Enter your row number:");
    scanf("%d",&r);
    int * matrix[3];
    printf("\nEnter your colum number:");
    scanf("%d",&c);

    for(i=0; i<r; i++)
        matrix[i]=(int*)calloc(c,sizeof(int));

    printf("\nEnter your values:\n");
    for(i=0; i<r; i++){
        //printf("\nEnter your values of %d number row :",i+1);
        for(j=0; j<c; j++){
           scanf("%d",&matrix[i][j]);
                s=s+matrix[i][j];
                if(i==j)
                     as=as+matrix[i][j];
        }
    }

/*  printf("\nGiven  Matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++)
           printf("%d ",matrix[i][j]);
         printf("\n");
    }*/
    printf("\nMatrix Sum:%d",s);
    printf("\nDiagonal sum:%d",as);
    return 0;
}
