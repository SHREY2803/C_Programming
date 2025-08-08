#include <stdio.h>

int stringLength(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = stringLength(str1);
    len2 = stringLength(str2);

    if (len1 > len2)
    {
        printf("Larger string is: %s\n", str1);
    }
    else if (len2 > len1)
    {
        printf("Larger string is: %s\n", str2);
    }
    else
    {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}
