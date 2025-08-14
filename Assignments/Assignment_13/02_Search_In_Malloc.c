#include <stdio.h>
#include <stdlib.h>

int searchElement(int arr[], int n, int search_element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search_element)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int n;
    printf("Enter the size of array that you want: \n");
    scanf("%d", &n);

    // int arr[n];
    int *arr = (int *)malloc(sizeof(int) * n);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search_element;
    printf("Enter the element that you want to search in array.\n");
    scanf("%d", &search_element);

    int result = searchElement(arr, n, search_element);
    if (result != -1)
    {
        printf("Yes!! your element is there in array and is at index %d\n", result);
    }
    else
    {
        printf("Sorry!! but your element is not present in array.\n");
    }

    return 0;
}