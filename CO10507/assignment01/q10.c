#include <stdio.h>

int main() {
    float basic_salary, gross_salary;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary < 1500) {
        float hra = 0.1 * basic_salary;
        float da = 0.9 * basic_salary;
        gross_salary = basic_salary + hra + da;
    } else {
        float hra = 500;
        float da = 0.98 * basic_salary;
        gross_salary = basic_salary + hra + da;
    }

    printf("Gross salary of the employee is: Rs. %.2f\n", gross_salary);

    return 0;
}
