// Q1. Write a program to Compute Quotient and Remainder
// Q2. Write a program that accept marks in 5 subjects and calculate the total percentage marks.
// Q3. Write a program that accepts the radius of circle and calculate its area and perimeter of that
// circle.
// Q4. Write a program to compute simple interest
// Q5. Write a program to Count Number of Digits in an Integer
// Q6. Write a program to Swap Two Numbers
// Q7. Write a program to Find the Size of int, float, double, and char
// Q8. Write a program that accept two number , if first number is greater than second number
// then print the difference of both the number otherwise print their sum. Write this program using
// ternary operator.

#include <stdio.h>
int main() {
    int divident, divisor, quotient, remainder;

    printf("Enter Divident");
    scanf("%d", &divident);    
    printf("Enter divisor");
    scanf("%d", &divisor);

    quotient = divident/divisor;
    remainder = divident % divisor;

    printf("The Quotient is: %d\n", quotient);
    printf("The Remainder is: %d\n", remainder);

    return 0;
}