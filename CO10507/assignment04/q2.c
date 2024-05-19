#include<stdio.h>
    int addition(int a, int b){
        int res = a+b;
        return res;
    }   
    int subtraction(int a, int b){
        int res = a-b;
        return res;
    }   
    int multiplication(int a, int b){
        int res = a*b;
        return res;
    }   
    float division(int a, int b){
        int res = a/b;
        return res;
    }
    int main(){
        int a, b, input;
        printf("Enter numbers: ");
        scanf("%d %d", &a, &b);
        printf("Choose operation: \n1. Addition. \n2. Subtraction.\n3. Multiplicatoin. \n4. Division,\n(press 1, 2, 3, or 4)\n");
        scanf("%d", &input);
        
    switch(input) {
        case 1 :
            printf("%d", addition(a,b));
            break;
        case 2 :
            printf("%d", subtraction(a,b));
            break;
        case 3 :
            printf("%d", multiplication(a,b));
            break;
        case 4 :
            printf("%d", division(a,b));
            break;
        default:
            printf("Invalud Input");
        }
        
        return 0;
    }

