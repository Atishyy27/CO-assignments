#include <stdio.h>

#define MAX_SIZE 10

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols, i, j;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d", &rows);
    cols = rows;

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is an identity matrix
    int isIdentity = 1;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                isIdentity = 0;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                isIdentity = 0;
                break;
            }
        }
        if (isIdentity == 0)
        {
            break;
        }
    }

    // Print the result
    if (isIdentity)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
