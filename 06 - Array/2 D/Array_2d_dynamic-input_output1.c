#include <stdio.h>
int main() {
    int i , j;
    int data[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&data[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",data[i][j]);
        printf("\n");
    }
    return 0;
}
