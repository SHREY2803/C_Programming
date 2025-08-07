#include <stdio.h>

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

int main()
{
    char str[1000];
    printf("Enter your string here: \n");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    mystrlower(str);
    printf("Your new string after converting to lowercase is : %s\n", str);
    return 0;
}