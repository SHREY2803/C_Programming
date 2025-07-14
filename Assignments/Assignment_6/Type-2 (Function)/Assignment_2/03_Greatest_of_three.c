#include <stdio.h>

void checkGreatestNumber(int a, int b, int c)
{

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
}
int main()
{
    int a, b, c;
    printf("Enter your three numbers here: \n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    checkGreatestNumber(a, b, c);
    return 0;
}