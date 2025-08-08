#include <stdio.h>

char *mystrncat(char *dest, const char *src, int n)
{
    int i = 0;
    int j = 0;

    // Move i to the end of dest
    while (dest[i] != '\0')
        i++;

    // Append up to n characters from src
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null-terminate the result
    dest[i] = '\0';

    return dest;
}
int main()
{
    char str1[50] = "Hello";
    char str2[] = "World";

    mystrncat(str1, str2, 3); // Append first 3 chars of "World"

    printf("Result: %s\n", str1);

    return 0;
}
