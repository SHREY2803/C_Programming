#include <stdio.h>

int calFactorial()
{

    int n;
    printf("Enter your number here: ");
    scanf("%d", &n);

    if (n < 0)
    {
        // printf("Factorial is not defined for negative numbers.\n");
        return -1;
    }

    int fac = 1;

    if (n == 0)
    {
        // printf("Factorial of zero is %d\n", fac);
        return 0; // Exit the function with 0 value for zero input
    }

    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }
    // printf("The factorial of your number is : %d", fac);
    return fac;
}

int main()
{
    int result = calFactorial();
    if (result == -1)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (result == 0)
    {
        printf("Factorial of zero is %d\n", result);
    }
    else
    {
        printf("The factorial of your number is : %d", result);
    }

    return 0;
}