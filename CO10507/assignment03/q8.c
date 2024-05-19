#include <stdio.h>
int main()
{
    char str[100];
    int length, i, isPalindrome = 1;
    printf("enter string");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    // Print the result
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
