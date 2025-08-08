#include <stdio.h>
#include <string.h>

void replaceSpaces(char *str, char symbol)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = symbol;
        }
    }
}

int main()
{
    char str[1000];
    char symbol;

    printf("Enter your string: \n");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the special symbol to replace spaces: ");
    scanf(" %c", &symbol); 

    replaceSpaces(str, symbol);

    printf("Modified string: %s\n", str);

    return 0;
}
