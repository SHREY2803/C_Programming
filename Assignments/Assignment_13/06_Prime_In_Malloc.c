#include <stdio.h>
#include <stdlib.h>

int checkPrimeNumber(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int count = 0;
    for (int i = 1; i * i <= n; i++)
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
    }
    if (count == 2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the size of array that you want: \n");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("All the prime numbers in the given array are: ");
    for (int i = 0; i < n; i++)
    {
        int result = checkPrimeNumber(arr[i]);
        if (result)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}