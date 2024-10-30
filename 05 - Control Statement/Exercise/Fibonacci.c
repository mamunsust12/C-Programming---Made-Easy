#include <stdio.h>
int main(){
    int i, n, f1=0,f2=1,f ;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", f1, f2);

    for (i = 3; i <= n; ++i){
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%d ", f);
    }
    return 0;
}
