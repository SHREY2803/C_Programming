#include <stdio.h>

int mystrcmp(char *str, char *btr)
{
    int i = 0;

    while (str[i] != '\0' && btr[i] != '\0')
    {
        if (str[i] != btr[i])
        {
            return str[i] - btr[i];
        }
        i++;
    }

    return str[i] - btr[i];
}

int main()
{
    char str[1000];
    printf("Enter your first string here: \n");
    scanf("%s", str);

    char btr[1000];
    printf("Enter your second string here: \n");
    scanf("%s", btr);

    int result = mystrcmp(str, btr);

    if (result == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string is smaller.\n");
    }
    else
    {
        printf("First string is greater.\n");
    }

    return 0;
}
