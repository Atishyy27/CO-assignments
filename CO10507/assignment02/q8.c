#include <stdio.h>
int harmonicSum(int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (1 / n);
    }
    return sum;
}

int main()
{
    int n;
    float res;
    printf("Enter the number: ");
    scanf("%d", &n);
    res = harmonicSum(n);
    printf("The harmonic sum of %d numbers are %.2f", n, res);

    return 0;
}