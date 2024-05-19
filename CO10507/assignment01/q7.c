#include<stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Yes, Eligible.");
    } else {
        printf("No! not Eligible.");
    }

    return 0;
}