#include <stdio.h>

void checkDivisibility(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Divisible by both\n");
    }
    else if (num % 3 == 0)
    {
        printf("Divisible by three, but not by five\n");
    }
    else if (num % 5 == 0)
    {
        printf("Divisible by five, but not by three\n");
    }
    else
    {
        printf("Divisible by None\n");
    }
}
int main()
{
    int num;

    printf("Enter your number here: \n");
    scanf("%d", &num);

    checkDivisibility(num);

    return 0;
}