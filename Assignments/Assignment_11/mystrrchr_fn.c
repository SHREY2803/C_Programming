#include <stdio.h>
#include <string.h>

char *mystrrchr(char *str, char ch)
{
    int n = strlen(str);
    int i = n-1;
    while (i>=0)
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
        i--;
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

    char *result = mystrrchr(str, ch);

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