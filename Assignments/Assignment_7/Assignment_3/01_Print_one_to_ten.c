#include <stdio.h>

void oneToTen(int *i)
{
    while (*i <= 10)
    {
        printf("%d ", *i);
        (*i)++;
    }
}
int main()
{
    int i = 1;
    printf("Printed numbers from 1 to 10\n");

    oneToTen(&i);
    return 0;
}