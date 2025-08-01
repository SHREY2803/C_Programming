#include <stdio.h>

void inputElementsArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayElementsArray(int arr[], int n)
{
    printf("Your arrays elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteElementArray(int arr[], int *n, int num)
{
    int found = 0;
    for (int i = 0; i < *n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            for (int j = i; j < *n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            break;
        }
    }
    if (!found)
    {
        printf("Element %d not found, nothing deleted.\n", num);
    }
}

void TwoMaximumNumbers(int arr[], int n)
{
    int maxOne = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxOne < arr[i])
        {
            maxOne = arr[i];
        }
    }

    printf("First max number is: %d\n", maxOne);
    

    int maxTwo = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != maxOne && maxTwo < arr[i])
        {
            maxTwo = arr[i];
        }
    }

    printf("Second max number is: %d\n", maxTwo);
}

int main()
{
    int n;
    printf("Enter the size of your array here: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements for your array here:  \n");
    inputElementsArray(arr, n);

    displayElementsArray(arr, n);

    TwoMaximumNumbers(arr, n);

    displayElementsArray(arr, n);

    return 0;
}