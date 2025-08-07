#include <stdio.h>
#include <string.h>

char *mystrlower(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    return str;
}

int mystrcasecmp(char *str, char *btr)
{
    char strCopy[1000];
    char btrCopy[1000];
    
    strcpy(strCopy, str);
    strcpy(btrCopy, btr);

    mystrlower(strCopy);
    mystrlower(btrCopy);;

    int i = 0;
    while (strCopy[i] != '\0' && btrCopy[i] != '\0')
    {
        if (strCopy[i] != btrCopy[i])
        {
            return strCopy[i] - btrCopy[i];
        }
        i++;
    }

    return strCopy[i] - btrCopy[i];
}

int main()
{
    char str[1000];
    printf("Enter your first string here: \n");
    scanf("%s", str);

    char btr[1000];
    printf("Enter your second string here: \n");
    scanf("%s", btr);

    int result = mystrcasecmp(str, btr);
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