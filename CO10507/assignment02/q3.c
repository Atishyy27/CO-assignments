#include <stdio.h>
int main() {
    int rem, binary_to_decimal = 0, temp, n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)  {
        rem = temp % 2;
        temp /= 2;
        binary_to_decimal += rem * i;
        i *= 10;
    } printf("%d in binary can be represented as: %d", n, binary_to_decimal);
    return 0;
}