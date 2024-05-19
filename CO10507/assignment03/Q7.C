#include <stdio.h>

void insertValue(int arr[], int *size, int value)
{
    int i, j;
    for (i = 0; i < *size; i++)
    {
        if (arr[i] > value)
        {
            break;
        }
    }
    for (j = *size; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = value;
    (*size)++;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100];
    int size = 0;
    int value;

    printf("Enter the sorted array elements (enter -1 to stop):\n");
    while (1)
    {
        scanf("%d", &arr[size]);
        if (arr[size] == -1)
        {
            break;
        }
        size++;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    insertValue(arr, &size, value);

    printf("Sorted array after insertion: ");
    printArray(arr, size);

    return 0;
}
