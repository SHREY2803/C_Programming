#include <stdio.h>

int main()
{
    int n = 5;
    int i = 1;

    printf("Table of five: \n");

    while (i <= 10)
    {
        printf("%d ", n);
        n += 5;
        i++;
    }

    return 0;
}