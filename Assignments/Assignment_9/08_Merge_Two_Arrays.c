// Online C compiler to run C program online
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
    int n1;
    printf("Enter the size of your first arr: ");
    scanf("%d", &n1);
    int arr1[n1];

    int n2;
    printf("Enter the size of your second arr: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter your array elements for your first array here: \n");
    inputArrElements(arr1, n1);

    printf("Enter your array elements for your second array here: \n");
    inputArrElements(arr2, n2);

    displayArrElements(arr1, n1);
    displayArrElements(arr2, n2);

    int mergedSize = n1 + n2;
    int arr3[mergedSize];

    // My Approach
    // for (int i = 0; i <= n1 - 1; i++)
    // {
    //     arr3[i] = arr1[i];
    // }

    // for (int i = n1; i <= mergedSize - 1; i++)
    // {
    //     arr3[i] = arr2[i - n1];
    // }

    // More readable
    // for (int i = 0; i < n1; i++)
    // {
    //     arr3[i] = arr1[i];
    // }

    // for (int i = 0; i < n2; i++)
    // {
    //     arr3[n1 + i] = arr2[i];
    // }

    for (int  i = 0; i < mergedSize; i++)
    {
        if(i<n1){
            arr3[i] = arr1[i];
        }
        else{
            arr3[i] = arr2[i-n1];
        }
    }
    
    
    
    displayArrElements(arr3, mergedSize);

    return 0;
}