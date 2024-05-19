#include <stdio.h>

// Structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare a structure variable of type Student
    struct Student student;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter age: ");
    scanf("%d", &student.age);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
