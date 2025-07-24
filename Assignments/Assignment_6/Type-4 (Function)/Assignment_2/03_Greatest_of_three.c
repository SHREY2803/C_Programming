#include <stdio.h>

int checkGreatestNumber(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return 1; // a is greatest (or tied)
    }
    else if (b >= a && b >= c)
    {
        return 2; // b is greatest (or tied)
    }
    else
    {
        return 3; // c is greatest
    }
}

int main()
{
    int a, b, c;
    printf("Enter your three numbers here: \n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int result = checkGreatestNumber(a, b, c);
    if (result == 1)
    {
        printf("a is greatest.");
    }
    else if (result == 2)
    {
        printf("b is greatest.");
    }
    else
    {
        printf("c is greatest.");
    }

    return 0;
}