#include <stdio.h>

void copyArray(int *src, int *dest, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(dest + i) = *(src + i);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int src[n], dest[n];
    printf("Enter elements of source array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &src[i]);
    }
    copyArray(src, dest, n);
    printf("Elements of destination array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", dest[i]);
    }
    printf("\n");
    return 0;
}
