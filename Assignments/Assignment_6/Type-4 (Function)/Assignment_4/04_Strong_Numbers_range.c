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

int checkStrongNumberRange(int n)
{
    int total = 0;
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
            total++;
        }
    }
    return total;
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    int total = checkStrongNumberRange(n);
    printf("Total Armstrong numbers in range 1 to %d: %d\n", n, total);
    return 0;
}