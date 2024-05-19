#include <stdio.h>

int cube(int temp) {
    return temp * temp * temp;
}

int armstrong(int n) {
    int digit, sum = 0, temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += cube(digit);
        temp /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int res = armstrong(n);
    if (res == n) {
        printf("%d is an Armstrong number", n);
    } else {
        printf("%d is not an Armstrong number", n);
    }
    return 0;
}
