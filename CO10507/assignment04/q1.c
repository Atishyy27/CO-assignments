#include<stdio.h>
    float cel2Far(int temp) {
        float far = (1.8*temp)+32;
        return far;
    }
    float far2Cel(int temp) {
        float cel = ((temp-32)*(5/9));
        return cel;
    }
    
    int main(){
        int input, temp;
        printf("Enter Temprature: ");
        scanf("%d", &temp);
        printf("Choose conversion: \n1. Celsius to Farhaniet. \n2. Farhaniet to Celsius.\n(press 1 or 2)\n");
        scanf("%d", &input);
        
        if (input == 1) {
            printf("%.2f", cel2Far(temp));
        } else if (input == 2) {
            printf("%.2f", far2Cel(temp));
        } else {
            printf("Invalid Input");
        }
    
         return 0;
    }

