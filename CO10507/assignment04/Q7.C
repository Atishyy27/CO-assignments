#include <stdio.h>

// Function to find the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("The %dth Fibonacci number is: %d\n", N, fibonacci(N));

    return 0;
}
