#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int frequency[10] = {0};
    while (num != 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    printf("Frequency of each digit in the given integer:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] != 0) {
            printf("Digit %d occurs %d times\n", i, frequency[i]);
        }
    }
    return 0;
}
