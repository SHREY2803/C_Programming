#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100];
    printf("Enter your first string here: \n");
    scanf("%s", str1);

    char ch;
    printf("Enter your char to found in string here : \n");
    scanf(" %c", &ch);

    char *pt;

    pt = strrchr(str1, ch);
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