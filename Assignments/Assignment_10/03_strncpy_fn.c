#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char temp[100];
    printf("Enter your string here: \n");
    scanf("%s", str);

    strcpy(temp,str);

    char cpr[100];
    strncpy(cpr,str,3);

    printf("Copied string is %s\n",temp);
    printf("Copied string till n is %s",cpr);




    return 0;
}