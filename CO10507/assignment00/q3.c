#include <stdio.h>

int main() {
    int radius;
    float pi=3.1415;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    float perimeter = 2*pi*radius;
    float area = pi*radius*radius;
    
    printf("The perimeter will be: %.2f\n", perimeter); 
    printf("The area will be: %.2f\n", area); 
    
    return 0;
}

