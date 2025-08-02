#include <stdio.h>

void inputArrElements(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void displayArrElements(int *ptr, int n)
{
    printf("Your array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of your first arr: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements for your array here: \n");
    inputArrElements(arr, n);

    // First Approach (aux array)
    int aux[n];

    for (int i = 0; i <= n - 1; i++)
    {
        aux[i] = arr[n - 1 - i];
    }

    // Second Approach (optional, in-place)
    // int i = 0;
    // int j = n-1;

    // while(i<j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }

    displayArrElements(arr, n);
    displayArrElements(aux, n);

    return 0;
}