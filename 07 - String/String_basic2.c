#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
int main()
{
   char ch, s1[10],s2[100];

   printf("Enter a string : ");
   //scanf("%s",s1);

   scanf("%[^\n]s", s1);
   //puts(s1);
   printf("Given string is : %s\n", s1);

   //getch();

   fflush(stdin);

   printf("\n Enter another string : ");
   gets(s2);
   printf(" \n Given string is : ");
   puts(s2);

   return 0;
}
