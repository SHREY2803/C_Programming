#include <stdio.h>

int checkPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int count = 0;
    int i = 1;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
        }
        i++;
    }

    if (count == 2)
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
    printf("Enter the number here: \n");
    scanf("%d", &n);

    int result = checkPrime(n);
    if (result)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number.");
    }

    return 0;
}
