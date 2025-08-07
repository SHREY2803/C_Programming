#include <stdio.h>

char *mystrupr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >='a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    return str;
}

int main()
{
    char str[1000];
    printf("Enter your string here: \n");
    scanf("%s", str);

    mystrupr(str);
    printf("Your new string after capitalizing each characters is : %s\n", str);
    return 0;
}