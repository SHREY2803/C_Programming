#include <stdio.h>

char *changeStr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            str[i] = '$';
        }
        i++;
    }

    return str;
}

int main()
{
    char str[1000];
    printf("Enter your string here: \n");
    scanf("%s",str);

    changeStr(str);
    printf("Your new string with desired changes is %s\n", str);
    return 0;
}