#include <stdio.h>
#include <stdbool.h>
bool printPattern(int rows, int columns) {
    if (rows % 2 == 0 || columns % 2 == 0) {
        printf("Error: Number of rows and columns must be odd.\n");
        return false;
    }
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if ((i == (rows / 2) + 1) || (j == (columns / 2) + 1))
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return true;
}
int main() {
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    if (printPattern(rows, columns)) {
        printf("Pattern printed successfully.\n");
    } else {
        printf("Pattern could not be printed.\n");
    }
    return 0;
}
