#include <stdio.h>

char *mystrncpy(char *dest, char *str, int n)
{
    int i = 0;
    while (i < n && str[i]!='\0')
    {
        dest[i] = str[i];
        i++;
    }
    // dest[i] ='\0';
    while (i<n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main()
{
    char str[1000];

    printf("Enter your string here: \n");
    scanf("%s", str);

    char dest[1000];

    int n;
    printf("Enter how many characters you want to cut: \n");
    scanf("%d", &n);

    mystrncpy(dest, str, n);
    printf("The required copied substring is : %s",dest);

    return 0;
}