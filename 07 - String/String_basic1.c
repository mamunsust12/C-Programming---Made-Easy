#include <stdio.h>
#include <string.h>
int main()
{
   char s1[100],s2[100];

   printf("Enter a string : ");
   gets(s1);
   printf("Given string is : %s \n", s1);


   printf("\n Enter another string : ");
   gets(s2);
   printf("Given string is : ");
   puts(s2);

   return 0;
}
