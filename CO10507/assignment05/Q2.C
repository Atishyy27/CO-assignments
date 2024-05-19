#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

void displayStudents(struct Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Roll Number: %d, Name: %s, Department: %s, Course: %s, Year of Joining: %d\n",
               students[i].rollNumber, students[i].name, students[i].department,
               students[i].course, students[i].yearOfJoining);
    }
}

int main()
{
    struct Student students[10];

    displayStudents(students, 10);

    return 0;
}
