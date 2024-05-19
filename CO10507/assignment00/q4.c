#include <stdio.h>

int main() {
    int pa, ir, t;
    printf("Enter Principle Amount: ");
    scanf("%d", &pa);
    
    printf("Enter Interest Rate: ");
    scanf("%d", &ir);
    
    printf("Enter time: ");
    scanf("%d", &t);
    
    int returns = pa+pa*ir*t/100;
    
    printf("The total returns will be of %d", returns);
    
    return 0;
}

