#include <stdio.h>

int factorialNum(int n)
{
    int fac = 1;
    if (n == 0)
    {
        return fac;
    }
    while (n)
    {
        fac = fac * n;
        n--;
    }

    return fac;
}

int checkStrongNumber(int n)
{
    int strong = 0;
    int temp = n;

    while (temp)
    {
        int ld = temp % 10;
        strong = strong + factorialNum(ld);
        temp = temp / 10;
    }

    return strong == n;
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (checkStrongNumber(i))
        {
            printf("%d is a Strong number.\n", i);
        }
    }

    return 0;
}