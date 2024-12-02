/*You are tasked with writing a C program to display student whose cgpa is greater than 3 from a records stored in an record file */

#include <stdio.h>

// Structure definition for student record
struct Student {
    char name[50];
    long long int stdID;
    float GPA[8];
};

int main() {
    // Open the file for reading
    FILE *file = fopen("std_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    // Read student records from the file
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        // Read each field of the student record
        fscanf(file, "%s", students[i].name);
        fscanf(file, "%lld", &students[i].stdID);
        for (int j = 0; j < 8; j++) {
            fscanf(file, "%f", &students[i].GPA[j]);
        }
    }
    fclose(file);

    // Calculate CGPA and display students with CGPA less than 3.0
    printf("Students with CGPA less than 3.0:\n");
    for (int i = 0; i < 5; i++) {
        float sum = 0;
        for (int j = 0; j < 8; j++) {
            sum += students[i].GPA[j];
        }
        float CGPA = sum / 8;
        if (CGPA < 3.0) {
            printf("Name: %s, Student ID: %lld\n", students[i].name, students[i].stdID);
        }
    }

    return 0;
}
