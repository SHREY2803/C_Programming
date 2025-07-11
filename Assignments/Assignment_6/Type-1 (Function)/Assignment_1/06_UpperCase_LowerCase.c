#include <stdio.h>
#include <ctype.h>

void UpperCaseOrLowerCase()
{
    char ch;
    printf("Enter your character here: \n");
    scanf("%c", &ch);

    if (!isalpha(ch))
    {
        printf("Your character should be an alphabet\n");
    }
    else
    {
        if (ch >= 'A' && ch <= 'Z')
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
    UpperCaseOrLowerCase();
    return 0;
}