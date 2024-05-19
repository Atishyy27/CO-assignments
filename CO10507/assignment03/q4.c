#include <stdio.h>
int main()
{
    int size;

    printf("Enter total number of elements in the Array: ");
    scanf("%d", &size);

    int arr[size];
    int count[size];

    printf("Enter those elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count[i]++;
            }
        }
    }

    printf("Duplicates elements in the Array would be: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d repeats: %d times\n", arr[i], count[i]);
    }

    return 0;
}