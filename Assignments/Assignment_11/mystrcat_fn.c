#include <stdio.h>
char *mystrcat(char *dest, char *src)
{
    int i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}

int main()
{
    char dest[1000];
    printf("Enter your first string here: \n");
    scanf("%s", dest);

    char src[1000];
    printf("Enter your second string here: \n");
    scanf("%s", src);
    mystrcat(dest, src);

    printf("The combined word is %s", dest);

    return 0;
}
