#include <stdio.h>

int checkPalindromeNumber()
{
    int n;

    printf("Enter your number here: \n");
    scanf("%d", &n);

    if (n < 0)
    {
        // printf("negative number is not a palindrome.");
        return 0;
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
        // printf("Palindrome Number\n");
        return 1;
    }
    else
    {
        // printf("Not a palindrome Number\n");
        return 0;
    }
}
int main()
{
    int result = checkPalindromeNumber();
    if (result)
    {
        printf("Palindrome Number\n");
    }
    else{
        printf("Not a Palindrome number\n");
    }
    return 0;
}