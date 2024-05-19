#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    
    //without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("the swapped numbers are: %d %d", a, b);
    
    return 0;
}