#include<stdio.h>

void main()
{

    int i,j,row,col;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&row,&col);
    int mat[row][col];

    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);


    printf("The matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

return 0;
}
