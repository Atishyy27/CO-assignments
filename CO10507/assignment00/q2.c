#include <stdio.h>
int main() {
    int arr[5];
    int total = 0;
    for (int i=0; i<5; i++) {
        printf("Enter the marks of Subject %d: ", i+1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    float percentage = total/3.5;

    // considering marks in the end-sem

    printf("The percentage of the student will be: %.2f", percentage);
}

