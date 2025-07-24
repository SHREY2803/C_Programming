#include <stdio.h>

int checkPerfectNumberRange()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

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
        if(sum == i){
            printf("%d is a perfect number.\n",i);
        }
    }
    return 0;

    
}

int main()
{
    checkPerfectNumberRange();
    
    return 0;
}