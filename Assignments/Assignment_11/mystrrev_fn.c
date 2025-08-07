#include<stdio.h>
#include<string.h>

char* mystrrev(char *str){
    int n = strlen(str);
    int i = 0;
    int temp = n-1;
    char sample;
    while (i<temp)
    {
        sample = str[temp];
        str[temp] = str[i];
        str[i] = sample;

        temp--;
        i++;
    }

    return str;
    
}

int main(){
    char str[1000];
    printf("Enter your string here: ");
    scanf("%s", str);
    
    // printf("%d",sizeof(str));
    mystrrev(str);
    printf("Your reversed string is : %s\n",str);

    return 0;
}