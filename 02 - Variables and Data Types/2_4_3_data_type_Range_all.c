/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : Tokens - Variables and Data Types :Data Types and Format Specifiers
Description : Range various data types
Programmer  : Mohammed Mamun Hossain,
                     Asst. Prof., Dept of CSE, BAUST.
			        mamunsust12@gmailcom/mhossain@baustedubd
Date        : 24/01/2024
---------------------------------------------------------------------
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Character range
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);

    // Integer range
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);

    // Short integer range
    printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);

    // Long integer range
    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);

    // Long long integer range
    printf("Range of long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    // Floating-point range
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);

    // Double precision floating-point range
    printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);

    // Long double precision floating-point range
    printf("Range of long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
