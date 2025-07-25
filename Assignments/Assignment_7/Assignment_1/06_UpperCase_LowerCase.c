#include <stdio.h>
#include <ctype.h>

void UpperCaseOrLowerCase(char *ch)
{

    if (!isalpha(*ch))
    {
        printf("Your character should be an alphabet\n");
    }
    else
    {
        if (*ch >= 'A' && *ch <= 'Z')
        {
            printf("Your character is a UpperCase character.");
        }
        else
        {
            printf("Your character is a LowerCase character.");
        }
    }
}

int main()
{
    char ch;
    printf("Enter your character here: \n");
    scanf("%c", &ch);

    UpperCaseOrLowerCase(&ch);
    return 0;
}