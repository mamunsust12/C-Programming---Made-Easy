#include <stdio.h>

int main() {
    char str[10];  // The input string
    int length = 0;        // Length of the string "madam"
    int i;
    int flag=0;
    printf("Enter Your String \n");
    scanf("%[^\n]s",str);

     while(str[length]!='\0')
           length++;

    // Reverse the string in-place
    for (i = 0; i < length / 2; i++) {

         if(str[i] != str[length - i - 1]){
             flag=1;
             break;
         }
    }
    if(flag==0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
