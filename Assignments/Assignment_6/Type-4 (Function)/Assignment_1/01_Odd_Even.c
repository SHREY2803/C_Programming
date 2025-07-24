#include <stdio.h>

// Type 3 Function
int checkOddEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    int num;
    printf("Enter your number here: \n");
    scanf("%d", &num);

    int result = checkOddEven(num);
    if (result)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}
