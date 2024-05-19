#include <stdio.h>
int main()
{
    int ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("Alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Number");
    }
    else
    {
        printf("Special Character");
    }

    return 0;
}