#include <stdio.h>
#include <string.h>

char* reverseString(char *str)
{
    int len = strlen(str);
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        i++;
        j--;
    }

    return str;
}

int main()
{
    char str[1000];
    printf("Enter your string here: ");
    scanf("%s", str);

    char *result = reverseString(str);

    printf("Reverse of your string is: %s",result);
    return 0;
}
