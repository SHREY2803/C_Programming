#include <stdio.h>

int calFactorial(int n)
{
    if (n < 0)
    {
        return -1; // factorial not defined
    }

    int fac = 1;

    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }

    return fac;
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    int result = calFactorial(n);
    if (result == -1)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("The factorial of your number is : %d\n", result);
    }

    return 0;
}
