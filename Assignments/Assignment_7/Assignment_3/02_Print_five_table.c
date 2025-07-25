#include <stdio.h>

void tableOfFive(int *n, int *i)
{
    while (*i <= 10)
    {
        printf("%d ", *n);
        *n += 5;
        (*i)++;
    }
}
int main()
{
    int n = 5;
    int i = 1;

    printf("Table of five: \n");
    tableOfFive(&n, &i);

    return 0;
}