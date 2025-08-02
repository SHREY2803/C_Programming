#include <stdio.h>

int sumAllNumbers(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter the size of array that you want: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sumAllNumbers(arr, n);
    printf("The sum of all elements of array is: %d", result);

    return 0;
}