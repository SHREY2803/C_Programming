#include <stdio.h>

int checkGreatestNumber()
{
    int a, b, c;
    printf("Enter your three numbers here: \n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            // printf("a is greatest.");
            return 1;
        }
        else
        {
            // printf("c is greatest");
            return 0;
        }
    }
    else if (b > c)
    {
        // printf("b is greatest");
        return 2;
    }
    else
    {
        // printf("c is greatest");
        return 0;
    }
}
int main()
{
    int result = checkGreatestNumber();
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