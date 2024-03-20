#include <stdio.h>

void AllDivisors(int n) {
    printf("Proper divisors of %d are: ", n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    AllDivisors(num);
    
    return 0;
}
