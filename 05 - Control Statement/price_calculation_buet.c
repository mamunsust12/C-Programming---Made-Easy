/*You are given the unit price of some commodities as follows.
For first 100 units,the rate is 1.0 Taka/ unit.
For the next 100 units, it is 1.25 taka/ unit.
Then onward, the price is 1.5 taka/unit.
Write a program that takes an integer n as input. N represents the
number of units bought by the customer.
The program should output a floating pointnumber, up to 2 decimal digits,
 representing the total price.
*/

#include <stdio.h>

int main() {
  int n;
  float total_price = 0.0;
  printf("Enter the number of units bought: ");
  scanf("%d", &n);

  if (n <= 100) {
    total_price = n * 1.0;
  }
  else if (n <= 200) {
    total_price = 100 * 1.0 + (n - 100) * 1.25;
  }
  else {
    total_price = 100 * 1.0 + 100 * 1.25 + (n - 200) * 1.5;
  }

  printf("Total price: %.2f Taka\n", total_price);

  return 0;
}
