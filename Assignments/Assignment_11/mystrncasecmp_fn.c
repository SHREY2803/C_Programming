#include <stdio.h>

int toLowerChar(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int mystrncasecmp(const char *str1, const char *str2, int n)
{
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0')
    {
        char c1 = toLowerChar(str1[i]);
        char c2 = toLowerChar(str2[i]);

        if (c1 != c2)
            return c1 - c2;

        i++;
    }

    if (i == n)
        return 0;

    return toLowerChar(str1[i]) - toLowerChar(str2[i]);
}

int main()
{
    char str1[100];
    char str2[100];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    int result = mystrncasecmp(str1, str2, n);

    if (result == 0)
        printf("Strings are equal (first %d characters, ignoring case).\n", n);
    else if (result < 0)
        printf("First string is smaller.\n");
    else
        printf("First string is greater.\n");

    return 0;
}
