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

int main()
{
    int n;

    printf("Enter your number: \n");
    scanf("%d", &n);

    int temp1 = n;
    int temp2 = n;
    int arm = 0;
    int digits = 0;

    while (temp1)
    {
        digits++;
        temp1 = temp1 / 10;
    }

    while (temp2)
    {
        int ld = temp2 % 10;
        arm += int_pow(ld, digits);
        temp2 = temp2 / 10;
    }

    if (arm == n)
    {
        printf("It is an Armstrong number.\n");
    }
    else
    {
        printf("Not an Armstrong number.\n");
    }

    return 0;
}
