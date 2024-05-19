#include <stdio.h>

// Structure to store date
struct Date {
    int day;
    int month;
    int year;
};

// Structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    struct Date birthday;
    struct Date admissionDate;
};

// Function to calculate age at admission
int calculateAge(struct Date birthday, struct Date admissionDate) {
    int age = admissionDate.year - birthday.year;
    if (admissionDate.month < birthday.month || (admissionDate.month == birthday.month && admissionDate.day < birthday.day)) {
        age--;
    }
    return age;
}

int main() {
    // Declare a student structure variable
    struct Student student;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter student birthday (DD MM YYYY): ");
    scanf("%d %d %d", &student.birthday.day, &student.birthday.month, &student.birthday.year);
    printf("Enter student admission date (DD MM YYYY): ");
    scanf("%d %d %d", &student.admissionDate.day, &student.admissionDate.month, &student.admissionDate.year);

    // Calculate age at admission
    int age = calculateAge(student.birthday, student.admissionDate);

    // Output student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Birthday: %02d-%02d-%04d\n", student.birthday.day, student.birthday.month, student.birthday.year);
    printf("Admission Date: %02d-%02d-%04d\n", student.admissionDate.day, student.admissionDate.month, student.admissionDate.year);
    printf("Age at Admission: %d\n", age);

    return 0;
}
