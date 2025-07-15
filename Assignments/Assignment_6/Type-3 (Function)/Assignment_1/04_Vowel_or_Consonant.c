#include <stdio.h>
#include <ctype.h>

void vowelConsonant()
{
    char ch;
    printf("Enter your character here: \n");
    scanf("%c", &ch);

    if (!isalpha(ch)) // isalpha() function checks whether your character is alphabet or not.
    {
        printf("Your character should be an alphabet\n");
    }
    else
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("Your character is a vowel\n");
        }
        else
        {
            printf("Your character is a consonant\n");
        }
    }
}

int main()
{
    vowelConsonant();

    return 0;
}