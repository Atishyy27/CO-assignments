#include <stdio.h>

int main() {
    int num, digit;
    int frequency[10] = {0}; // Array to store frequency of each digit (0-9)

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Counting frequency of each digit
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        frequency[digit]++; // Increment the frequency of the digit
        num /= 10; // Move to the next digit
    }

    // Output
    printf("Frequency of each digit in the given integer:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i, frequency[i]);
    }

    return 0;
}
