#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter your string here: \n");
    scanf("%s", str);

    int length = strlen(str);
    printf("The length of your string is %d", length);
    return 0;
}