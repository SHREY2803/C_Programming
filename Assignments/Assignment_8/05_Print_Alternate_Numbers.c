#include <stdio.h>

void printAlternateArray(int *ptr, int n)
{
    printf("The alternate numbers of your array are: ");
    for (int i = 0; i < n; i += 2)
    {
        printf("%d ", ptr[i]);
    }
}

int main()
{
    int n;
    printf("Enter your array size here: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your arr elements here: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printAlternateArray(arr, n);

    return 0;
}