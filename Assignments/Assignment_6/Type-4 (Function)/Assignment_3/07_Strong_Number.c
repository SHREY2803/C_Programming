#include <stdio.h>

int calFactorial(int n)
{
    int fac = 1;
    int i = 1;
    while (i <= n)
    {
        fac = fac * i;
        i++;
    }

    return fac;
}

int checkStrongNumber(int n)
{

    int temp = n;
    int strong = 0;

    while (temp)
    {
        int ld = temp % 10;
        strong = strong + calFactorial(ld);
        temp = temp / 10;
    }

    if (strong == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    int result = checkStrongNumber(n);
    if (result)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }

    return 0;
}
