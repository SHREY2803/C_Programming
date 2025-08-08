#include <stdio.h>
#include <string.h>

void removeNthIndex(char *str, int n)
{
    int length = strlen(str);
    if (n < 0 || n >= length)
    {
        printf("Invalid index!\n");
        return;
    }

    for (int i = n; i < length; i++)
    {
        str[i] = str[i + 1];
    }
}

int main()
{
    char str[1000];
    printf("Enter your string here : \n");
    scanf("%s", str);

    int n;
    printf("Which index your want to remove ?\n");
    scanf("%d", &n);

    removeNthIndex(str, n);
    printf("Your new string after removing character at index %d is: %s\n", n, str);
    return 0;
}