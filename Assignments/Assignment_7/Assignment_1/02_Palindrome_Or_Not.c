#include <stdio.h>

// Type 2 41Function
void checkPalindrome(int *n)
{

    if (*n < 0)
    {
        printf("Negative numbers are not a palindrome numbers.\n");
        return;
    }

    int temp = *n;
    int rev = 0;

    while (temp)
    {
        int ld = temp % 10;
        rev = (rev * 10) + ld;
        temp = temp / 10;
    }

    if (rev == *n)
    {
        printf("Your number is a palindrome number\n");
    }
    else
    {
        printf("Your number is not a palindrome number\n");
    }
}

int main()
{
    int n;
    printf("Enter your number here: \n");
    scanf("%d", &n);

    checkPalindrome(&n);
    return 0;
}