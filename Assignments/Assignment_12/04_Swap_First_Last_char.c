#include <stdio.h>
#include <string.h>

void swapCharacter(char *str)
{
    int n = strlen(str);
    if (n <= 1) return;

    
    char temp = str[n - 1];
    str[n - 1] = str[0];
    str[0] = temp;
}

int main()
{

    char str[1000];
    printf("Enter your string here: \n");
    scanf("%s", str);

    swapCharacter(str);
    printf("Your new string is %s",str);
    return 0;
}