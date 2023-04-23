/* Function - MinMax */
#include <stdio.h>

void  Greetings(); // Prototype

int main(){

    Greetings(); // Function call

    return 0;
}

/* function Definition  (Function Body/Description)*/
void Greetings()     // parameter
{
    char s[100];
    gets(s);
   printf(" \n Hello ! %s  \n Congratulation \n", s);
}
