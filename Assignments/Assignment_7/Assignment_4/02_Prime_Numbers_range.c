#include <stdio.h>

void checkPrimeRange(int n)
{

    for (int i = 1; i <= n; i++)
    {

        if (i <= 1)
        {
            printf("%d is not a prime number\n", i);
            continue;
        }

        int cnt = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
                if (i / j != j)
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
            printf("%d is a prime number \n", i);
        }
    }
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    checkPrimeRange(n);

    return 0;
}