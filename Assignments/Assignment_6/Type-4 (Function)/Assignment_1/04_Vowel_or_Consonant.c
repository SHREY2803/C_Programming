#include <stdio.h>
#include <ctype.h>

int vowelConsonant(char ch)
{

    if (!isalpha(ch)) // isalpha() function checks whether your character is alphabet or not.
    {

        return -1;
    }
    else
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
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
    char ch;
    printf("Enter your character here: \n");
    scanf("%c", &ch);

    int result = vowelConsonant(ch);
    if (result == -1)
    {
        printf("Your character should be an alphabet\n");
    }
    else if (result == 1)
    {
        printf("Your character is a vowel\n");
    }
    else
    {
        printf("Your character is a consonant\n");
    }

    return 0;
}