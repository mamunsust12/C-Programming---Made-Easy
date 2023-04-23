#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

   for(int i=0;i<begin;i++)
        if(s[i]!=r[i]){
               printf("Not Palindrome\n");
               break;
        }
        else
             if(i==begin-1)
                    printf(" Palindrome\n");


   return 0;
}
