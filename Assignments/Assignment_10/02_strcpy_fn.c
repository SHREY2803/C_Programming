#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter your string here: \n");
    scanf("%s", str);

    char cpr[100];
    strcpy(cpr,str);
    printf("Copied string is %s",cpr);


    return 0;
}