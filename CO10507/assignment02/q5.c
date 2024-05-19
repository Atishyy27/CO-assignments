#include <stdio.h>

int fact(int temp)
{
    int prod = 1;
    for (int i = 1; i <= temp; i++)
    {
        prod *= i;
    }
    return prod;
}

int Strong(int n)
{
    int digit, sum = 0, temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += fact(digit);
        temp /= 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int res = Strong(n);
    if (res == n)
    {
        printf("%d is an Strong number", n);
    }
    else
    {
        printf("%d is not not a Strong number", n);
    }
    return 0;
}
