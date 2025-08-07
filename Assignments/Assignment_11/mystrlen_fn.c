#include <stdio.h>

int mystrlen(char *str)
{
    int i = 0;
    int sum = 0;
    while (str[i] != '\0')
    {
        sum++;
        i++;
    }
    return sum;
}
int main()
{
    char str[1000];
    printf("Enter your string here: \n");
    scanf("%s", str);
    int result = mystrlen(str);

    printf("The actual length of your string is %d", result);

    return 0;
}