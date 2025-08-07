#include <stdio.h>

// Custom implementation of strstr (search for substring)
char *mystrstr(char *haystack, char *needle)
{
    if (*needle == '\0') // If the substring is empty, return the full string
        return haystack;

    for (int i = 0; haystack[i] != '\0'; i++)
    {
        int j = 0;
        // Compare characters from both strings
        while (needle[j] != '\0' && haystack[i + j] == needle[j])
        {
            j++;
        }

        // If we reached end of needle, full match is found
        if (needle[j] == '\0')
        {
            return &haystack[i];
        }
    }

    return NULL; // Substring not found
}

int main()
{
    char str[1000];
    char substr[1000];

    printf("Enter the main string (haystack):\n");
    scanf("%s", str);

    printf("Enter the substring to find (needle):\n");
    scanf("%s", substr);

    char *result = mystrstr(str, substr);

    if (result != NULL)
    {
        printf("Substring found at position: %ld\n", result - str);
        printf("Remaining string from match: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}
