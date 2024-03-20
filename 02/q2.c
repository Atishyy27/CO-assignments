#include <stdio.h>
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}
int swapFirstLast(int number) {
    int num = number;
    int digits = countDigits(number);
    int firstDigit = num % 10;
    int lastDigit = num;
    while (lastDigit >= 10) {
        lastDigit /= 10;
    }
    int multiplier = 1;
    for (int i = 0; i < digits - 1; i++) {
        multiplier *= 10;
    }
    number -= lastDigit * multiplier;
    number += firstDigit * multiplier;
    return number;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int originalDigits = countDigits(num);
    printf("Number of digits: %d\n", originalDigits);
    int swapped = swapFirstLast(num);
    printf("Number after swapping first and last digits: %d\n", swapped);
    return 0;
}
