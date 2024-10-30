#include <stdio.h>

int main() {
  int n,count=0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("All prime numbers up to %d are:\n", n);
  for (int number = 2; number <= n; number++) {
        int is_prime = 1;
        for (int i = 2; i <=sqrt(number); i++) {
              if (number % i == 0) {
                is_prime = 0;
                break;
              }
        }
        if (is_prime==1) {
          printf("%d ", number);
          count++;
        }
  }
  printf("\n Total Count = %d",count);

  return 0;
}
