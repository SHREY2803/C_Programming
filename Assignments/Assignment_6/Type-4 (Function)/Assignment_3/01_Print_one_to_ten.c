#include <stdio.h>

void oneToTen()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
}
int main()
{
    printf("Printed numbers from 1 to 10\n");
    
    oneToTen();
    return 0;
}