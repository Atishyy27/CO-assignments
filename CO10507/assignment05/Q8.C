#include <stdio.h>

#define MAX_EMPLOYEES 100

// Structure to store employee details
struct Employee {
    int empNumber;
    char empName[50];
    float empSalary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Array to store details of employees
    struct Employee employees[MAX_EMPLOYEES];

    // Input details of employees
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empNumber);
        printf("Employee Name: ");
        scanf("%s", employees[i].empName);
        printf("Employee Salary: ");
        scanf("%f", &employees[i].empSalary);
    }

    // Find employee with highest salary
    int maxIndex = 0;
    float maxSalary = employees[0].empSalary;
    for (int i = 1; i < n; i++) {
        if (employees[i].empSalary > maxSalary) {
            maxIndex = i;
            maxSalary = employees[i].empSalary;
        }
    }

    // Display details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee Number: %d\n", employees[maxIndex].empNumber);
    printf("Employee Name: %s\n", employees[maxIndex].empName);
    printf("Employee Salary: %.2f\n", employees[maxIndex].empSalary);

    return 0;
}
