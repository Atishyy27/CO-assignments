#include <stdio.h>

int sum(int n) {
    int sum = 0;
    
    for (int i=0; i<n;i++)
    sum += i+1;
    
    return sum;
}

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    printf("The num of %d numbers is %d", n, sum(n));
    return 0;
}