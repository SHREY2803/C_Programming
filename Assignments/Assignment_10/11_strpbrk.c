#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100];
    printf("Enter your first string here: \n");
    scanf("%s", str1);

    char substr[100];
    printf("Enter your substring to found in your main string here : \n");
    scanf(" %s", substr);

    char *pt;

    pt = strpbrk(str1, substr);
    if (pt != NULL)
    {
        printf("Your character found at index %d\n", pt - str1);
        printf("Remaining string is %s", pt);
    }
    else
    {
        printf("Your character is not present in string.\n");
    }

    return 0;
}