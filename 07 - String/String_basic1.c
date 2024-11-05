#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];

   printf("\n Using gets:\n");
   printf("\n Enter a line of text : ");
   gets(str);
   printf("Given text is : ");
   puts(str);

   printf("\n Using fgets:\n");
   printf("Enter a line of text: ");
   fgets(str, sizeof(str), stdin); // fgets reads until a newline (\n) is encountered or the buffer limit is reached.
   printf("You entered: %s\n", str);

   printf("\n Using scanf:\n");
   printf("Enter a word: ");
   scanf("%s", str); // Does not handle spaces well with "%s", so it stops reading at the first whitespace.
   printf("You entered (scanf): %s\n", str);


   return 0;
}
