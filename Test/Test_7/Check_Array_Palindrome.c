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

int checkPalindrome(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    while (i<j)
    {
        if (arr[i]!=arr[j])
        {
            return 0;
            
        }
        i++;
        j--;
    }

    return 1;
    
}
int main()
{
    int n;
    printf("Enter the size of array here: \n");
    scanf("%d", &n);

    int arr[n];
    scanElementsOfArr(arr, n);

    printf("Your array elements are : \n");
    printElementsOfArr(arr, n);

    int result = checkPalindrome(arr,n);
    if (result) 
    {
        printf("Palindrome Array");
    }
    else{
        printf("Not a Palindrome Array");
    }
    


    return 0;
}