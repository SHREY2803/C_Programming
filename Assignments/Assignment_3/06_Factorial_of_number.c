#include <stdio.h>

int main()
{
    int n;

    printf("Enter your number here: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    int fac = 1;

    if (n == 0)
    {
        printf("Factorial of zero is %d\n", fac);
        return 0;
    }
    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }

    printf("The factorial of your number is : %d", fac);
    return 0;
}