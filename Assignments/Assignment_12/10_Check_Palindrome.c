#include <stdio.h>
#include <string.h>

int checkPalindrome(char *str)
{
    int i = 0;
    int n = strlen(str);
    int j = n - 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    char str[1000];
    printf("Enter your string here: \n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int result = checkPalindrome(str);
    if (result)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    
    

    return 0;
}