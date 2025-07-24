#include <stdio.h>

int checkPalindrome(int n)
{

    if (n < 0)
    {
        return -1;
    }

    int temp = n;
    int rev = 0;

    while (temp)
    {
        int ld = temp % 10;
        rev = (rev * 10) + ld;
        temp = temp / 10;
    }

    if (rev == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    int result = checkPalindrome(n);
    if (result == -1)
    {
        printf("Negative numbers are not a palindrome numbers.\n");
    }
    else if (result == 1)
    {
        printf("Your number is a palindrome number\n");
    }
    else
    {
        printf("Your number is not a palindrome number\n");
    }
    return 0;
}