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

void displayCommonElements(int arr[], int brr[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        int common = arr[i];
        int check = 0;

        // To skip duplicate values. 
        for (int k = 0; k < i; k++)
        {
            if(arr[k] == common){
                check = 1;
                break;
            }
        }
        if (check)
        {
            continue;
        }
        
        
        for (int j = 0; j < n2; j++)
        {
            if (common == brr[j])
            {
                printf("%d ",common);
                break;
            }
            
        }
        
    }
}
int main()
{
    int n1;
    printf("Enter the size of your first array here: \n");
    scanf("%d", &n1);

    int arr1[n1];

    int n2;
    printf("Enter the size of your second array here: \n");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements here for your first array:  \n");
    inputElementsArray(arr1, n1);

    printf("Enter elements here for your second array:  \n");
    inputElementsArray(arr2, n2);

    displayElementsArray(arr1, n1);
    displayElementsArray(arr2, n2);

    displayCommonElements(arr1, arr2, n1,n2);

    return 0;
}