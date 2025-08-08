#include <stdio.h>
#include <string.h>

int countWords(char *str)
{
    int count = 0;
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {

        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[1000];

    printf("Enter your string: \n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int result = countWords(str);

    printf("Total no of words present in your string are %d\n", result);

    return 0;
}
