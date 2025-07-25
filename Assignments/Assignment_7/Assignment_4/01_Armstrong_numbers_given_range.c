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

void checkArmstrongRange(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        int arm = 0;
        int temp = i;
        int digits = calDigits(temp);

        while (temp)
        {
            int ld = temp % 10;
            arm += pow(ld, digits);
            temp = temp / 10;
        }

        if (arm == i)
        {
            printf("%d is a armstrong number\n", i);
        }
    }
}

int main()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    checkArmstrongRange(&n);
    return 0;
}