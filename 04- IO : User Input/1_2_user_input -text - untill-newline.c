/*
C Programming Made Easy
---------------------------------------------------------------------
Topic       : User Input
Description : input a a text untill new line is entered
Programmer  : Mohammed Mamun Hossain,
              Asst. Prof., Dept of CSE, BAUST.
			  mamunsust12@gmailcom/mhossain@baustedubd
Date        : 30/01/2023
---------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    char s1[1000],s2[10];

    scanf("%[^\n]s",s1);//to take input till the you click enter
    scanf("%s",s2);//to take input till a space

    printf("%s \n",s1);
    printf("%s",s2);

    return 0;
}
