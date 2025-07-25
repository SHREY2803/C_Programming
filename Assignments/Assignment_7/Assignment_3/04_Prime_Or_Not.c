#include <stdio.h>

void checkPrime(int *n)
{

    if (*n <= 1)
    {
        printf("Not a prime number.\n");
        return;
    }

    int count = 0;
    int i = 1;

    while (i * i <= *n)
    {
        if (*n % i == 0)
        {
            count++;
            if (*n / i != i)
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

int main()
{
    int n;
    printf("Enter the number here: \n");
    scanf("%d", &n);

    checkPrime(&n);

    return 0;
}
