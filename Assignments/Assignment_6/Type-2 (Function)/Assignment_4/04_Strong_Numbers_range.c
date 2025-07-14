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

void checkStrongNumberRange(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int strong = 0;
        int temp = i;

        while (temp)
        {
            int ld = temp % 10;
            strong = strong + factorialNum(ld);
            temp = temp / 10;
        }

        if (strong == i)
        {
            printf("%d is a strong number\n", i);
        }
    }
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    checkStrongNumberRange(n);
    return 0;
}