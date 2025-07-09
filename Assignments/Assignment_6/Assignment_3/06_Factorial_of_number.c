#include <stdio.h>

void calFactorial(int n)
{
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }

    int fac = 1;

    if (n == 0)
    {
        printf("Factorial of zero is %d\n", fac);
        return; // Exit the function early
    }

    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }
    printf("The factorial of your number is : %d", fac);
}

int main()
{
    int n;

    printf("Enter your number here: ");
    scanf("%d", &n);

    calFactorial(n);

    return 0;
}