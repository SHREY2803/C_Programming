#include <stdio.h>

int countVowels(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
        i++;
    }

    return count;
}

int main()
{
    char str[1000];
    printf("Enter your string here: \n");
    scanf("%s", str);

    int result = countVowels(str);
    if (result)
    {
        printf("There are total %d vowels present in your string.", result);
    }
    else
    {
        printf("Vowels are not present in your string.");
    }

    return 0;
}