#include <stdio.h>
#include <ctype.h>

int UpperCaseOrLowerCase()
{
    char ch;
    printf("Enter your character here: \n");
    scanf("%c", &ch);

    if (!isalpha(ch))
    {

        return -1;
    }
    else
    {
        if (ch >= 'A' && ch <= 'Z')
        {

            return 1;
        }
        else
        {

            return 0;
        }
    }
}

int main()
{
    int result = UpperCaseOrLowerCase();
    if (result == -1)
    {
        printf("Your character should be an alphabet\n");
    }
    else if (result == 1)
    {
        printf("Your character is a UpperCase character.");
    }
    else
    {
        printf("Your character is a LowerCase character.");
    }
    return 0;
}