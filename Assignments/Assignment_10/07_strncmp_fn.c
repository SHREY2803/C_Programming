#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100];
    printf("Enter your first string here: \n");
    scanf("%s", str1);

    char str2[100];
    printf("Enter your second string here: \n");
    scanf("%s", str2);

    int res = strncmp(str1, str2,3);
    if (res == 0)
    {

        printf("Given strings are equal");
    }
    else if (res < 0)
    {
        printf("Second string is greater.");
    }
    else
    {
        printf("First string is greater");
    }

    return 0;
}