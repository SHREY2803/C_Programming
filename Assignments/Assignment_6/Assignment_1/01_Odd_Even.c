#include <stdio.h>

void checkOddEven(int n)
{
    if (n % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}

int main()
{
    int num;
    printf("Enter your number here: \n");
    scanf("%d", &num);

    checkOddEven(num);

    return 0;
}
