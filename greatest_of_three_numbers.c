#include <stdio.h>

int main()
{
    int a, b, c;
    a = 9;
    b = 10;
    c = 12;
    if (a > b)
    {
        if (a > c)
        {
            printf("a is greatest.");
        }
        else
        {
            printf("c is greatest");
        }
    }
    else if (b > c)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }

    return 0;
}