#include <stdio.h>

int checkOddEven()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        // printf("Number is even\n");
        return 1;
    }
    else
    {
        // printf("Number is odd\n");
        return 0;
    }
}

int checkPrime()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int checkPalindromeNumber()
{
    int n;
    printf("Now enter your number here: \n");
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
        return 1;
        // printf("Palindrome Number\n");
    }
    else
    {
        return 0;
        // printf("Not a palindrome Number\n");
    }
}

int checkNegativePositive()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Your number is a positive a number. \n");
        return 1;
    }
    else if (n < 0)
    {
        printf("Your number is a negative number. \n");
        return -1;
    }
    else
    {
        printf("Your number is zero. \n");
        return 0;
    }
}

int reverseNumber()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    int rev = 0;
    while (n)
    {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }

    // printf("Reverse of your number is %d\n", rev);
    return rev;
}
int sumOfDigits()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    int sum = 0;

    while (n)
    {
        int ld = n % 10;
        sum += ld;
        n = n / 10;
    }

    // printf("The sum of digits of your number is %d\n", sum);
    return sum;
}

int main()
{
    int task;
    printf("Press:\n");
    printf("1. To check if the number is even or odd.\n");
    printf("2. To check if the number is prime or not.\n");
    printf("3. To check if the number is a palindrome or not.\n");
    printf("4. To check if the number is positive, negative, or zero.\n");
    printf("5. To reverse the number.\n");
    printf("6. To find the sum of digits.\n");

    scanf("%d", &task);

    if (task < 1 || task > 6)
    {
        printf("No such operation available. Please enter a valid choice (1-6).\n");
        return 0;
    }

    if (task == 1)
    {
        if (checkOddEven())
        {
            printf("Even Number\n");
        }
        else
        {
            printf("Odd Number\n");
        }
    }
    else if (task == 2)
    {
        if (checkPrime())
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not a prime number");
        }
    }
    else if (task == 3)
    {
        if (checkPalindromeNumber())
        {
            printf("Palindrome Number");
        }
        else
        {
            printf("Not a Palindrome Number");
        }
    }
    else if (task == 4)
    {
        int result = checkNegativePositive();

        // Optional: use return value for some logic
        if (result == 1)
        {
            printf("Return value = 1 (positive)\n");
        }
        else if (result == -1)
        {
            printf("Return value = -1 (negative)\n");
        }
        else
        {
            printf("Return value = 0 (zero)\n");
        }
    }
    else if (task == 5)
    {
        int result = reverseNumber();
        printf("Reverse of your number is %d\n", result);
    }
    else if (task == 6)
    {
        int result = sumOfDigits();
        printf("The sum of digits of your number is %d\n", result);
    }

    return 0;
}