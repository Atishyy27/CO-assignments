#include <stdio.h>

int main() {
    int num, count=0;
    printf("Enter num: ");
    scanf("%d", &num);
    while ( num !=0){
        num /= 10;
        count++;
    }
    
    printf("The total digits will be %d", count);
    
    return 0;
}

