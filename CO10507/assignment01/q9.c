#include <stdio.h>
int main()
{
    int a;
    printf("Enter Month number: ");
    scanf("%d", &a);

    switch (a)
    {
    case 2:
        printf("28 or 29");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30");
        break;
    default:
        printf("31");
    }

    return 0;
}