#include <stdio.h>
void MrrPgm(int columns) {
    int spaces;
    int stars;
    for (int i = 1; i <= columns; i++) {
        for (spaces = 1; spaces <= columns - i; spaces++) {
            printf(" ");
        }
        for (stars = 1; stars <= columns; stars++) {
            printf("*");
        }

        printf("\n");
    }
}
void MrrHD(int columns) {
    int stars;
    for (int i = 1; i <= columns; i++) {
        for (stars = 1; stars <= i; stars++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = columns - 1; i >= 1; i--) {
        for (stars = 1; stars <= i; stars++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int columns;
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    printf("Mirrored Parallelogram:\n");
    MrrPgm(columns);
    printf("\nMirrored Half Diamond:\n");
    MrrHD(columns);
    return 0;
}
