#include <stdio.h>

// Function to find the sum of natural numbers from 1 to n using recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, sumOfNaturalNumbers(n));

    return 0;
}
