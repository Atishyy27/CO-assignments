#include <stdio.h>
int main()
{
    int size;

    printf("Enter total number of elements in the Array: ");
    scanf("%d", &size);

    int arr[size];
    int evenarr[size];
    int oddarr[size];
    int evencount = 0, oddcount = 0;

    printf("Enter those elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenarr[evencount++] = arr[i];
        }
        else
        {
            oddarr[oddcount++] = arr[i];
        }
    }

    printf("\nEven array would be: ");
    for (int j = 0; j < evencount; j++)
    {
        printf("%d ", evenarr[j]);
    }

    printf("\nOdd array would be: ");
    for (int j = 0; j < oddcount; j++)
    {
        printf("%d ", oddarr[j]);
    }

    return 0;
}