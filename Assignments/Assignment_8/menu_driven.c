// Online C compiler to run C program online
#include <stdio.h>
void displayArray(int *ptr,int n){
    printf("The elements of the array are : ");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
}

int searchElement(int *ptr,int n, int num){
    for(int i=0;i<n;i++){
        if(ptr[i] == num){
            
            return i;
        }
    }
    return -1;
}

void deleteElementArray(int *ptr,int *n, int num){
    int del = searchElement(ptr,*n,num);
    // printf("%d",del);
    if(del !=-1){
        for(int i=del;i<*n-1;i++){
            ptr[i] = ptr[i+1];
        }
        (*n)--;
        printf("Element %d deleted successfully.\n", num);
    }
    else{
        printf("Your element is not present in array.\n");
    }
    
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int stop;
    
    do {
        printf("\nMenu:\n");
        printf("1. Display all elements of array.\n");
        printf("2. Search an element in array.\n");
        printf("3. Delete an element from array.\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d",&choice);
        
        if(choice == 1){
            displayArray(arr,n);
        }
        else if(choice ==2){
            int num;
            printf("Enter the number that you want to search: ");
            scanf("%d",&num);
            
            int result = searchElement(arr,n,num);
            if(result != -1){
                printf("The element that you wanted to search is on index %d\n",result);
            }
            else{
                printf("Your element is not present in array.\n");
            }
        }
        else if(choice == 3){
            int del;
            printf("Enter the number that you want to delete from array: ");
            scanf("%d",&del);
            deleteElementArray(arr,&n,del);
            displayArray(arr,n);
            
        }
        else{
            printf("Invalid Choice\n");
        }
        
        printf("\nDo you still want to do some operations? Enter '1' for yes or '0' for no.\n");
        
        scanf("%d",&stop);
        
    }while(stop);
    
    return 0;
}