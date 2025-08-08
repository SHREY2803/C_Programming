#include <stdio.h>

char *mystrnstr(const char *haystack, const char *needle, int n)
{
    int i, j;

    if (*needle == '\0') // Empty needle case
        return (char *)haystack;

    for (i = 0; haystack[i] != '\0' && i < n; i++)
    {
        // Start matching if first char matches
        if (haystack[i] == needle[0])
        {
            for (j = 0; needle[j] != '\0'; j++)
            {
                if (i + j >= n || haystack[i + j] != needle[j])
                    break;
            }
            if (needle[j] == '\0') // Entire needle matched
                return (char *)&haystack[i];
        }
    }
    return NULL; // Not found
}

int main()
{
    char text[] = "HelloWorld";
    char search[] = "World";

    char *result = mystrnstr(text, search, 8); // Search only in first 8 characters

    if (result != NULL)
        printf("Found: %s\n", result);
    else
        printf("Not found within limit.\n");

    return 0;
}
