#include <stdio.h>
#include <stdlib.h>
int findMaxNumber(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int findMinNumber(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n;
    printf("Enter your array size here: \n");
    scanf("%d", &n);

    // int arr[n];
    int *arr = (int*)malloc(sizeof(int) * n);
    printf("Enter your arr elements here: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxNum = findMaxNumber(arr, n);
    int minNum = findMinNumber(arr, n);

    printf("Max number is %d and Min number is %d", maxNum, minNum);

    return 0;
}