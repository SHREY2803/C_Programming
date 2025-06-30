#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number here: \n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Your number is a positive a number. \n");
    }
    else if (num < 0)
    {
        printf("Your number is a negative number. \n");
    }
    else
    {
        printf("Your number is zero. \n");
    }
    return 0;
}