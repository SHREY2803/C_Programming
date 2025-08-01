#include <stdio.h>

// void printEvenNumbers(int arr[], int n)
// {

//     printf("Even numbers of the array are: ");
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
// }

// void printOddNumbers(int arr[], int n)
// {

//     printf("Odd numbers of the array are: ");
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
// }

void printEvenAndOddNumbers(int arr[], int n)
{
    printf("Even numbers of the array are: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Odd numbers of the array are: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
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
    printEvenAndOddNumbers(arr, n);

    return 0;
}