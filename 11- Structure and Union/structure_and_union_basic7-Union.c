#include<stdio.h>
#include<string.h>

union Courses
{
    char  WebSite[50];
    char  Subject[50];
    int   Price;
};

void main( )
{
    union Courses C;

    strcpy( C.WebSite, "w3schools.in");
    printf( "WebSite : %s\n", C.WebSite);

    strcpy( C.Subject, "The C Programming Language");
    printf( "Book Author : %s\n", C.Subject);

    C.Price = 0;
    printf( "Book Price : %d\n", C.Price);
}
