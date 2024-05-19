#include <stdio.h>

// Function to input grades for each student
void inputGrades(int numStudents, float grades[]) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
}

// Function to calculate the average grade
float calculateAverage(int numStudents, float grades[]) {
    float sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += grades[i];
    }
    return sum / numStudents;
}

// Function to display performance report
void displayReport(float averageGrade) {
    printf("Average Grade: %.2f\n", averageGrade);
    if (averageGrade >= 70) {
        printf("Performance: Good\n");
    } else if (averageGrade >= 50) {
        printf("Performance: Satisfactory\n");
    } else {
        printf("Performance: Needs Improvement\n");
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    float grades[numStudents];
    inputGrades(numStudents, grades);
    float averageGrade = calculateAverage(numStudents, grades);
    displayReport(averageGrade);

    return 0;
}
