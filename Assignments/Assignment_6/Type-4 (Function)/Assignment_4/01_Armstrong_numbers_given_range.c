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

int checkArmstrongRange(int n) 
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int arm = 0, temp = i;
        int digits = calDigits(temp);

        while (temp)
        {
            int ld = temp % 10;
            arm += pow(ld, digits);
            temp = temp / 10;
        }

        if (arm == i)
        {
            printf("%d is an Armstrong number\n", i);
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    int total = checkArmstrongRange(n);
    printf("Total Armstrong numbers in range 1 to %d: %d\n", n, total);

    return 0;
}