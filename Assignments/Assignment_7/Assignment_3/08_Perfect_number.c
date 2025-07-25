#include <stdio.h>
#include <math.h>

void checkPerfectNumber(int *n)
{

    if (*n <= 1)
    {
        printf("Not a perfect number\n");
        return;
    }

    int sum = 1; // n/1 = n, so excluding n value directly and adding 1 directly as 1 is proper divisor.

    int i = 2;

    while (i <= sqrt(*n))
    {
        if (*n % i == 0)
        {
            int pair = *n / i;
            if (i != pair)
            {
                sum = sum + i + pair;
            }
            else
            {
                sum = sum + i;
            }
        }
        i++;
    }

    if (sum == *n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect number\n");
    }
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);
    checkPerfectNumber(&n);

    return 0;
}