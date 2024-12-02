/*You are tasked with writing a C program to sort student records stored in an array of structures based on the student's name and roll number.*/
#include <stdio.h>
#include <string.h>

// Structure definition for student record
struct Student {
    char name[50];
    int roll;
    float cgpa;
};

// Function to perform Bubble Sort on an array of structures by name
void sortByName(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Swap the elements if they are out of order
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to perform Bubble Sort on an array of structures by roll
void sortByRoll(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].roll > students[j + 1].roll) {
                // Swap the elements if they are out of order
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *file;
    int n;

    // Open the file for reading
    file = fopen("student_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the number of students
    fscanf(file, "%d", &n);
    struct Student students[n];

    // Read student details from the file
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %d %f", students[i].name, &students[i].roll, &students[i].cgpa);
    }
    fclose(file);

    // Sort the array of structures by name and print
    sortByName(students, n);
    printf("\nAfter Sorting by name:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].roll, students[i].cgpa);
    }

    // Sort the array of structures by roll and print
    sortByRoll(students, n);
    printf("\nAfter Sorting by roll:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].roll, students[i].cgpa);
    }

    return 0;
}
