#include <stdio.h>

int checkPerfectNumber(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i != i)
            {
                sum += i + n / i;
            }
            else
            {
                sum += i;
            }
        }
    }

    return (sum == n);
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (checkPerfectNumber(i))
        {
            printf("%d is a Perfect Number\n", i);
        }
    }
    return 0;
}