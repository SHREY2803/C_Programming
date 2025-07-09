#include <stdio.h>

int printLastTwoDigits(int n)
{

    int temp = 0;
    for (int i = 1; i <= 2; i++)
    {
        int ld = n % 10;
        temp = (temp * 10) + ld;
        n = n / 10;
    }

    int rev = 0;
    while (temp)
    {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }

    return rev;
}
int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    int result = printLastTwoDigits(n);
    printf("last two digits of the number is : %d", result);
    return 0;
}