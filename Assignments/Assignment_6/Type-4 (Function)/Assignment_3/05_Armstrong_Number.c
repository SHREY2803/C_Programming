#include <stdio.h>

int int_pow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int calDigits(int n)
{
    int digits = 0;
    while (n)
    {
        digits++;
        n = n / 10;
    }

    return digits;
}

int checkArmstrongNumber()
{
    int n;
    printf("Enter your number: \n");
    scanf("%d", &n);

    int arm = 0;
    int digits = calDigits(n);
    int temp = n;

    while (temp)
    {
        int ld = temp % 10;
        arm += int_pow(ld, digits);
        temp = temp / 10;
    }

    if (arm == n)
    {
        // printf("It is an Armstrong number.\n");
        return 1;
    }
    else
    {
        // printf("Not an Armstrong number.\n");
        return 0;
    }
}

int main()
{
    int result = checkArmstrongNumber();
    if (result)
    {
        printf("It is an Armstrong number.\n");
    }
    else
    {
        printf("Not an Armstrong number.\n");
    }

    return 0;
}
