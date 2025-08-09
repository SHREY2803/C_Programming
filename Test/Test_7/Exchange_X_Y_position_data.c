#include <stdio.h>

void scanElementsOfArr(int *arr, int n)
{
    printf("Enter your array elements here: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printElementsOfArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void SwapTwoPositions(int *arr, int x, int y, int n)
{
    if (x < 1 || x > n || y < 1 || y > n)
    {
        printf("Invalid positions! Must be between 1 and %d.\n", n);
        return;
    }

    int temp = arr[y - 1];
    arr[y - 1] = arr[x - 1];
    arr[x - 1] = temp;
}

int main()
{
    int n;
    printf("Enter your size of array: \n");
    scanf("%d", &n);

    int arr[n];

    scanElementsOfArr(arr, n);

    int x, y;

    printf("Enter the positions that your want to swap: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("Your array elements before swapping x and y position indexes : \n");
    printElementsOfArr(arr, n);

    SwapTwoPositions(arr, x, y, n);

    printf("Your array elements after swapping x and y position indexes : \n");
    printElementsOfArr(arr, n);

    return 0;
}