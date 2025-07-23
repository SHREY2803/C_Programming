#include <stdio.h>

int checkDivisibility()
{
    int num;

    printf("Enter your number here: \n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        return 1;
        // printf("Divisible by both\n");
    }
    else if (num % 3 == 0)
    {
        return 2;
        // printf("Divisible by three, but not by five\n");
    }
    else if (num % 5 == 0)
    {
        return 3;
        // printf("Divisible by five, but not by three\n");
    }
    else
    {
        return 0;
        // printf("Divisible by None\n");
    }
}
int main()
{

    int result = checkDivisibility();
    if (result == 1)
    {
        printf("Divisible by both\n");
    }
    else if (result == 2)
    {
        printf("Divisible by three, but not by five\n");
    }
    else if (result == 3)
    {
        printf("Divisible by five, but not by three\n");
    }
    else
    {
        printf("Divisible by None\n");
    }

    return 0;
}