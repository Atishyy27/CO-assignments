#include <stdio.h>
#include <math.h>


int main() {
    int num, last, first, count=0;
    printf("Enter num: ");
    scanf("%d", &num);
    
    int temp = num;
    
    temp = num;
    while (temp >=10) {
        temp/=10;
        count++;
    }
    first = temp;
    last = num%10;
    num = num-last+first;
    num = num-(first*pow(10,count))+(last*pow(10,count));
    
    printf("The modified number will be %d", num);
    
    return 0;
}



