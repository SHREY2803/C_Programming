#include <stdio.h>

int checkPerfectNumberRange(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i <= 1)
        {
            continue;
        }

        int sum = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (i / j != j)
                {
                    sum += j + i / j;
                }
                else
                {
                    sum += j;
                }
            }
        }
        if (sum == i)
        {
            printf("%d is a perfect number.\n", i);
            total++;
        }
    }
    return total;
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    int total = checkPerfectNumberRange(n);
    printf("Total Armstrong numbers in range 1 to %d: %d\n", n, total);

    return 0;
}