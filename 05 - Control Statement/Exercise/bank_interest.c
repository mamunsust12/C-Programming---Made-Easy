/*
Suppose that P dollars are borrowed from a bank, with the understanding that A dollars will be repaid each
month until the entire loan has been repaid. Part of the monthly payment will be interest, calculated as i
percent of the current unpaid balance. The remainder of the monthly payment will be applied toward
reducing the unpaid balance.
Write a C program that will determine the following information:
(i) The amount of interest paid each month.
(ii) The amount of money applied toward the unpaid balance each month.
(iii) The cumulative amount of interest that has been paid at the end of each month.
(iv) The amount of the loan that is still unpaid at the end of each month.
( v ) The number of monthly payments required to repay the entire loan.
(vi) The amount of the last payment (since it will probably be less than A).
Test your program using the following data: P = $40,000; A = $2,000; i = 1%per month.
*/

#include <stdio.h>

int main() {
    // Loan parameters
    double P = 40000.0;  // Principal amount
    double A = 2000.0;   // Monthly payment
    double i = 0.01;     // Monthly interest rate (1% expressed as decimal)

    // Initialize variables
    double unpaidBalance = P;
    double cumulativeInterest = 0.0;
    int month = 1;

    printf("Month\tInterest\tPayment\t\tUnpaid Balance\tCumulative Interest\n");

    // Calculate information for each month until the loan is fully repaid
    while (unpaidBalance > 0) {
        // Calculate interest for the current month
        double interest = unpaidBalance * i;

        // Determine the amount applied toward the unpaid balance
        double paymentToBalance = A - interest;

        // Calculate cumulative interest
        cumulativeInterest += interest;

        // Update unpaid balance
        unpaidBalance -= paymentToBalance;

        // Display information for the current month
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", month, interest, paymentToBalance, unpaidBalance, cumulativeInterest);

        // Increment month counter
        month++;
    }

    printf("\nLoan fully repaid in %d months.\n", month - 1);

    return 0;
}

