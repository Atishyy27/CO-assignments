#include <stdio.h>

// Function to add two numbers using pointers
void add(int *num1, int *num2, int *result) {
    *result = *num1 + *num2;
}

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call add function
    add(&num1, &num2, &sum);

    // Output the sum
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
