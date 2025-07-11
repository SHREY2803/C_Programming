#include <stdio.h>

void checkPalindromeNumber(int n)
{
    if (n < 0)
    {
        printf("negative number is not a palindrome.");
        return;
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
        printf("Palindrome Number\n");
    }
    else
    {
        printf("Not a palindrome Number\n");
    }
}
int main()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    checkPalindromeNumber(n);
    return 0;
}