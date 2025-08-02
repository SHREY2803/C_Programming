#include <stdio.h>

void takeInputElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n)
{
    printf("The elements of the array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sumOfIndexes(int arr[], int brr[], int crr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}

int main()
{
    int n;
    printf("Enter the size for your arrays: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your array elements for array arr: \n");
    takeInputElements(arr, n);
    displayArray(arr, n);

    int brr[n];
    printf("Enter your array elements for array brr: \n");
    takeInputElements(brr, n);
    displayArray(brr, n);

    int crr[n];
    printf("The sum of the indexes of first and second array in third array is: \n");
    sumOfIndexes(arr, brr, crr, n);
    displayArray(crr, n);

    return 0;
}