#include <stdio.h>
int main()
{
    int a, b, c, d, largest;
    printf("Enter the numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = a;
    if (b >= largest)
    {
        largest = b;
    }
    if (c >= largest)
    {
        largest = c;
    }
    if (d >= largest)
    {
        largest = d;
    }

    printf("The largest is %d", largest);

    return 0;
}