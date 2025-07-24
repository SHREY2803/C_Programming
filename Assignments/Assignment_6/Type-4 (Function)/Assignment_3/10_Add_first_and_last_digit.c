#include <stdio.h>

int findFirstLastDigitSum()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    int ld = n % 10;
    int sum = 0;

    int fd = n;
    while (fd >= 10)
    {
        fd = fd / 10;
    }

    sum += fd + ld;
    // printf("The sum of first digit(%d) and last digit(%d) is : %d", fd, ld, sum);
    return sum;
}
int main()
{
    int sum = findFirstLastDigitSum();
    printf("The sum of first digit and last digit is : %d", sum);

    return 0;
}