#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n, int merged[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (arr1[i] >= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n)
    {
        merged[k++] = arr2[j++];
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2 * n];

    printf("Enter %d elements for the first array (sorted in descending order): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements for the second array (sorted in descending order): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    mergeArrays(arr1, arr2, n, merged);
    printf("Merged array after merging two arrays: ");
    printArray(merged, 2 * n);
    return 0;
}
