#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the length of each side: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 + s2 <= s3 || s2 + s2 <= s1 || s3 + s1 <= s2)
    {
        printf("Triangle does not exist");
    }
    else
    {
        if (s1 == s2 && s1 == s3)
        {
            printf("equilateral");
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3)
        {
            printf("Isosceles");
        }
        else
        {
            printf("scalene");
        }
    }
    return 0;
}
