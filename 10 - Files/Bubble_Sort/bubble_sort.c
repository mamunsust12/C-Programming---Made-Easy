#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fp_in, * fp_out;
    int *arr,i,j,n,t;

    fp_in = fopen("input.txt", "r");
    fp_out = fopen("output.txt", "w");

    printf("How many  value:\n");
        fscanf(fp_in,"%d",&n);
        printf("%d\n",n);

        arr=(int*)malloc(n*sizeof(int));
        //arr=(int*)calloc(n,sizeof(int));

    if(fp_in==NULL)
        printf("Error");
    else{
        printf("Given   values:\n");
        for(i=0; i<n; i++){
            fscanf(fp_in,"%d",&arr[i]);
            printf("%d ",arr[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
    }
    printf("\nSorted  value:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
        fprintf(fp_out,"%d ",arr[i]);
    }

    free(arr);
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
