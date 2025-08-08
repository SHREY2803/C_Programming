#include <stdio.h>
#include <string.h>

void removeOddIndexChars(char *str)
{
    int len = strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0) 
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main()
{
    char str[1000];

    printf("Enter your string: \n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeOddIndexChars(str);

    printf("String after removing odd index characters: %s\n", str);

    return 0;
}
