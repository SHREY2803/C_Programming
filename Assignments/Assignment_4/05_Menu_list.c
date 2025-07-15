#include <stdio.h>

int checkOddEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int checkPrime(int n)
{

    if (n <= 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 0;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int checkPalindromeNumber(int n)
{
    if (n < 0)
    {
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

    return rev == n;
}

int checkNegativePositive(int n)
{
    if (n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int reverseNumber(int n)
{
    int rev = 0;
    while (n)
    {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }

    return rev;
}
int sumOfDigits(int n)
{
    int sum = 0;

    while (n)
    {
        int ld = n % 10;
        sum += ld;
        n = n / 10;
    }

    return sum;
}

#include <stdio.h>

int main()
{
    int task, n;

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

    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (task == 1)
    {
        checkOddEven(n) ? printf("Even Number\n") : printf("Odd Number\n");
    }
    else if (task == 2)
    {
        checkPrime(n) ? printf("Prime Number\n") : printf("Not a prime number\n");
    }
    else if (task == 3)
    {
        checkPalindromeNumber(n) ? printf("Palindrome Number\n") : printf("Not a palindrome number\n");
    }
    else if (task == 4)
    {
        int sign = checkNegativePositive(n);
        printf("%s\n", sign > 0 ? "Positive number" : (sign < 0 ? "Negative number" : "Zero"));
    }
    else if (task == 5)
    {
        printf("Reversed number = %d\n", reverseNumber(n));
    }
    else if (task == 6)
    {
        printf("Sum of digits = %d\n", sumOfDigits(n));
    }
   

    return 0;
}
