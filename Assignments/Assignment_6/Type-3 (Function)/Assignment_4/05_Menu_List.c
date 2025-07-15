#include <stdio.h>

void checkOddEven()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}

void checkPrime()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a prime number.\n");
        return;
    }

    int count = 0;
    int i = 1;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
        }
        i++;
    }

    if (count == 2)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("Not a prime number.\n");
    }
}

void checkPalindromeNumber()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

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

void checkNegativePositive()
{
    int n;
    printf("Now enter your number here: \n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Your number is a positive a number. \n");
    }
    else if (n < 0)
    {
        printf("Your number is a negative number. \n");
    }
    else
    {
        printf("Your number is zero. \n");
    }
}

void reverseNumber()
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

    printf("Reverse of your number is %d\n", rev);
}
void sumOfDigits()
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

    printf("The sum of digits of your number is %d\n", sum);
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
        checkOddEven();
    }
    else if (task == 2)
    {
        checkPrime();
    }
    else if (task == 3)
    {
        checkPalindromeNumber();
    }
    else if (task == 4)
    {
        checkNegativePositive();
    }
    else if (task == 5)
    {
        reverseNumber();
    }
    else if (task == 6)
    {
        sumOfDigits();
    }

    return 0;
}