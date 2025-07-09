#include <stdio.h>

void tableOfFive()
{
    int n = 5;
    int i = 1;

    while (i <= 10)
    {
        printf("%d ", n);
        n += 5;
        i++;
    }
}
int main()
{
    printf("Table of five: \n");
    tableOfFive();

    return 0;
}