#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define the structure for a student
struct Student {
    char name[50];
    int roll_number;
    int age;
    float grades;
};

// Global array to store student records
struct Student students[MAX_STUDENTS];
int num_students = 0;

// Function to add a new student record
void addStudent() {
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter student name: ");
    scanf("%s", newStudent.name);

    printf("Enter roll number: ");
    scanf("%d", &newStudent.roll_number);

    printf("Enter age: ");
    scanf("%d", &newStudent.age);

    printf("Enter grades: ");
    scanf("%f", &newStudent.grades);

    students[num_students++] = newStudent;

    printf("Student added successfully.\n");
}

// Function to display all student records
void displayStudents() {
    if (num_students == 0) {
        printf("No students in the record.\n");
        return;
    }

    printf("Student Records:\n");
    for (int i = 0; i < num_students; ++i) {
        printf("Name: %s, Roll Number: %d, Age: %d, Grades: %.2f\n",
               students[i].name, students[i].roll_number,
               students[i].age, students[i].grades);
    }
}

int main() {
    int choice;

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
