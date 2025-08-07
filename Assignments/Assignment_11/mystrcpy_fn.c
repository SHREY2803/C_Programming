#include <stdio.h>

char *mystrcpy(char *temp, char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        temp[i] = str[i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}

int main()
{
    char str[100];
    printf("Enter your string here: \n");
    scanf("%s", str);

    char temp[100];
    char *result = mystrcpy(temp, str);

    printf("Copied string is: %s\n", result);

    return 0;
}