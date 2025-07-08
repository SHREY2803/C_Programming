#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number here: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negative numbers are not a palindrome numbers.\n");
        return 0;
    }
    int temp = num;
    int rev = 0;

    while (temp)
    {
        int ld = temp % 10;
        rev = (rev * 10) + ld;
        temp = temp / 10;
    }

    if (rev == num)
    {
        printf("Your number is a palindrome number\n");
    }
    else
    {
        printf("Your number is not a palindrome number\n");
    }
    return 0;
}