#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number here:  \n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("%d (zero) is neither negative nor positive number", num);
    }
    else if (num > 1)
    {
        printf("%d is positive number", num);
    }
    else
    {
        printf("%d is a negative number", num);
    }

    return 0;
}