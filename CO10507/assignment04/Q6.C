#include <stdio.h>

// Function to find the sum of digits of a positive integer using recursion
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));

    return 0;
}
