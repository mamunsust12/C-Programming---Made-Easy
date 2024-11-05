#include <stdio.h>
//#include<stdlib.h>
#include<string.h>
int main()
{
char str[10];
printf("Enter a line of text: ");
fgets(str, sizeof(str), stdin); // Can read "Hello, world!" including spaces.
printf("You entered: %s", str);
return 0;
}
/* Unlike scanf("%s", str), which stops reading at the first whitespace character,
fgets reads until a newline (\n) is encountered or the buffer limit is reached.
This allows you to read sentences or lines with spaces intact.
*/
