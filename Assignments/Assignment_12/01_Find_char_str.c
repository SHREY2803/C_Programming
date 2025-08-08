#include <stdio.h>

int searchChar(char *str, char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return i;
        }
        i++;
    }

    return -1;
}

int main()
{
    char str[1000];
    printf("Enter your string here: \n");
    scanf("%s", str);

    char ch;
    printf("Enter your character here to search in the string: \n");
    scanf(" %c", &ch);

    int result = searchChar(str, ch);
    if (result != -1)
    {
        printf("Your character is at index %d", result);
    }
    else
    {
        printf("Sorry!! your character is not present in the string.");
    }

    return 0;
}