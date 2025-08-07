#include <stdio.h>

char *mystrchr(char *str, char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
        i++;
    }

    return NULL;
}

int main()
{
    char str[1000];
    printf("Enter your string here: ");
    scanf("%s", str);

    char ch;
    printf("Enter your character to find in the string.\n");
    scanf(" %c", &ch);

    char *result = mystrchr(str, ch);
    
    if (result == '\0')
    {
        printf("Character not found in the string");
    }
    else
    {
        printf("Character found at index %d", result - str);
    }


    return 0;
}