#include <stdio.h>
#include <math.h>

int main() {
    int n, i,is_prime=1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            printf("%d is not a prime number\n", n);
            is_prime=0;
            break;
        }
    }
    if(flag==1)
          printf("%d is a prime number\n", n);
    return 0;
}
