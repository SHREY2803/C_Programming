#include <stdio.h>

void findFirstLastDigitSum(int n)
{
    int ld = n % 10;
    int sum = 0;

    int fd = n;
    while (fd >= 10)
    {
        fd = fd / 10;
    }

    sum += fd + ld;
    printf("The sum of first digit(%d) and last digit(%d) is : %d", fd, ld, sum);
}
int main()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    findFirstLastDigitSum(n);

    return 0;
}