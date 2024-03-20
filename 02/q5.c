#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }    
    return sum == originalNum;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);  
    printf("Strong numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }  
    return 0;
}
