/*
Let BAUST admission test is subjected to the following conditions :
    i)	Marks in Mathematics >= 60
    ii)	Marks in Physics >=50
    iii)	Marks in Chemistry >=40
    iv)	Total marks in all three subjects >= 200 or Total in Mathematics and Physics >= 150
*/

#include <stdio.h>

int main() {
    int mathMarks, physicsMarks, chemistryMarks;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &mathMarks);

    printf("Enter marks in Physics: ");
    scanf("%d", &physicsMarks);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistryMarks);

    // Check eligibility based on the conditions
    if (mathMarks >= 60 && physicsMarks >= 50 && chemistryMarks >= 40) {
        printf("Eligible for admission to BAUST.\n");
    } else if ((mathMarks + physicsMarks >= 150) || (mathMarks + physicsMarks + chemistryMarks >= 200)) {
        printf("Eligible for admission to BAUST.\n");
    } else {
        printf("Not eligible for admission to BAUST.\n");
    }

    return 0;
}
