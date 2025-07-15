#include <stdio.h>

// Type 3 Function
int checkOddEven()
{
    int num;
    printf("Enter your number here: \n");
    scanf("%d", &num);

    return num%2==0;
}

int main()
{
    int result = checkOddEven();
    if(result){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }

    return 0;
}
