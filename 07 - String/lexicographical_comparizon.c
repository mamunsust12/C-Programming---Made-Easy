// C program to demonstrate arranging
// strings lexicographically
#include <stdio.h>

void compareStrings(char* s1, char* s2)
{
	int i;
	// comparing each character
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
		if (s1[i] > s2[i]) {
			printf("String 1 is lexicographically greater "
				"than string 2");
			return;
		}
		else if (s2[i] > s1[i]) {
			printf("String 2 is lexicographically greater "
				"than string 1");
			return;
		}
	}
	// comparing length of two strings
	if (s1[i] != '\0') {
		printf("String 1 is lexicographically greater than "
			"string 2");
	}
	else if (s2[i] != '\0') {
		printf("String 2 is lexicographically greater than "
			"string 1");
	}
	else {
		printf("Both strings are lexicographically equal");
	}
}
int main()
{

	// declaring two strings
	char s1[20] = "help";
	char s2[20] = "held";

	// function call
	compareStrings(s1, s2);
	return 0;
}
