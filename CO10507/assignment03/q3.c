#include <stdio.h>
int main()
{
    int size;

    printf("Enter total number of elements in the Array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter those elements: ");
    for (int i = size - 1; i >= 0; i--)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nResersed Array would be: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}