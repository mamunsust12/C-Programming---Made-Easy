#include <stdio.h>

int main() {
    char str[] = "madam";  // The input string
    int length = 5;        // Length of the string "madam"
    int i;
    int flag=0;

    // Print the original string
    printf("Original string: %s\n", str);

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
