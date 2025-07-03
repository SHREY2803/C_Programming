#include <stdio.h>
#include <math.h>

int checkPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
            if (cnt > 2)
            {
                break;
            }
        }
    }

    if (cnt == 2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (checkPrime(i))
        {
            printf("%d is a Prime number\n", i);
        }
    }

    return 0;
}