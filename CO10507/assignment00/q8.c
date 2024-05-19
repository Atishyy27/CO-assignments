#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter both numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = (num1 > num2) ? (num1-num2) : (num1+num2);
    //condition? true:false
    printf("%d", result);
    
    return 0;
}

