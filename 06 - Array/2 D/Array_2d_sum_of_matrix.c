#include<stdio.h>

void main()
{
    int mat[10][10];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);

    printf("Output  matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    //To add diagonal elements
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            if(i==j)
             sum=sum+mat[i][j];

    printf("The sum of the matrix = %d\n",sum);
}
