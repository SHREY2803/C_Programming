#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int temp;
    int pass = 1;
    int flag;

    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        printf("\nPass %d:\n", pass++);

        for (int j = 0; j < n - 1 - i; j++)
        {
            printf("  Comparing %d and %d", arr[j], arr[j + 1]);
            if (arr[j] > arr[j + 1])
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
                printf(" => swapped : ");
            }
            else
            {
                printf(" => OK        ");
            }

            printArray(arr, n);
        }

        if (!flag)
        {
            printf("No swaps in this pass, array is sorted early.\n");
            break;
        }
    }
}

int main()
{
    int arr[] = {8, 1, 4, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("\nFinal sorted array: ");
    printArray(arr, n);

    return 0;
}
