#include <stdio.h>

int countDigits(int n)
{
    int digits = 0;
    while (n)
    {
        digits++;
        n = n / 10;
    }

    return digits;
}
int main()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    int ld = n % 10;
    int sum = 0;

    int fd = n;
    // while (temp)
    // {
    //     int digit = temp % 10;
    //     if (countDigits(temp) == 1)
    //     {
    //         sum = sum + digit;
    //     }
    //     temp = temp / 10;
    // }

    while (fd >= 10)
    {
        fd = fd / 10;
    }
    sum += fd + ld;
    printf("%d", sum);

    return 0;
}