#include <stdio.h>
#include <math.h>

int calDigits(int n)
{
    int digits = 0;
    while (n)
    {
        digits++;
        n = n / 10;
    }
    return digits;
}

int checkArmstrong(int n)
{
    int arm = 0;
    int temp = n;
    int digits = calDigits(temp);
    while (temp)
    {
        int ld = temp % 10;
        arm += pow(ld, digits);
        temp = temp / 10;
    }
    return (arm == n);
}

int main()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (checkArmstrong(i))
        {
            printf("%d is an Armstrong number.\n",i);
        }
        
    }

    return 0;
}