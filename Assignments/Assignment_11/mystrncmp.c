#include <stdio.h>

int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && i < n)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }

    if (i == n)
    {
        return 0;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[1000];
    printf("Enter your first string here: \n");
    scanf("%s", str1);

    char str2[1000];
    printf("Enter your second string here: \n");
    scanf("%s", str2);

    int n;
    printf("Enter till how many characters to compare:  \n");
    scanf("%d", &n);

    int result = mystrncmp(str1, str2, n);

    if (result == 0)
    {
        printf("Strings are equal (first %d characters).\n", n);
    }
    else if (result < 0)
    {
        printf("First string is smaller (in first %d characters).\n", n);
    }
    else
    {
        printf("First string is greater (in first %d characters).\n", n);
    }

    return 0;
}
