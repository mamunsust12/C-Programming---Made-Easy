// C program to illustrate differences
// between structure and Union

#include <stdio.h>
#include <string.h>

// declaring structure
struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};

// declaring union

union union_example
{
	int integer;
	float decimal;
	char name[20];
};

void main()
{
	// creating variable for structure
	// and initializing values difference
	// six
	struct struct_example s={18,38,"geeksforgeeks"};

	// creating variable for union
	// and initializing values
	union union_example u={18,38,"geeksforgeeks"};


	printf("structure data:\n integer: %d\n"
				"decimal: %.2f\n name: %s\n",
				s.integer, s.decimal, s.name);
	printf("\nunion data:\n integer: %d\n"
				"decimal: %.2f\n name: %s\n",
				u.integer, u.decimal, u.name);


	// difference two and three
	printf("\nsizeof structure : %d\n", sizeof(s));
	printf("sizeof union : %d\n", sizeof(u));

	// difference five
	printf("\n Accessing all members at a time:");
	s.integer = 183;
	s.decimal = 90;
	strcpy(s.name, "geeksforgeeks");

	printf("structure data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
			s.integer, s.decimal, s.name);

	u.integer = 183;
	u.decimal = 90;
	strcpy(u.name, "geeksforgeeks");

	printf("\nunion data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
			u.integer, u.decimal, u.name);

	printf("\n Accessing one member at time:");

	printf("\nstructure data:");
	s.integer = 240;
	printf("\ninteger: %d", s.integer);

	s.decimal = 120;
	printf("\ndecimal: %f", s.decimal);

	strcpy(s.name, "C programming");
	printf("\nname: %s\n", s.name);

	printf("\n union data:");
	u.integer = 240;
	printf("\ninteger: %d", u.integer);

	u.decimal = 120;
	printf("\ndecimal: %f", u.decimal);

	strcpy(u.name, "C programming");
	printf("\nname: %s\n", u.name);

	//difference four
	printf("\nAltering a member value:\n");
	s.integer = 1218;
	printf("structure data:\n integer: %d\n "
				" decimal: %.2f\n name: %s\n",
				s.integer, s.decimal, s.name);

	u.integer = 1218;
	printf("union data:\n integer: %d\n"
		" decimal: %.2f\n name: %s\n",
			u.integer, u.decimal, u.name);
}
